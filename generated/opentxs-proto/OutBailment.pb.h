// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: OutBailment.proto

#ifndef PROTOBUF_OutBailment_2eproto__INCLUDED
#define PROTOBUF_OutBailment_2eproto__INCLUDED

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

namespace protobuf_OutBailment_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsOutBailmentImpl();
void InitDefaultsOutBailment();
inline void InitDefaults() {
  InitDefaultsOutBailment();
}
}  // namespace protobuf_OutBailment_2eproto
namespace opentxs {
namespace proto {
class OutBailment;
class OutBailmentDefaultTypeInternal;
extern OutBailmentDefaultTypeInternal _OutBailment_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace opentxs {
namespace proto {

// ===================================================================

class OutBailment : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:opentxs.proto.OutBailment) */ {
 public:
  OutBailment();
  virtual ~OutBailment();

  OutBailment(const OutBailment& from);

  inline OutBailment& operator=(const OutBailment& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  OutBailment(OutBailment&& from) noexcept
    : OutBailment() {
    *this = ::std::move(from);
  }

  inline OutBailment& operator=(OutBailment&& from) noexcept {
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

  static const OutBailment& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const OutBailment* internal_default_instance() {
    return reinterpret_cast<const OutBailment*>(
               &_OutBailment_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(OutBailment* other);
  friend void swap(OutBailment& a, OutBailment& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline OutBailment* New() const PROTOBUF_FINAL { return New(NULL); }

  OutBailment* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const OutBailment& from);
  void MergeFrom(const OutBailment& from);
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
  void InternalSwap(OutBailment* other);
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

  // repeated string payment = 6;
  int payment_size() const;
  void clear_payment();
  static const int kPaymentFieldNumber = 6;
  const ::std::string& payment(int index) const;
  ::std::string* mutable_payment(int index);
  void set_payment(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_payment(int index, ::std::string&& value);
  #endif
  void set_payment(int index, const char* value);
  void set_payment(int index, const char* value, size_t size);
  ::std::string* add_payment();
  void add_payment(const ::std::string& value);
  #if LANG_CXX11
  void add_payment(::std::string&& value);
  #endif
  void add_payment(const char* value);
  void add_payment(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& payment() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_payment();

  // optional string unitID = 2;
  bool has_unitid() const;
  void clear_unitid();
  static const int kUnitIDFieldNumber = 2;
  const ::std::string& unitid() const;
  void set_unitid(const ::std::string& value);
  #if LANG_CXX11
  void set_unitid(::std::string&& value);
  #endif
  void set_unitid(const char* value);
  void set_unitid(const char* value, size_t size);
  ::std::string* mutable_unitid();
  ::std::string* release_unitid();
  void set_allocated_unitid(::std::string* unitid);

  // optional string serverID = 3;
  bool has_serverid() const;
  void clear_serverid();
  static const int kServerIDFieldNumber = 3;
  const ::std::string& serverid() const;
  void set_serverid(const ::std::string& value);
  #if LANG_CXX11
  void set_serverid(::std::string&& value);
  #endif
  void set_serverid(const char* value);
  void set_serverid(const char* value, size_t size);
  ::std::string* mutable_serverid();
  ::std::string* release_serverid();
  void set_allocated_serverid(::std::string* serverid);

  // optional string instructions = 5;
  bool has_instructions() const;
  void clear_instructions();
  static const int kInstructionsFieldNumber = 5;
  const ::std::string& instructions() const;
  void set_instructions(const ::std::string& value);
  #if LANG_CXX11
  void set_instructions(::std::string&& value);
  #endif
  void set_instructions(const char* value);
  void set_instructions(const char* value, size_t size);
  ::std::string* mutable_instructions();
  ::std::string* release_instructions();
  void set_allocated_instructions(::std::string* instructions);

  // optional uint64 amount = 4;
  bool has_amount() const;
  void clear_amount();
  static const int kAmountFieldNumber = 4;
  ::google::protobuf::uint64 amount() const;
  void set_amount(::google::protobuf::uint64 value);

  // optional uint32 version = 1;
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 1;
  ::google::protobuf::uint32 version() const;
  void set_version(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:opentxs.proto.OutBailment)
 private:
  void set_has_version();
  void clear_has_version();
  void set_has_unitid();
  void clear_has_unitid();
  void set_has_serverid();
  void clear_has_serverid();
  void set_has_amount();
  void clear_has_amount();
  void set_has_instructions();
  void clear_has_instructions();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::std::string> payment_;
  ::google::protobuf::internal::ArenaStringPtr unitid_;
  ::google::protobuf::internal::ArenaStringPtr serverid_;
  ::google::protobuf::internal::ArenaStringPtr instructions_;
  ::google::protobuf::uint64 amount_;
  ::google::protobuf::uint32 version_;
  friend struct ::protobuf_OutBailment_2eproto::TableStruct;
  friend void ::protobuf_OutBailment_2eproto::InitDefaultsOutBailmentImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// OutBailment

// optional uint32 version = 1;
inline bool OutBailment::has_version() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void OutBailment::set_has_version() {
  _has_bits_[0] |= 0x00000010u;
}
inline void OutBailment::clear_has_version() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void OutBailment::clear_version() {
  version_ = 0u;
  clear_has_version();
}
inline ::google::protobuf::uint32 OutBailment::version() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.OutBailment.version)
  return version_;
}
inline void OutBailment::set_version(::google::protobuf::uint32 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.OutBailment.version)
}

// optional string unitID = 2;
inline bool OutBailment::has_unitid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void OutBailment::set_has_unitid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void OutBailment::clear_has_unitid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void OutBailment::clear_unitid() {
  unitid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_unitid();
}
inline const ::std::string& OutBailment::unitid() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.OutBailment.unitID)
  return unitid_.GetNoArena();
}
inline void OutBailment::set_unitid(const ::std::string& value) {
  set_has_unitid();
  unitid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.OutBailment.unitID)
}
#if LANG_CXX11
inline void OutBailment::set_unitid(::std::string&& value) {
  set_has_unitid();
  unitid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.OutBailment.unitID)
}
#endif
inline void OutBailment::set_unitid(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_unitid();
  unitid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.OutBailment.unitID)
}
inline void OutBailment::set_unitid(const char* value, size_t size) {
  set_has_unitid();
  unitid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.OutBailment.unitID)
}
inline ::std::string* OutBailment::mutable_unitid() {
  set_has_unitid();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.OutBailment.unitID)
  return unitid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* OutBailment::release_unitid() {
  // @@protoc_insertion_point(field_release:opentxs.proto.OutBailment.unitID)
  clear_has_unitid();
  return unitid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void OutBailment::set_allocated_unitid(::std::string* unitid) {
  if (unitid != NULL) {
    set_has_unitid();
  } else {
    clear_has_unitid();
  }
  unitid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), unitid);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.OutBailment.unitID)
}

// optional string serverID = 3;
inline bool OutBailment::has_serverid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void OutBailment::set_has_serverid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void OutBailment::clear_has_serverid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void OutBailment::clear_serverid() {
  serverid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_serverid();
}
inline const ::std::string& OutBailment::serverid() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.OutBailment.serverID)
  return serverid_.GetNoArena();
}
inline void OutBailment::set_serverid(const ::std::string& value) {
  set_has_serverid();
  serverid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.OutBailment.serverID)
}
#if LANG_CXX11
inline void OutBailment::set_serverid(::std::string&& value) {
  set_has_serverid();
  serverid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.OutBailment.serverID)
}
#endif
inline void OutBailment::set_serverid(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_serverid();
  serverid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.OutBailment.serverID)
}
inline void OutBailment::set_serverid(const char* value, size_t size) {
  set_has_serverid();
  serverid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.OutBailment.serverID)
}
inline ::std::string* OutBailment::mutable_serverid() {
  set_has_serverid();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.OutBailment.serverID)
  return serverid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* OutBailment::release_serverid() {
  // @@protoc_insertion_point(field_release:opentxs.proto.OutBailment.serverID)
  clear_has_serverid();
  return serverid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void OutBailment::set_allocated_serverid(::std::string* serverid) {
  if (serverid != NULL) {
    set_has_serverid();
  } else {
    clear_has_serverid();
  }
  serverid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), serverid);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.OutBailment.serverID)
}

// optional uint64 amount = 4;
inline bool OutBailment::has_amount() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void OutBailment::set_has_amount() {
  _has_bits_[0] |= 0x00000008u;
}
inline void OutBailment::clear_has_amount() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void OutBailment::clear_amount() {
  amount_ = GOOGLE_ULONGLONG(0);
  clear_has_amount();
}
inline ::google::protobuf::uint64 OutBailment::amount() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.OutBailment.amount)
  return amount_;
}
inline void OutBailment::set_amount(::google::protobuf::uint64 value) {
  set_has_amount();
  amount_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.OutBailment.amount)
}

// optional string instructions = 5;
inline bool OutBailment::has_instructions() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void OutBailment::set_has_instructions() {
  _has_bits_[0] |= 0x00000004u;
}
inline void OutBailment::clear_has_instructions() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void OutBailment::clear_instructions() {
  instructions_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_instructions();
}
inline const ::std::string& OutBailment::instructions() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.OutBailment.instructions)
  return instructions_.GetNoArena();
}
inline void OutBailment::set_instructions(const ::std::string& value) {
  set_has_instructions();
  instructions_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.OutBailment.instructions)
}
#if LANG_CXX11
inline void OutBailment::set_instructions(::std::string&& value) {
  set_has_instructions();
  instructions_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.OutBailment.instructions)
}
#endif
inline void OutBailment::set_instructions(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_instructions();
  instructions_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.OutBailment.instructions)
}
inline void OutBailment::set_instructions(const char* value, size_t size) {
  set_has_instructions();
  instructions_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.OutBailment.instructions)
}
inline ::std::string* OutBailment::mutable_instructions() {
  set_has_instructions();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.OutBailment.instructions)
  return instructions_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* OutBailment::release_instructions() {
  // @@protoc_insertion_point(field_release:opentxs.proto.OutBailment.instructions)
  clear_has_instructions();
  return instructions_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void OutBailment::set_allocated_instructions(::std::string* instructions) {
  if (instructions != NULL) {
    set_has_instructions();
  } else {
    clear_has_instructions();
  }
  instructions_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), instructions);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.OutBailment.instructions)
}

// repeated string payment = 6;
inline int OutBailment::payment_size() const {
  return payment_.size();
}
inline void OutBailment::clear_payment() {
  payment_.Clear();
}
inline const ::std::string& OutBailment::payment(int index) const {
  // @@protoc_insertion_point(field_get:opentxs.proto.OutBailment.payment)
  return payment_.Get(index);
}
inline ::std::string* OutBailment::mutable_payment(int index) {
  // @@protoc_insertion_point(field_mutable:opentxs.proto.OutBailment.payment)
  return payment_.Mutable(index);
}
inline void OutBailment::set_payment(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:opentxs.proto.OutBailment.payment)
  payment_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void OutBailment::set_payment(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:opentxs.proto.OutBailment.payment)
  payment_.Mutable(index)->assign(std::move(value));
}
#endif
inline void OutBailment::set_payment(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  payment_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:opentxs.proto.OutBailment.payment)
}
inline void OutBailment::set_payment(int index, const char* value, size_t size) {
  payment_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.OutBailment.payment)
}
inline ::std::string* OutBailment::add_payment() {
  // @@protoc_insertion_point(field_add_mutable:opentxs.proto.OutBailment.payment)
  return payment_.Add();
}
inline void OutBailment::add_payment(const ::std::string& value) {
  payment_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:opentxs.proto.OutBailment.payment)
}
#if LANG_CXX11
inline void OutBailment::add_payment(::std::string&& value) {
  payment_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:opentxs.proto.OutBailment.payment)
}
#endif
inline void OutBailment::add_payment(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  payment_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:opentxs.proto.OutBailment.payment)
}
inline void OutBailment::add_payment(const char* value, size_t size) {
  payment_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:opentxs.proto.OutBailment.payment)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
OutBailment::payment() const {
  // @@protoc_insertion_point(field_list:opentxs.proto.OutBailment.payment)
  return payment_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
OutBailment::mutable_payment() {
  // @@protoc_insertion_point(field_mutable_list:opentxs.proto.OutBailment.payment)
  return &payment_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_OutBailment_2eproto__INCLUDED
