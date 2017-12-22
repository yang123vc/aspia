// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: category_open_files.proto

#ifndef PROTOBUF_category_5fopen_5ffiles_2eproto__INCLUDED
#define PROTOBUF_category_5fopen_5ffiles_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
// @@protoc_insertion_point(includes)

namespace protobuf_category_5fopen_5ffiles_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsOpenFile_ItemImpl();
void InitDefaultsOpenFile_Item();
void InitDefaultsOpenFileImpl();
void InitDefaultsOpenFile();
inline void InitDefaults() {
  InitDefaultsOpenFile_Item();
  InitDefaultsOpenFile();
}
}  // namespace protobuf_category_5fopen_5ffiles_2eproto
namespace aspia {
namespace proto {
class OpenFile;
class OpenFileDefaultTypeInternal;
extern OpenFileDefaultTypeInternal _OpenFile_default_instance_;
class OpenFile_Item;
class OpenFile_ItemDefaultTypeInternal;
extern OpenFile_ItemDefaultTypeInternal _OpenFile_Item_default_instance_;
}  // namespace proto
}  // namespace aspia
namespace aspia {
namespace proto {

// ===================================================================

class OpenFile_Item : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:aspia.proto.OpenFile.Item) */ {
 public:
  OpenFile_Item();
  virtual ~OpenFile_Item();

  OpenFile_Item(const OpenFile_Item& from);

  inline OpenFile_Item& operator=(const OpenFile_Item& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  OpenFile_Item(OpenFile_Item&& from) noexcept
    : OpenFile_Item() {
    *this = ::std::move(from);
  }

  inline OpenFile_Item& operator=(OpenFile_Item&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const OpenFile_Item& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const OpenFile_Item* internal_default_instance() {
    return reinterpret_cast<const OpenFile_Item*>(
               &_OpenFile_Item_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(OpenFile_Item* other);
  friend void swap(OpenFile_Item& a, OpenFile_Item& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline OpenFile_Item* New() const PROTOBUF_FINAL { return New(NULL); }

  OpenFile_Item* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const OpenFile_Item& from);
  void MergeFrom(const OpenFile_Item& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(OpenFile_Item* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string user_name = 2;
  void clear_user_name();
  static const int kUserNameFieldNumber = 2;
  const ::std::string& user_name() const;
  void set_user_name(const ::std::string& value);
  #if LANG_CXX11
  void set_user_name(::std::string&& value);
  #endif
  void set_user_name(const char* value);
  void set_user_name(const char* value, size_t size);
  ::std::string* mutable_user_name();
  ::std::string* release_user_name();
  void set_allocated_user_name(::std::string* user_name);

  // string file_path = 4;
  void clear_file_path();
  static const int kFilePathFieldNumber = 4;
  const ::std::string& file_path() const;
  void set_file_path(const ::std::string& value);
  #if LANG_CXX11
  void set_file_path(::std::string&& value);
  #endif
  void set_file_path(const char* value);
  void set_file_path(const char* value, size_t size);
  ::std::string* mutable_file_path();
  ::std::string* release_file_path();
  void set_allocated_file_path(::std::string* file_path);

  // uint32 id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::uint32 id() const;
  void set_id(::google::protobuf::uint32 value);

  // uint32 lock_count = 3;
  void clear_lock_count();
  static const int kLockCountFieldNumber = 3;
  ::google::protobuf::uint32 lock_count() const;
  void set_lock_count(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:aspia.proto.OpenFile.Item)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr user_name_;
  ::google::protobuf::internal::ArenaStringPtr file_path_;
  ::google::protobuf::uint32 id_;
  ::google::protobuf::uint32 lock_count_;
  mutable int _cached_size_;
  friend struct ::protobuf_category_5fopen_5ffiles_2eproto::TableStruct;
  friend void ::protobuf_category_5fopen_5ffiles_2eproto::InitDefaultsOpenFile_ItemImpl();
};
// -------------------------------------------------------------------

class OpenFile : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:aspia.proto.OpenFile) */ {
 public:
  OpenFile();
  virtual ~OpenFile();

  OpenFile(const OpenFile& from);

  inline OpenFile& operator=(const OpenFile& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  OpenFile(OpenFile&& from) noexcept
    : OpenFile() {
    *this = ::std::move(from);
  }

  inline OpenFile& operator=(OpenFile&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const OpenFile& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const OpenFile* internal_default_instance() {
    return reinterpret_cast<const OpenFile*>(
               &_OpenFile_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(OpenFile* other);
  friend void swap(OpenFile& a, OpenFile& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline OpenFile* New() const PROTOBUF_FINAL { return New(NULL); }

  OpenFile* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const OpenFile& from);
  void MergeFrom(const OpenFile& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(OpenFile* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  typedef OpenFile_Item Item;

  // accessors -------------------------------------------------------

  // repeated .aspia.proto.OpenFile.Item item = 1;
  int item_size() const;
  void clear_item();
  static const int kItemFieldNumber = 1;
  const ::aspia::proto::OpenFile_Item& item(int index) const;
  ::aspia::proto::OpenFile_Item* mutable_item(int index);
  ::aspia::proto::OpenFile_Item* add_item();
  ::google::protobuf::RepeatedPtrField< ::aspia::proto::OpenFile_Item >*
      mutable_item();
  const ::google::protobuf::RepeatedPtrField< ::aspia::proto::OpenFile_Item >&
      item() const;

  // @@protoc_insertion_point(class_scope:aspia.proto.OpenFile)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::aspia::proto::OpenFile_Item > item_;
  mutable int _cached_size_;
  friend struct ::protobuf_category_5fopen_5ffiles_2eproto::TableStruct;
  friend void ::protobuf_category_5fopen_5ffiles_2eproto::InitDefaultsOpenFileImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// OpenFile_Item

// uint32 id = 1;
inline void OpenFile_Item::clear_id() {
  id_ = 0u;
}
inline ::google::protobuf::uint32 OpenFile_Item::id() const {
  // @@protoc_insertion_point(field_get:aspia.proto.OpenFile.Item.id)
  return id_;
}
inline void OpenFile_Item::set_id(::google::protobuf::uint32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.OpenFile.Item.id)
}

// string user_name = 2;
inline void OpenFile_Item::clear_user_name() {
  user_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& OpenFile_Item::user_name() const {
  // @@protoc_insertion_point(field_get:aspia.proto.OpenFile.Item.user_name)
  return user_name_.GetNoArena();
}
inline void OpenFile_Item::set_user_name(const ::std::string& value) {
  
  user_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aspia.proto.OpenFile.Item.user_name)
}
#if LANG_CXX11
inline void OpenFile_Item::set_user_name(::std::string&& value) {
  
  user_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:aspia.proto.OpenFile.Item.user_name)
}
#endif
inline void OpenFile_Item::set_user_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  user_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aspia.proto.OpenFile.Item.user_name)
}
inline void OpenFile_Item::set_user_name(const char* value, size_t size) {
  
  user_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aspia.proto.OpenFile.Item.user_name)
}
inline ::std::string* OpenFile_Item::mutable_user_name() {
  
  // @@protoc_insertion_point(field_mutable:aspia.proto.OpenFile.Item.user_name)
  return user_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* OpenFile_Item::release_user_name() {
  // @@protoc_insertion_point(field_release:aspia.proto.OpenFile.Item.user_name)
  
  return user_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void OpenFile_Item::set_allocated_user_name(::std::string* user_name) {
  if (user_name != NULL) {
    
  } else {
    
  }
  user_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), user_name);
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.OpenFile.Item.user_name)
}

// uint32 lock_count = 3;
inline void OpenFile_Item::clear_lock_count() {
  lock_count_ = 0u;
}
inline ::google::protobuf::uint32 OpenFile_Item::lock_count() const {
  // @@protoc_insertion_point(field_get:aspia.proto.OpenFile.Item.lock_count)
  return lock_count_;
}
inline void OpenFile_Item::set_lock_count(::google::protobuf::uint32 value) {
  
  lock_count_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.OpenFile.Item.lock_count)
}

// string file_path = 4;
inline void OpenFile_Item::clear_file_path() {
  file_path_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& OpenFile_Item::file_path() const {
  // @@protoc_insertion_point(field_get:aspia.proto.OpenFile.Item.file_path)
  return file_path_.GetNoArena();
}
inline void OpenFile_Item::set_file_path(const ::std::string& value) {
  
  file_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aspia.proto.OpenFile.Item.file_path)
}
#if LANG_CXX11
inline void OpenFile_Item::set_file_path(::std::string&& value) {
  
  file_path_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:aspia.proto.OpenFile.Item.file_path)
}
#endif
inline void OpenFile_Item::set_file_path(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  file_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aspia.proto.OpenFile.Item.file_path)
}
inline void OpenFile_Item::set_file_path(const char* value, size_t size) {
  
  file_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aspia.proto.OpenFile.Item.file_path)
}
inline ::std::string* OpenFile_Item::mutable_file_path() {
  
  // @@protoc_insertion_point(field_mutable:aspia.proto.OpenFile.Item.file_path)
  return file_path_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* OpenFile_Item::release_file_path() {
  // @@protoc_insertion_point(field_release:aspia.proto.OpenFile.Item.file_path)
  
  return file_path_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void OpenFile_Item::set_allocated_file_path(::std::string* file_path) {
  if (file_path != NULL) {
    
  } else {
    
  }
  file_path_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), file_path);
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.OpenFile.Item.file_path)
}

// -------------------------------------------------------------------

// OpenFile

// repeated .aspia.proto.OpenFile.Item item = 1;
inline int OpenFile::item_size() const {
  return item_.size();
}
inline void OpenFile::clear_item() {
  item_.Clear();
}
inline const ::aspia::proto::OpenFile_Item& OpenFile::item(int index) const {
  // @@protoc_insertion_point(field_get:aspia.proto.OpenFile.item)
  return item_.Get(index);
}
inline ::aspia::proto::OpenFile_Item* OpenFile::mutable_item(int index) {
  // @@protoc_insertion_point(field_mutable:aspia.proto.OpenFile.item)
  return item_.Mutable(index);
}
inline ::aspia::proto::OpenFile_Item* OpenFile::add_item() {
  // @@protoc_insertion_point(field_add:aspia.proto.OpenFile.item)
  return item_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::aspia::proto::OpenFile_Item >*
OpenFile::mutable_item() {
  // @@protoc_insertion_point(field_mutable_list:aspia.proto.OpenFile.item)
  return &item_;
}
inline const ::google::protobuf::RepeatedPtrField< ::aspia::proto::OpenFile_Item >&
OpenFile::item() const {
  // @@protoc_insertion_point(field_list:aspia.proto.OpenFile.item)
  return item_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace aspia

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_category_5fopen_5ffiles_2eproto__INCLUDED
