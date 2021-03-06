// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SpentTokenList.proto

#include "SpentTokenList.pb.h"

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
class SpentTokenListDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<SpentTokenList>
      _instance;
} _SpentTokenList_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace protobuf_SpentTokenList_2eproto {
void InitDefaultsSpentTokenListImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::opentxs::proto::_SpentTokenList_default_instance_;
    new (ptr) ::opentxs::proto::SpentTokenList();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::opentxs::proto::SpentTokenList::InitAsDefaultInstance();
}

void InitDefaultsSpentTokenList() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsSpentTokenListImpl);
}

}  // namespace protobuf_SpentTokenList_2eproto
namespace opentxs {
namespace proto {

// ===================================================================

void SpentTokenList::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SpentTokenList::kVersionFieldNumber;
const int SpentTokenList::kNotaryFieldNumber;
const int SpentTokenList::kUnitFieldNumber;
const int SpentTokenList::kSeriesFieldNumber;
const int SpentTokenList::kSpentFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SpentTokenList::SpentTokenList()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_SpentTokenList_2eproto::InitDefaultsSpentTokenList();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:opentxs.proto.SpentTokenList)
}
SpentTokenList::SpentTokenList(const SpentTokenList& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      spent_(from.spent_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  notary_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_notary()) {
    notary_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.notary_);
  }
  unit_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_unit()) {
    unit_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.unit_);
  }
  ::memcpy(&series_, &from.series_,
    static_cast<size_t>(reinterpret_cast<char*>(&version_) -
    reinterpret_cast<char*>(&series_)) + sizeof(version_));
  // @@protoc_insertion_point(copy_constructor:opentxs.proto.SpentTokenList)
}

void SpentTokenList::SharedCtor() {
  _cached_size_ = 0;
  notary_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  unit_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&series_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&version_) -
      reinterpret_cast<char*>(&series_)) + sizeof(version_));
}

SpentTokenList::~SpentTokenList() {
  // @@protoc_insertion_point(destructor:opentxs.proto.SpentTokenList)
  SharedDtor();
}

void SpentTokenList::SharedDtor() {
  notary_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  unit_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void SpentTokenList::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const SpentTokenList& SpentTokenList::default_instance() {
  ::protobuf_SpentTokenList_2eproto::InitDefaultsSpentTokenList();
  return *internal_default_instance();
}

SpentTokenList* SpentTokenList::New(::google::protobuf::Arena* arena) const {
  SpentTokenList* n = new SpentTokenList;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SpentTokenList::Clear() {
// @@protoc_insertion_point(message_clear_start:opentxs.proto.SpentTokenList)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  spent_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(!notary_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*notary_.UnsafeRawStringPointer())->clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(!unit_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*unit_.UnsafeRawStringPointer())->clear();
    }
  }
  if (cached_has_bits & 12u) {
    ::memset(&series_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&version_) -
        reinterpret_cast<char*>(&series_)) + sizeof(version_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool SpentTokenList::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:opentxs.proto.SpentTokenList)
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

      // optional uint64 series = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          set_has_series();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &series_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated string spent = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_spent()));
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
  // @@protoc_insertion_point(parse_success:opentxs.proto.SpentTokenList)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:opentxs.proto.SpentTokenList)
  return false;
#undef DO_
}

void SpentTokenList::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:opentxs.proto.SpentTokenList)
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

  // optional uint64 series = 4;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(4, this->series(), output);
  }

  // repeated string spent = 5;
  for (int i = 0, n = this->spent_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      5, this->spent(i), output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:opentxs.proto.SpentTokenList)
}

size_t SpentTokenList::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:opentxs.proto.SpentTokenList)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  // repeated string spent = 5;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->spent_size());
  for (int i = 0, n = this->spent_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->spent(i));
  }

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

    // optional uint64 series = 4;
    if (has_series()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->series());
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

void SpentTokenList::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const SpentTokenList*>(&from));
}

void SpentTokenList::MergeFrom(const SpentTokenList& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:opentxs.proto.SpentTokenList)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  spent_.MergeFrom(from.spent_);
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
      series_ = from.series_;
    }
    if (cached_has_bits & 0x00000008u) {
      version_ = from.version_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void SpentTokenList::CopyFrom(const SpentTokenList& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:opentxs.proto.SpentTokenList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SpentTokenList::IsInitialized() const {
  return true;
}

void SpentTokenList::Swap(SpentTokenList* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SpentTokenList::InternalSwap(SpentTokenList* other) {
  using std::swap;
  spent_.InternalSwap(&other->spent_);
  notary_.Swap(&other->notary_);
  unit_.Swap(&other->unit_);
  swap(series_, other->series_);
  swap(version_, other->version_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string SpentTokenList::GetTypeName() const {
  return "opentxs.proto.SpentTokenList";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)
