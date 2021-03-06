// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AddContact.proto

#ifndef PROTOBUF_AddContact_2eproto__INCLUDED
#define PROTOBUF_AddContact_2eproto__INCLUDED

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
#include "RPCEnums.pb.h"  // IWYU pragma: export
// @@protoc_insertion_point(includes)

namespace protobuf_AddContact_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsAddContactImpl();
void InitDefaultsAddContact();
inline void InitDefaults() {
  InitDefaultsAddContact();
}
}  // namespace protobuf_AddContact_2eproto
namespace opentxs {
namespace proto {
class AddContact;
class AddContactDefaultTypeInternal;
extern AddContactDefaultTypeInternal _AddContact_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace opentxs {
namespace proto {

// ===================================================================

class AddContact : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:opentxs.proto.AddContact) */ {
 public:
  AddContact();
  virtual ~AddContact();

  AddContact(const AddContact& from);

  inline AddContact& operator=(const AddContact& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  AddContact(AddContact&& from) noexcept
    : AddContact() {
    *this = ::std::move(from);
  }

  inline AddContact& operator=(AddContact&& from) noexcept {
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

  static const AddContact& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AddContact* internal_default_instance() {
    return reinterpret_cast<const AddContact*>(
               &_AddContact_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(AddContact* other);
  friend void swap(AddContact& a, AddContact& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline AddContact* New() const PROTOBUF_FINAL { return New(NULL); }

  AddContact* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const AddContact& from);
  void MergeFrom(const AddContact& from);
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
  void InternalSwap(AddContact* other);
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

  // optional string label = 2;
  bool has_label() const;
  void clear_label();
  static const int kLabelFieldNumber = 2;
  const ::std::string& label() const;
  void set_label(const ::std::string& value);
  #if LANG_CXX11
  void set_label(::std::string&& value);
  #endif
  void set_label(const char* value);
  void set_label(const char* value, size_t size);
  ::std::string* mutable_label();
  ::std::string* release_label();
  void set_allocated_label(::std::string* label);

  // optional string paymentcode = 3;
  bool has_paymentcode() const;
  void clear_paymentcode();
  static const int kPaymentcodeFieldNumber = 3;
  const ::std::string& paymentcode() const;
  void set_paymentcode(const ::std::string& value);
  #if LANG_CXX11
  void set_paymentcode(::std::string&& value);
  #endif
  void set_paymentcode(const char* value);
  void set_paymentcode(const char* value, size_t size);
  ::std::string* mutable_paymentcode();
  ::std::string* release_paymentcode();
  void set_allocated_paymentcode(::std::string* paymentcode);

  // optional string nymid = 4;
  bool has_nymid() const;
  void clear_nymid();
  static const int kNymidFieldNumber = 4;
  const ::std::string& nymid() const;
  void set_nymid(const ::std::string& value);
  #if LANG_CXX11
  void set_nymid(::std::string&& value);
  #endif
  void set_nymid(const char* value);
  void set_nymid(const char* value, size_t size);
  ::std::string* mutable_nymid();
  ::std::string* release_nymid();
  void set_allocated_nymid(::std::string* nymid);

  // optional uint32 version = 1;
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 1;
  ::google::protobuf::uint32 version() const;
  void set_version(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:opentxs.proto.AddContact)
 private:
  void set_has_version();
  void clear_has_version();
  void set_has_label();
  void clear_has_label();
  void set_has_paymentcode();
  void clear_has_paymentcode();
  void set_has_nymid();
  void clear_has_nymid();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr label_;
  ::google::protobuf::internal::ArenaStringPtr paymentcode_;
  ::google::protobuf::internal::ArenaStringPtr nymid_;
  ::google::protobuf::uint32 version_;
  friend struct ::protobuf_AddContact_2eproto::TableStruct;
  friend void ::protobuf_AddContact_2eproto::InitDefaultsAddContactImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AddContact

// optional uint32 version = 1;
inline bool AddContact::has_version() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void AddContact::set_has_version() {
  _has_bits_[0] |= 0x00000008u;
}
inline void AddContact::clear_has_version() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void AddContact::clear_version() {
  version_ = 0u;
  clear_has_version();
}
inline ::google::protobuf::uint32 AddContact::version() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.AddContact.version)
  return version_;
}
inline void AddContact::set_version(::google::protobuf::uint32 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.AddContact.version)
}

// optional string label = 2;
inline bool AddContact::has_label() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AddContact::set_has_label() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AddContact::clear_has_label() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void AddContact::clear_label() {
  label_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_label();
}
inline const ::std::string& AddContact::label() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.AddContact.label)
  return label_.GetNoArena();
}
inline void AddContact::set_label(const ::std::string& value) {
  set_has_label();
  label_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.AddContact.label)
}
#if LANG_CXX11
inline void AddContact::set_label(::std::string&& value) {
  set_has_label();
  label_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.AddContact.label)
}
#endif
inline void AddContact::set_label(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_label();
  label_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.AddContact.label)
}
inline void AddContact::set_label(const char* value, size_t size) {
  set_has_label();
  label_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.AddContact.label)
}
inline ::std::string* AddContact::mutable_label() {
  set_has_label();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.AddContact.label)
  return label_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AddContact::release_label() {
  // @@protoc_insertion_point(field_release:opentxs.proto.AddContact.label)
  clear_has_label();
  return label_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AddContact::set_allocated_label(::std::string* label) {
  if (label != NULL) {
    set_has_label();
  } else {
    clear_has_label();
  }
  label_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), label);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.AddContact.label)
}

// optional string paymentcode = 3;
inline bool AddContact::has_paymentcode() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void AddContact::set_has_paymentcode() {
  _has_bits_[0] |= 0x00000002u;
}
inline void AddContact::clear_has_paymentcode() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void AddContact::clear_paymentcode() {
  paymentcode_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_paymentcode();
}
inline const ::std::string& AddContact::paymentcode() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.AddContact.paymentcode)
  return paymentcode_.GetNoArena();
}
inline void AddContact::set_paymentcode(const ::std::string& value) {
  set_has_paymentcode();
  paymentcode_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.AddContact.paymentcode)
}
#if LANG_CXX11
inline void AddContact::set_paymentcode(::std::string&& value) {
  set_has_paymentcode();
  paymentcode_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.AddContact.paymentcode)
}
#endif
inline void AddContact::set_paymentcode(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_paymentcode();
  paymentcode_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.AddContact.paymentcode)
}
inline void AddContact::set_paymentcode(const char* value, size_t size) {
  set_has_paymentcode();
  paymentcode_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.AddContact.paymentcode)
}
inline ::std::string* AddContact::mutable_paymentcode() {
  set_has_paymentcode();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.AddContact.paymentcode)
  return paymentcode_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AddContact::release_paymentcode() {
  // @@protoc_insertion_point(field_release:opentxs.proto.AddContact.paymentcode)
  clear_has_paymentcode();
  return paymentcode_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AddContact::set_allocated_paymentcode(::std::string* paymentcode) {
  if (paymentcode != NULL) {
    set_has_paymentcode();
  } else {
    clear_has_paymentcode();
  }
  paymentcode_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), paymentcode);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.AddContact.paymentcode)
}

// optional string nymid = 4;
inline bool AddContact::has_nymid() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void AddContact::set_has_nymid() {
  _has_bits_[0] |= 0x00000004u;
}
inline void AddContact::clear_has_nymid() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void AddContact::clear_nymid() {
  nymid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_nymid();
}
inline const ::std::string& AddContact::nymid() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.AddContact.nymid)
  return nymid_.GetNoArena();
}
inline void AddContact::set_nymid(const ::std::string& value) {
  set_has_nymid();
  nymid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.AddContact.nymid)
}
#if LANG_CXX11
inline void AddContact::set_nymid(::std::string&& value) {
  set_has_nymid();
  nymid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.AddContact.nymid)
}
#endif
inline void AddContact::set_nymid(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_nymid();
  nymid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.AddContact.nymid)
}
inline void AddContact::set_nymid(const char* value, size_t size) {
  set_has_nymid();
  nymid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.AddContact.nymid)
}
inline ::std::string* AddContact::mutable_nymid() {
  set_has_nymid();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.AddContact.nymid)
  return nymid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AddContact::release_nymid() {
  // @@protoc_insertion_point(field_release:opentxs.proto.AddContact.nymid)
  clear_has_nymid();
  return nymid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AddContact::set_allocated_nymid(::std::string* nymid) {
  if (nymid != NULL) {
    set_has_nymid();
  } else {
    clear_has_nymid();
  }
  nymid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), nymid);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.AddContact.nymid)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_AddContact_2eproto__INCLUDED
