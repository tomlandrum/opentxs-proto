// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CurrencyParams.proto

#ifndef PROTOBUF_CurrencyParams_2eproto__INCLUDED
#define PROTOBUF_CurrencyParams_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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

namespace protobuf_CurrencyParams_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsCurrencyParamsImpl();
void InitDefaultsCurrencyParams();
inline void InitDefaults() {
  InitDefaultsCurrencyParams();
}
}  // namespace protobuf_CurrencyParams_2eproto
namespace opentxs {
namespace proto {
class CurrencyParams;
class CurrencyParamsDefaultTypeInternal;
extern CurrencyParamsDefaultTypeInternal _CurrencyParams_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace opentxs {
namespace proto {

// ===================================================================

class CurrencyParams : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:opentxs.proto.CurrencyParams) */ {
 public:
  CurrencyParams();
  virtual ~CurrencyParams();

  CurrencyParams(const CurrencyParams& from);

  inline CurrencyParams& operator=(const CurrencyParams& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CurrencyParams(CurrencyParams&& from) noexcept
    : CurrencyParams() {
    *this = ::std::move(from);
  }

  inline CurrencyParams& operator=(CurrencyParams&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const CurrencyParams& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CurrencyParams* internal_default_instance() {
    return reinterpret_cast<const CurrencyParams*>(
               &_CurrencyParams_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(CurrencyParams* other);
  friend void swap(CurrencyParams& a, CurrencyParams& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CurrencyParams* New() const PROTOBUF_FINAL { return New(NULL); }

  CurrencyParams* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const CurrencyParams& from);
  void MergeFrom(const CurrencyParams& from);
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
  void InternalSwap(CurrencyParams* other);
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

  // optional string TLA = 2;
  bool has_tla() const;
  void clear_tla();
  static const int kTLAFieldNumber = 2;
  const ::std::string& tla() const;
  void set_tla(const ::std::string& value);
  #if LANG_CXX11
  void set_tla(::std::string&& value);
  #endif
  void set_tla(const char* value);
  void set_tla(const char* value, size_t size);
  ::std::string* mutable_tla();
  ::std::string* release_tla();
  void set_allocated_tla(::std::string* tla);

  // optional string fraction = 4;
  bool has_fraction() const;
  void clear_fraction();
  static const int kFractionFieldNumber = 4;
  const ::std::string& fraction() const;
  void set_fraction(const ::std::string& value);
  #if LANG_CXX11
  void set_fraction(::std::string&& value);
  #endif
  void set_fraction(const char* value);
  void set_fraction(const char* value, size_t size);
  ::std::string* mutable_fraction();
  ::std::string* release_fraction();
  void set_allocated_fraction(::std::string* fraction);

  // optional uint32 version = 1;
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 1;
  ::google::protobuf::uint32 version() const;
  void set_version(::google::protobuf::uint32 value);

  // optional uint32 power = 3;
  bool has_power() const;
  void clear_power();
  static const int kPowerFieldNumber = 3;
  ::google::protobuf::uint32 power() const;
  void set_power(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:opentxs.proto.CurrencyParams)
 private:
  void set_has_version();
  void clear_has_version();
  void set_has_tla();
  void clear_has_tla();
  void set_has_power();
  void clear_has_power();
  void set_has_fraction();
  void clear_has_fraction();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr tla_;
  ::google::protobuf::internal::ArenaStringPtr fraction_;
  ::google::protobuf::uint32 version_;
  ::google::protobuf::uint32 power_;
  friend struct ::protobuf_CurrencyParams_2eproto::TableStruct;
  friend void ::protobuf_CurrencyParams_2eproto::InitDefaultsCurrencyParamsImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CurrencyParams

// optional uint32 version = 1;
inline bool CurrencyParams::has_version() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CurrencyParams::set_has_version() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CurrencyParams::clear_has_version() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CurrencyParams::clear_version() {
  version_ = 0u;
  clear_has_version();
}
inline ::google::protobuf::uint32 CurrencyParams::version() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.CurrencyParams.version)
  return version_;
}
inline void CurrencyParams::set_version(::google::protobuf::uint32 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.CurrencyParams.version)
}

// optional string TLA = 2;
inline bool CurrencyParams::has_tla() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CurrencyParams::set_has_tla() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CurrencyParams::clear_has_tla() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CurrencyParams::clear_tla() {
  tla_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_tla();
}
inline const ::std::string& CurrencyParams::tla() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.CurrencyParams.TLA)
  return tla_.GetNoArena();
}
inline void CurrencyParams::set_tla(const ::std::string& value) {
  set_has_tla();
  tla_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.CurrencyParams.TLA)
}
#if LANG_CXX11
inline void CurrencyParams::set_tla(::std::string&& value) {
  set_has_tla();
  tla_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.CurrencyParams.TLA)
}
#endif
inline void CurrencyParams::set_tla(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_tla();
  tla_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.CurrencyParams.TLA)
}
inline void CurrencyParams::set_tla(const char* value, size_t size) {
  set_has_tla();
  tla_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.CurrencyParams.TLA)
}
inline ::std::string* CurrencyParams::mutable_tla() {
  set_has_tla();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.CurrencyParams.TLA)
  return tla_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CurrencyParams::release_tla() {
  // @@protoc_insertion_point(field_release:opentxs.proto.CurrencyParams.TLA)
  clear_has_tla();
  return tla_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CurrencyParams::set_allocated_tla(::std::string* tla) {
  if (tla != NULL) {
    set_has_tla();
  } else {
    clear_has_tla();
  }
  tla_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), tla);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.CurrencyParams.TLA)
}

// optional uint32 power = 3;
inline bool CurrencyParams::has_power() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void CurrencyParams::set_has_power() {
  _has_bits_[0] |= 0x00000008u;
}
inline void CurrencyParams::clear_has_power() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void CurrencyParams::clear_power() {
  power_ = 0u;
  clear_has_power();
}
inline ::google::protobuf::uint32 CurrencyParams::power() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.CurrencyParams.power)
  return power_;
}
inline void CurrencyParams::set_power(::google::protobuf::uint32 value) {
  set_has_power();
  power_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.CurrencyParams.power)
}

// optional string fraction = 4;
inline bool CurrencyParams::has_fraction() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CurrencyParams::set_has_fraction() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CurrencyParams::clear_has_fraction() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CurrencyParams::clear_fraction() {
  fraction_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_fraction();
}
inline const ::std::string& CurrencyParams::fraction() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.CurrencyParams.fraction)
  return fraction_.GetNoArena();
}
inline void CurrencyParams::set_fraction(const ::std::string& value) {
  set_has_fraction();
  fraction_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.CurrencyParams.fraction)
}
#if LANG_CXX11
inline void CurrencyParams::set_fraction(::std::string&& value) {
  set_has_fraction();
  fraction_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.CurrencyParams.fraction)
}
#endif
inline void CurrencyParams::set_fraction(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_fraction();
  fraction_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.CurrencyParams.fraction)
}
inline void CurrencyParams::set_fraction(const char* value, size_t size) {
  set_has_fraction();
  fraction_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.CurrencyParams.fraction)
}
inline ::std::string* CurrencyParams::mutable_fraction() {
  set_has_fraction();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.CurrencyParams.fraction)
  return fraction_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CurrencyParams::release_fraction() {
  // @@protoc_insertion_point(field_release:opentxs.proto.CurrencyParams.fraction)
  clear_has_fraction();
  return fraction_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CurrencyParams::set_allocated_fraction(::std::string* fraction) {
  if (fraction != NULL) {
    set_has_fraction();
  } else {
    clear_has_fraction();
  }
  fraction_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), fraction);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.CurrencyParams.fraction)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_CurrencyParams_2eproto__INCLUDED
