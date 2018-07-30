// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: StoreSecret.proto

#include "StoreSecret.pb.h"

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
namespace opentxs {
namespace proto {
class StoreSecretDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<StoreSecret>
      _instance;
} _StoreSecret_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace protobuf_StoreSecret_2eproto {
void InitDefaultsStoreSecretImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::opentxs::proto::_StoreSecret_default_instance_;
    new (ptr) ::opentxs::proto::StoreSecret();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::opentxs::proto::StoreSecret::InitAsDefaultInstance();
}

void InitDefaultsStoreSecret() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsStoreSecretImpl);
}

}  // namespace protobuf_StoreSecret_2eproto
namespace opentxs {
namespace proto {

// ===================================================================

void StoreSecret::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int StoreSecret::kVersionFieldNumber;
const int StoreSecret::kTypeFieldNumber;
const int StoreSecret::kPrimaryFieldNumber;
const int StoreSecret::kSecondaryFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

StoreSecret::StoreSecret()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_StoreSecret_2eproto::InitDefaultsStoreSecret();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:opentxs.proto.StoreSecret)
}
StoreSecret::StoreSecret(const StoreSecret& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  primary_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_primary()) {
    primary_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.primary_);
  }
  secondary_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_secondary()) {
    secondary_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.secondary_);
  }
  ::memcpy(&version_, &from.version_,
    static_cast<size_t>(reinterpret_cast<char*>(&type_) -
    reinterpret_cast<char*>(&version_)) + sizeof(type_));
  // @@protoc_insertion_point(copy_constructor:opentxs.proto.StoreSecret)
}

void StoreSecret::SharedCtor() {
  _cached_size_ = 0;
  primary_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  secondary_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&version_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&type_) -
      reinterpret_cast<char*>(&version_)) + sizeof(type_));
}

StoreSecret::~StoreSecret() {
  // @@protoc_insertion_point(destructor:opentxs.proto.StoreSecret)
  SharedDtor();
}

void StoreSecret::SharedDtor() {
  primary_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  secondary_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void StoreSecret::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const StoreSecret& StoreSecret::default_instance() {
  ::protobuf_StoreSecret_2eproto::InitDefaultsStoreSecret();
  return *internal_default_instance();
}

StoreSecret* StoreSecret::New(::google::protobuf::Arena* arena) const {
  StoreSecret* n = new StoreSecret;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void StoreSecret::Clear() {
// @@protoc_insertion_point(message_clear_start:opentxs.proto.StoreSecret)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(!primary_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*primary_.UnsafeRawStringPointer())->clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(!secondary_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*secondary_.UnsafeRawStringPointer())->clear();
    }
  }
  if (cached_has_bits & 12u) {
    ::memset(&version_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&type_) -
        reinterpret_cast<char*>(&version_)) + sizeof(type_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool StoreSecret::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:opentxs.proto.StoreSecret)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 version = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_version();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &version_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .opentxs.proto.SecretType type = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::opentxs::proto::SecretType_IsValid(value)) {
            set_type(static_cast< ::opentxs::proto::SecretType >(value));
          } else {
            unknown_fields_stream.WriteVarint32(16u);
            unknown_fields_stream.WriteVarint32(
                static_cast< ::google::protobuf::uint32>(value));
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string primary = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_primary()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string secondary = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_secondary()));
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
  // @@protoc_insertion_point(parse_success:opentxs.proto.StoreSecret)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:opentxs.proto.StoreSecret)
  return false;
#undef DO_
}

void StoreSecret::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:opentxs.proto.StoreSecret)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 version = 1;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->version(), output);
  }

  // optional .opentxs.proto.SecretType type = 2;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->type(), output);
  }

  // optional string primary = 3;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->primary(), output);
  }

  // optional string secondary = 4;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->secondary(), output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:opentxs.proto.StoreSecret)
}

size_t StoreSecret::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:opentxs.proto.StoreSecret)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  if (_has_bits_[0 / 32] & 15u) {
    // optional string primary = 3;
    if (has_primary()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->primary());
    }

    // optional string secondary = 4;
    if (has_secondary()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->secondary());
    }

    // optional uint32 version = 1;
    if (has_version()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->version());
    }

    // optional .opentxs.proto.SecretType type = 2;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void StoreSecret::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const StoreSecret*>(&from));
}

void StoreSecret::MergeFrom(const StoreSecret& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:opentxs.proto.StoreSecret)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 15u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_primary();
      primary_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.primary_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_secondary();
      secondary_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.secondary_);
    }
    if (cached_has_bits & 0x00000004u) {
      version_ = from.version_;
    }
    if (cached_has_bits & 0x00000008u) {
      type_ = from.type_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void StoreSecret::CopyFrom(const StoreSecret& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:opentxs.proto.StoreSecret)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StoreSecret::IsInitialized() const {
  return true;
}

void StoreSecret::Swap(StoreSecret* other) {
  if (other == this) return;
  InternalSwap(other);
}
void StoreSecret::InternalSwap(StoreSecret* other) {
  using std::swap;
  primary_.Swap(&other->primary_);
  secondary_.Swap(&other->secondary_);
  swap(version_, other->version_);
  swap(type_, other->type_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string StoreSecret::GetTypeName() const {
  return "opentxs.proto.StoreSecret";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)