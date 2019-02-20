// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: StoragePurse.proto

#include "StoragePurse.pb.h"

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
class StoragePurseDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<StoragePurse>
      _instance;
} _StoragePurse_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace protobuf_StoragePurse_2eproto {
void InitDefaultsStoragePurseImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_StorageItemHash_2eproto::InitDefaultsStorageItemHash();
  {
    void* ptr = &::opentxs::proto::_StoragePurse_default_instance_;
    new (ptr) ::opentxs::proto::StoragePurse();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::opentxs::proto::StoragePurse::InitAsDefaultInstance();
}

void InitDefaultsStoragePurse() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsStoragePurseImpl);
}

}  // namespace protobuf_StoragePurse_2eproto
namespace opentxs {
namespace proto {

// ===================================================================

void StoragePurse::InitAsDefaultInstance() {
  ::opentxs::proto::_StoragePurse_default_instance_._instance.get_mutable()->purse_ = const_cast< ::opentxs::proto::StorageItemHash*>(
      ::opentxs::proto::StorageItemHash::internal_default_instance());
}
void StoragePurse::clear_purse() {
  if (purse_ != NULL) purse_->Clear();
  clear_has_purse();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int StoragePurse::kVersionFieldNumber;
const int StoragePurse::kNotaryFieldNumber;
const int StoragePurse::kUnitFieldNumber;
const int StoragePurse::kPurseFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

StoragePurse::StoragePurse()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_StoragePurse_2eproto::InitDefaultsStoragePurse();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:opentxs.proto.StoragePurse)
}
StoragePurse::StoragePurse(const StoragePurse& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  notary_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_notary()) {
    notary_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.notary_);
  }
  unit_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_unit()) {
    unit_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.unit_);
  }
  if (from.has_purse()) {
    purse_ = new ::opentxs::proto::StorageItemHash(*from.purse_);
  } else {
    purse_ = NULL;
  }
  version_ = from.version_;
  // @@protoc_insertion_point(copy_constructor:opentxs.proto.StoragePurse)
}

void StoragePurse::SharedCtor() {
  _cached_size_ = 0;
  notary_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  unit_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&purse_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&version_) -
      reinterpret_cast<char*>(&purse_)) + sizeof(version_));
}

StoragePurse::~StoragePurse() {
  // @@protoc_insertion_point(destructor:opentxs.proto.StoragePurse)
  SharedDtor();
}

void StoragePurse::SharedDtor() {
  notary_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  unit_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete purse_;
}

void StoragePurse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const StoragePurse& StoragePurse::default_instance() {
  ::protobuf_StoragePurse_2eproto::InitDefaultsStoragePurse();
  return *internal_default_instance();
}

StoragePurse* StoragePurse::New(::google::protobuf::Arena* arena) const {
  StoragePurse* n = new StoragePurse;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void StoragePurse::Clear() {
// @@protoc_insertion_point(message_clear_start:opentxs.proto.StoragePurse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(!notary_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*notary_.UnsafeRawStringPointer())->clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(!unit_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*unit_.UnsafeRawStringPointer())->clear();
    }
    if (cached_has_bits & 0x00000004u) {
      GOOGLE_DCHECK(purse_ != NULL);
      purse_->Clear();
    }
  }
  version_ = 0u;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool StoragePurse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:opentxs.proto.StoragePurse)
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

      // optional string notary = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_notary()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string unit = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_unit()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .opentxs.proto.StorageItemHash purse = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_purse()));
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
  // @@protoc_insertion_point(parse_success:opentxs.proto.StoragePurse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:opentxs.proto.StoragePurse)
  return false;
#undef DO_
}

void StoragePurse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:opentxs.proto.StoragePurse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 version = 1;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->version(), output);
  }

  // optional string notary = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->notary(), output);
  }

  // optional string unit = 3;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->unit(), output);
  }

  // optional .opentxs.proto.StorageItemHash purse = 4;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      4, *this->purse_, output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:opentxs.proto.StoragePurse)
}

size_t StoragePurse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:opentxs.proto.StoragePurse)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  if (_has_bits_[0 / 32] & 15u) {
    // optional string notary = 2;
    if (has_notary()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->notary());
    }

    // optional string unit = 3;
    if (has_unit()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->unit());
    }

    // optional .opentxs.proto.StorageItemHash purse = 4;
    if (has_purse()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *this->purse_);
    }

    // optional uint32 version = 1;
    if (has_version()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->version());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void StoragePurse::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const StoragePurse*>(&from));
}

void StoragePurse::MergeFrom(const StoragePurse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:opentxs.proto.StoragePurse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 15u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_notary();
      notary_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.notary_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_unit();
      unit_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.unit_);
    }
    if (cached_has_bits & 0x00000004u) {
      mutable_purse()->::opentxs::proto::StorageItemHash::MergeFrom(from.purse());
    }
    if (cached_has_bits & 0x00000008u) {
      version_ = from.version_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void StoragePurse::CopyFrom(const StoragePurse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:opentxs.proto.StoragePurse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StoragePurse::IsInitialized() const {
  return true;
}

void StoragePurse::Swap(StoragePurse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void StoragePurse::InternalSwap(StoragePurse* other) {
  using std::swap;
  notary_.Swap(&other->notary_);
  unit_.Swap(&other->unit_);
  swap(purse_, other->purse_);
  swap(version_, other->version_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string StoragePurse::GetTypeName() const {
  return "opentxs.proto.StoragePurse";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)