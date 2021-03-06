//
// Aspia Project
// Copyright (C) 2018 Dmitry Chapyshev <dmitry@aspia.ru>
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program. If not, see <https://www.gnu.org/licenses/>.
//

#include "client/file_transfer.h"

#include <QTimerEvent>

#include "client/file_status.h"
#include "client/file_transfer_queue_builder.h"

namespace aspia {

FileTransfer::FileTransfer(Type type, QObject* parent)
    : QObject(parent),
      type_(type)
{
    actions_.insert(OtherError, QPair<Actions, Action>(Abort, Ask));
    actions_.insert(DirectoryCreateError,
                    QPair<Actions, Action>(Abort | Skip | SkipAll, Ask));
    actions_.insert(FileCreateError,
                    QPair<Actions, Action>(Abort | Skip | SkipAll, Ask));
    actions_.insert(FileOpenError,
                    QPair<Actions, Action>(Abort | Skip | SkipAll, Ask));
    actions_.insert(FileAlreadyExists,
                    QPair<Actions, Action>(Abort | Skip | SkipAll | Replace | ReplaceAll, Ask));
    actions_.insert(FileWriteError,
                    QPair<Actions, Action>(Abort | Skip | SkipAll, Ask));
    actions_.insert(FileReadError,
                    QPair<Actions, Action>(Abort | Skip | SkipAll, Ask));
}

void FileTransfer::start(const QString& source_path,
                         const QString& target_path,
                         const QList<Item>& items)
{
    builder_ = new FileTransferQueueBuilder();

    connect(builder_, &FileTransferQueueBuilder::started, this, &FileTransfer::started);
    connect(builder_, &FileTransferQueueBuilder::error, this, &FileTransfer::taskQueueError);
    connect(builder_, &FileTransferQueueBuilder::finished, this, &FileTransfer::taskQueueReady);

    if (type_ == Downloader)
    {
        connect(builder_, &FileTransferQueueBuilder::newRequest, this, &FileTransfer::remoteRequest);
    }
    else
    {
        Q_ASSERT(type_ == Uploader);
        connect(builder_, &FileTransferQueueBuilder::newRequest, this, &FileTransfer::localRequest);
    }

    connect(builder_, &FileTransferQueueBuilder::finished,
            builder_, &FileTransferQueueBuilder::deleteLater);

    builder_->start(source_path, target_path, items);
}

void FileTransfer::stop()
{
    cancel_timer_id_ = startTimer(std::chrono::seconds(5));
    is_canceled_ = true;
}

FileTransfer::Actions FileTransfer::availableActions(Error error_type) const
{
    return actions_[error_type].first;
}

FileTransfer::Action FileTransfer::defaultAction(Error error_type) const
{
    return actions_[error_type].second;
}

void FileTransfer::setDefaultAction(Error error_type, Action action)
{
    actions_[error_type].second = action;
}

FileTransferTask& FileTransfer::currentTask()
{
    return tasks_.front();
}

void FileTransfer::targetReply(const proto::file_transfer::Request& request,
                               const proto::file_transfer::Reply& reply)
{
    if (tasks_.isEmpty())
        return;

    if (request.has_create_directory_request())
    {
        if (reply.status() == proto::file_transfer::STATUS_SUCCESS ||
            reply.status() == proto::file_transfer::STATUS_PATH_ALREADY_EXISTS)
        {
            processNextTask();
            return;
        }

        processError(DirectoryCreateError,
                     tr("Failed to create directory \"%1\": %2")
                     .arg(currentTask().targetPath())
                     .arg(fileStatusToString(reply.status())));
    }
    else if (request.has_upload_request())
    {
        if (reply.status() != proto::file_transfer::STATUS_SUCCESS)
        {
            Error error_type = FileCreateError;

            if (reply.status() == proto::file_transfer::STATUS_PATH_ALREADY_EXISTS)
                error_type = FileAlreadyExists;

            processError(error_type,
                         tr("Failed to create file \"%1\": %2")
                         .arg(currentTask().targetPath())
                         .arg(fileStatusToString(reply.status())));
            return;
        }

        FileRequest* request =
            FileRequest::packetRequest(proto::file_transfer::PacketRequest::NO_FLAGS);
        connect(request, &FileRequest::replyReady, this, &FileTransfer::sourceReply);
        sourceRequest(request);
    }
    else if (request.has_packet())
    {
        if (reply.status() != proto::file_transfer::STATUS_SUCCESS)
        {
            processError(FileWriteError,
                         tr("Failed to write file \"%1\": %2")
                         .arg(currentTask().targetPath())
                         .arg(fileStatusToString(reply.status())));
            return;
        }

        if (currentTask().size() && total_size_)
        {
            int64_t packet_size = request.packet().data().size();

            task_transfered_size_ += packet_size;
            total_transfered_size_ += packet_size;

            int task_percentage = task_transfered_size_ * 100 / currentTask().size();
            int total_percentage = total_transfered_size_ * 100 / total_size_;

            if (task_percentage != task_percentage_ || total_percentage != total_percentage_)
            {
                task_percentage_ = task_percentage;
                total_percentage_ = total_percentage;

                emit progressChanged(total_percentage_, task_percentage_);
            }
        }

        if (request.packet().flags() & proto::file_transfer::Packet::LAST_PACKET)
        {
            processNextTask();
            return;
        }

        uint32_t flags = proto::file_transfer::PacketRequest::NO_FLAGS;
        if (is_canceled_)
            flags = proto::file_transfer::PacketRequest::CANCEL;

        FileRequest* request = FileRequest::packetRequest(flags);
        connect(request, &FileRequest::replyReady, this, &FileTransfer::sourceReply);
        sourceRequest(request);
    }
    else
    {
        emit error(this, OtherError, tr("An unexpected response to the request was received"));
    }
}

void FileTransfer::sourceReply(const proto::file_transfer::Request& request,
                               const proto::file_transfer::Reply& reply)
{
    if (tasks_.isEmpty())
        return;

    if (request.has_download_request())
    {
        if (reply.status() != proto::file_transfer::STATUS_SUCCESS)
        {
            processError(FileOpenError,
                         tr("Failed to open file \"%1\": %2")
                         .arg(currentTask().sourcePath()
                         .arg(fileStatusToString(reply.status()))));
            return;
        }

        FileRequest* request = FileRequest::uploadRequest(currentTask().targetPath(),
                                                          currentTask().overwrite());
        connect(request, &FileRequest::replyReady, this, &FileTransfer::targetReply);
        targetRequest(request);
    }
    else if (request.has_packet_request())
    {
        if (reply.status() != proto::file_transfer::STATUS_SUCCESS)
        {
            processError(FileReadError,
                         tr("Failed to read file \"%1\": %2")
                         .arg(currentTask().sourcePath())
                         .arg(fileStatusToString(reply.status())));
            return;
        }

        FileRequest* request = FileRequest::packet(reply.packet());
        connect(request, &FileRequest::replyReady, this, &FileTransfer::targetReply);
        targetRequest(request);
    }
    else
    {
        emit error(this, OtherError, tr("An unexpected response to the request was received"));
    }
}

void FileTransfer::timerEvent(QTimerEvent* event)
{
    if (event->timerId() == cancel_timer_id_)
    {
        Q_ASSERT(is_canceled_);

        killTimer(cancel_timer_id_);
        cancel_timer_id_ = 0;

        tasks_.clear();

        emit finished();
    }
}

void FileTransfer::taskQueueError(const QString& message)
{
    emit error(this, OtherError, message);
}

void FileTransfer::taskQueueReady()
{
    Q_ASSERT(builder_ != nullptr);

    tasks_ = builder_->taskQueue();

    for (const auto& task : tasks_)
        total_size_ += task.size();

    processTask(false);
}

void FileTransfer::applyAction(Error error_type, Action action)
{
    switch (action)
    {
        case Action::Abort:
            emit finished();
            break;

        case Action::Replace:
        case Action::ReplaceAll:
        {
            if (action == Action::ReplaceAll)
                setDefaultAction(error_type, action);

            processTask(true);
        }
        break;

        case Action::Skip:
        case Action::SkipAll:
        {
            if (action == Action::SkipAll)
                setDefaultAction(error_type, action);

            processNextTask();
        }
        break;

        default:
            qFatal("Unexpected action");
            break;
    }
}

void FileTransfer::processTask(bool overwrite)
{
    task_percentage_ = 0;
    task_transfered_size_ = 0;

    FileTransferTask& task = currentTask();

    task.setOverwrite(overwrite);

    emit currentItemChanged(task.sourcePath(), task.targetPath());

    if (task.isDirectory())
    {
        FileRequest* request = FileRequest::createDirectoryRequest(task.targetPath());
        connect(request, &FileRequest::replyReady, this, &FileTransfer::targetReply);
        targetRequest(request);
    }
    else
    {
        FileRequest* request = FileRequest::FileRequest::downloadRequest(task.sourcePath());
        connect(request, &FileRequest::replyReady, this, &FileTransfer::sourceReply);
        sourceRequest(request);
    }
}

void FileTransfer::processNextTask()
{
    if (is_canceled_)
        tasks_.clear();

    if (!tasks_.isEmpty())
    {
        // Delete the task only after confirmation of its successful execution.
        tasks_.pop_front();
    }

    if (tasks_.isEmpty())
    {
        if (cancel_timer_id_)
            killTimer(cancel_timer_id_);

        emit finished();
        return;
    }

    processTask(false);
}

void FileTransfer::processError(Error error_type, const QString& message)
{
    Action action = defaultAction(error_type);
    if (action != Ask)
    {
        applyAction(error_type, action);
        return;
    }

    emit error(this, error_type, message);
}

void FileTransfer::sourceRequest(FileRequest* request)
{
    if (type_ == Downloader)
    {
        emit remoteRequest(request);
    }
    else
    {
        Q_ASSERT(type_ == Uploader);
        emit localRequest(request);
    }
}

void FileTransfer::targetRequest(FileRequest* request)
{
    if (type_ == Downloader)
    {
        emit localRequest(request);
    }
    else
    {
        Q_ASSERT(type_ == Uploader);
        emit remoteRequest(request);
    }
}

} // namespace aspia
