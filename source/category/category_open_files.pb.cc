// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: category_open_files.proto

#include "category_open_files.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace aspia {
namespace proto {
class OpenFile_ItemDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<OpenFile_Item>
      _instance;
} _OpenFile_Item_default_instance_;
class OpenFileDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<OpenFile>
      _instance;
} _OpenFile_default_instance_;
}  // namespace proto
}  // namespace aspia
namespace protobuf_category_5fopen_5ffiles_2eproto {
void InitDefaultsOpenFile_ItemImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::aspia::proto::_OpenFile_Item_default_instance_;
    new (ptr) ::aspia::proto::OpenFile_Item();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::aspia::proto::OpenFile_Item::InitAsDefaultInstance();
}

void InitDefaultsOpenFile_Item() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsOpenFile_ItemImpl);
}

void InitDefaultsOpenFileImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_category_5fopen_5ffiles_2eproto::InitDefaultsOpenFile_Item();
  {
    void* ptr = &::aspia::proto::_OpenFile_default_instance_;
    new (ptr) ::aspia::proto::OpenFile();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::aspia::proto::OpenFile::InitAsDefaultInstance();
}

void InitDefaultsOpenFile() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsOpenFileImpl);
}

}  // namespace protobuf_category_5fopen_5ffiles_2eproto
namespace aspia {
namespace proto {

// ===================================================================

void OpenFile_Item::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int OpenFile_Item::kIdFieldNumber;
const int OpenFile_Item::kUserNameFieldNumber;
const int OpenFile_Item::kLockCountFieldNumber;
const int OpenFile_Item::kFilePathFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

OpenFile_Item::OpenFile_Item()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_category_5fopen_5ffiles_2eproto::InitDefaultsOpenFile_Item();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:aspia.proto.OpenFile.Item)
}
OpenFile_Item::OpenFile_Item(const OpenFile_Item& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  user_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.user_name().size() > 0) {
    user_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.user_name_);
  }
  file_path_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.file_path().size() > 0) {
    file_path_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.file_path_);
  }
  ::memcpy(&id_, &from.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&lock_count_) -
    reinterpret_cast<char*>(&id_)) + sizeof(lock_count_));
  // @@protoc_insertion_point(copy_constructor:aspia.proto.OpenFile.Item)
}

void OpenFile_Item::SharedCtor() {
  user_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  file_path_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&lock_count_) -
      reinterpret_cast<char*>(&id_)) + sizeof(lock_count_));
  _cached_size_ = 0;
}

OpenFile_Item::~OpenFile_Item() {
  // @@protoc_insertion_point(destructor:aspia.proto.OpenFile.Item)
  SharedDtor();
}

void OpenFile_Item::SharedDtor() {
  user_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  file_path_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void OpenFile_Item::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const OpenFile_Item& OpenFile_Item::default_instance() {
  ::protobuf_category_5fopen_5ffiles_2eproto::InitDefaultsOpenFile_Item();
  return *internal_default_instance();
}

OpenFile_Item* OpenFile_Item::New(::google::protobuf::Arena* arena) const {
  OpenFile_Item* n = new OpenFile_Item;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void OpenFile_Item::Clear() {
// @@protoc_insertion_point(message_clear_start:aspia.proto.OpenFile.Item)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  user_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  file_path_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&lock_count_) -
      reinterpret_cast<char*>(&id_)) + sizeof(lock_count_));
  _internal_metadata_.Clear();
}

bool OpenFile_Item::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:aspia.proto.OpenFile.Item)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string user_name = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_user_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->user_name().data(), static_cast<int>(this->user_name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "aspia.proto.OpenFile.Item.user_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 lock_count = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &lock_count_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string file_path = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_file_path()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->file_path().data(), static_cast<int>(this->file_path().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "aspia.proto.OpenFile.Item.file_path"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:aspia.proto.OpenFile.Item)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:aspia.proto.OpenFile.Item)
  return false;
#undef DO_
}

void OpenFile_Item::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:aspia.proto.OpenFile.Item)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 id = 1;
  if (this->id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->id(), output);
  }

  // string user_name = 2;
  if (this->user_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->user_name().data(), static_cast<int>(this->user_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "aspia.proto.OpenFile.Item.user_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->user_name(), output);
  }

  // uint32 lock_count = 3;
  if (this->lock_count() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->lock_count(), output);
  }

  // string file_path = 4;
  if (this->file_path().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->file_path().data(), static_cast<int>(this->file_path().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "aspia.proto.OpenFile.Item.file_path");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->file_path(), output);
  }

  output->WriteRaw((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).data(),
                   static_cast<int>((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size()));
  // @@protoc_insertion_point(serialize_end:aspia.proto.OpenFile.Item)
}

size_t OpenFile_Item::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:aspia.proto.OpenFile.Item)
  size_t total_size = 0;

  total_size += (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size();

  // string user_name = 2;
  if (this->user_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->user_name());
  }

  // string file_path = 4;
  if (this->file_path().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->file_path());
  }

  // uint32 id = 1;
  if (this->id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->id());
  }

  // uint32 lock_count = 3;
  if (this->lock_count() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->lock_count());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void OpenFile_Item::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const OpenFile_Item*>(&from));
}

void OpenFile_Item::MergeFrom(const OpenFile_Item& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:aspia.proto.OpenFile.Item)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.user_name().size() > 0) {

    user_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.user_name_);
  }
  if (from.file_path().size() > 0) {

    file_path_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.file_path_);
  }
  if (from.id() != 0) {
    set_id(from.id());
  }
  if (from.lock_count() != 0) {
    set_lock_count(from.lock_count());
  }
}

void OpenFile_Item::CopyFrom(const OpenFile_Item& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:aspia.proto.OpenFile.Item)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool OpenFile_Item::IsInitialized() const {
  return true;
}

void OpenFile_Item::Swap(OpenFile_Item* other) {
  if (other == this) return;
  InternalSwap(other);
}
void OpenFile_Item::InternalSwap(OpenFile_Item* other) {
  using std::swap;
  user_name_.Swap(&other->user_name_);
  file_path_.Swap(&other->file_path_);
  swap(id_, other->id_);
  swap(lock_count_, other->lock_count_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string OpenFile_Item::GetTypeName() const {
  return "aspia.proto.OpenFile.Item";
}


// ===================================================================

void OpenFile::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int OpenFile::kItemFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

OpenFile::OpenFile()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_category_5fopen_5ffiles_2eproto::InitDefaultsOpenFile();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:aspia.proto.OpenFile)
}
OpenFile::OpenFile(const OpenFile& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      item_(from.item_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:aspia.proto.OpenFile)
}

void OpenFile::SharedCtor() {
  _cached_size_ = 0;
}

OpenFile::~OpenFile() {
  // @@protoc_insertion_point(destructor:aspia.proto.OpenFile)
  SharedDtor();
}

void OpenFile::SharedDtor() {
}

void OpenFile::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const OpenFile& OpenFile::default_instance() {
  ::protobuf_category_5fopen_5ffiles_2eproto::InitDefaultsOpenFile();
  return *internal_default_instance();
}

OpenFile* OpenFile::New(::google::protobuf::Arena* arena) const {
  OpenFile* n = new OpenFile;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void OpenFile::Clear() {
// @@protoc_insertion_point(message_clear_start:aspia.proto.OpenFile)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  item_.Clear();
  _internal_metadata_.Clear();
}

bool OpenFile::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:aspia.proto.OpenFile)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .aspia.proto.OpenFile.Item item = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_item()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:aspia.proto.OpenFile)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:aspia.proto.OpenFile)
  return false;
#undef DO_
}

void OpenFile::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:aspia.proto.OpenFile)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .aspia.proto.OpenFile.Item item = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->item_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->item(static_cast<int>(i)), output);
  }

  output->WriteRaw((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).data(),
                   static_cast<int>((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size()));
  // @@protoc_insertion_point(serialize_end:aspia.proto.OpenFile)
}

size_t OpenFile::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:aspia.proto.OpenFile)
  size_t total_size = 0;

  total_size += (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size();

  // repeated .aspia.proto.OpenFile.Item item = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->item_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->item(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void OpenFile::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const OpenFile*>(&from));
}

void OpenFile::MergeFrom(const OpenFile& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:aspia.proto.OpenFile)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  item_.MergeFrom(from.item_);
}

void OpenFile::CopyFrom(const OpenFile& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:aspia.proto.OpenFile)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool OpenFile::IsInitialized() const {
  return true;
}

void OpenFile::Swap(OpenFile* other) {
  if (other == this) return;
  InternalSwap(other);
}
void OpenFile::InternalSwap(OpenFile* other) {
  using std::swap;
  item_.InternalSwap(&other->item_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string OpenFile::GetTypeName() const {
  return "aspia.proto.OpenFile";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace aspia

// @@protoc_insertion_point(global_scope)
