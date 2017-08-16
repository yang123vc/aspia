// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: key_exchange.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "key_exchange.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace aspia {
namespace proto {
class HelloMessageDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<HelloMessage>
     _instance;
} _HelloMessage_default_instance_;

namespace protobuf_key_5fexchange_2eproto {

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
};

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _HelloMessage_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_HelloMessage_default_instance_);}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
}
} // anonymous namespace

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}

}  // namespace protobuf_key_5fexchange_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int HelloMessage::kPublicKeyFieldNumber;
const int HelloMessage::kNonceFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

HelloMessage::HelloMessage()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_key_5fexchange_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:aspia.proto.HelloMessage)
}
HelloMessage::HelloMessage(const HelloMessage& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  public_key_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.public_key().size() > 0) {
    public_key_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.public_key_);
  }
  nonce_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.nonce().size() > 0) {
    nonce_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.nonce_);
  }
  // @@protoc_insertion_point(copy_constructor:aspia.proto.HelloMessage)
}

void HelloMessage::SharedCtor() {
  public_key_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  nonce_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

HelloMessage::~HelloMessage() {
  // @@protoc_insertion_point(destructor:aspia.proto.HelloMessage)
  SharedDtor();
}

void HelloMessage::SharedDtor() {
  public_key_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  nonce_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void HelloMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const HelloMessage& HelloMessage::default_instance() {
  protobuf_key_5fexchange_2eproto::InitDefaults();
  return *internal_default_instance();
}

HelloMessage* HelloMessage::New(::google::protobuf::Arena* arena) const {
  HelloMessage* n = new HelloMessage;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void HelloMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:aspia.proto.HelloMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  public_key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  nonce_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool HelloMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::NewPermanentCallback(&_internal_metadata_,
          &::google::protobuf::internal::InternalMetadataWithArenaLite::
              mutable_unknown_fields));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:aspia.proto.HelloMessage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bytes public_key = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_public_key()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes nonce = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_nonce()));
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
  // @@protoc_insertion_point(parse_success:aspia.proto.HelloMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:aspia.proto.HelloMessage)
  return false;
#undef DO_
}

void HelloMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:aspia.proto.HelloMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes public_key = 1;
  if (this->public_key().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1, this->public_key(), output);
  }

  // bytes nonce = 2;
  if (this->nonce().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      2, this->nonce(), output);
  }

  output->WriteRaw((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).data(),
                   static_cast<int>((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size()));
  // @@protoc_insertion_point(serialize_end:aspia.proto.HelloMessage)
}

size_t HelloMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:aspia.proto.HelloMessage)
  size_t total_size = 0;

  total_size += (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size();

  // bytes public_key = 1;
  if (this->public_key().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->public_key());
  }

  // bytes nonce = 2;
  if (this->nonce().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->nonce());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void HelloMessage::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const HelloMessage*>(&from));
}

void HelloMessage::MergeFrom(const HelloMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:aspia.proto.HelloMessage)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.public_key().size() > 0) {

    public_key_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.public_key_);
  }
  if (from.nonce().size() > 0) {

    nonce_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.nonce_);
  }
}

void HelloMessage::CopyFrom(const HelloMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:aspia.proto.HelloMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool HelloMessage::IsInitialized() const {
  return true;
}

void HelloMessage::Swap(HelloMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void HelloMessage::InternalSwap(HelloMessage* other) {
  using std::swap;
  public_key_.Swap(&other->public_key_);
  nonce_.Swap(&other->nonce_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string HelloMessage::GetTypeName() const {
  return "aspia.proto.HelloMessage";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// HelloMessage

// bytes public_key = 1;
void HelloMessage::clear_public_key() {
  public_key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& HelloMessage::public_key() const {
  // @@protoc_insertion_point(field_get:aspia.proto.HelloMessage.public_key)
  return public_key_.GetNoArena();
}
void HelloMessage::set_public_key(const ::std::string& value) {
  
  public_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aspia.proto.HelloMessage.public_key)
}
#if LANG_CXX11
void HelloMessage::set_public_key(::std::string&& value) {
  
  public_key_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:aspia.proto.HelloMessage.public_key)
}
#endif
void HelloMessage::set_public_key(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  public_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aspia.proto.HelloMessage.public_key)
}
void HelloMessage::set_public_key(const void* value, size_t size) {
  
  public_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aspia.proto.HelloMessage.public_key)
}
::std::string* HelloMessage::mutable_public_key() {
  
  // @@protoc_insertion_point(field_mutable:aspia.proto.HelloMessage.public_key)
  return public_key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* HelloMessage::release_public_key() {
  // @@protoc_insertion_point(field_release:aspia.proto.HelloMessage.public_key)
  
  return public_key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void HelloMessage::set_allocated_public_key(::std::string* public_key) {
  if (public_key != NULL) {
    
  } else {
    
  }
  public_key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), public_key);
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.HelloMessage.public_key)
}

// bytes nonce = 2;
void HelloMessage::clear_nonce() {
  nonce_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& HelloMessage::nonce() const {
  // @@protoc_insertion_point(field_get:aspia.proto.HelloMessage.nonce)
  return nonce_.GetNoArena();
}
void HelloMessage::set_nonce(const ::std::string& value) {
  
  nonce_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aspia.proto.HelloMessage.nonce)
}
#if LANG_CXX11
void HelloMessage::set_nonce(::std::string&& value) {
  
  nonce_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:aspia.proto.HelloMessage.nonce)
}
#endif
void HelloMessage::set_nonce(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  nonce_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aspia.proto.HelloMessage.nonce)
}
void HelloMessage::set_nonce(const void* value, size_t size) {
  
  nonce_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aspia.proto.HelloMessage.nonce)
}
::std::string* HelloMessage::mutable_nonce() {
  
  // @@protoc_insertion_point(field_mutable:aspia.proto.HelloMessage.nonce)
  return nonce_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* HelloMessage::release_nonce() {
  // @@protoc_insertion_point(field_release:aspia.proto.HelloMessage.nonce)
  
  return nonce_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void HelloMessage::set_allocated_nonce(::std::string* nonce) {
  if (nonce != NULL) {
    
  } else {
    
  }
  nonce_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), nonce);
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.HelloMessage.nonce)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace aspia

// @@protoc_insertion_point(global_scope)
