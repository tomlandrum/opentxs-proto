// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AccountEvent.proto

#ifndef PROTOBUF_AccountEvent_2eproto__INCLUDED
#define PROTOBUF_AccountEvent_2eproto__INCLUDED

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
#include "RPCEnums.pb.h"  // IWYU pragma: export
// @@protoc_insertion_point(includes)

namespace protobuf_AccountEvent_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsAccountEventImpl();
void InitDefaultsAccountEvent();
inline void InitDefaults() {
  InitDefaultsAccountEvent();
}
}  // namespace protobuf_AccountEvent_2eproto
namespace opentxs {
namespace proto {
class AccountEvent;
class AccountEventDefaultTypeInternal;
extern AccountEventDefaultTypeInternal _AccountEvent_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace opentxs {
namespace proto {

// ===================================================================

class AccountEvent : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:opentxs.proto.AccountEvent) */ {
 public:
  AccountEvent();
  virtual ~AccountEvent();

  AccountEvent(const AccountEvent& from);

  inline AccountEvent& operator=(const AccountEvent& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  AccountEvent(AccountEvent&& from) noexcept
    : AccountEvent() {
    *this = ::std::move(from);
  }

  inline AccountEvent& operator=(AccountEvent&& from) noexcept {
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

  static const AccountEvent& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AccountEvent* internal_default_instance() {
    return reinterpret_cast<const AccountEvent*>(
               &_AccountEvent_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(AccountEvent* other);
  friend void swap(AccountEvent& a, AccountEvent& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline AccountEvent* New() const PROTOBUF_FINAL { return New(NULL); }

  AccountEvent* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const AccountEvent& from);
  void MergeFrom(const AccountEvent& from);
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
  void InternalSwap(AccountEvent* other);
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

  // optional string id = 2;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 2;
  const ::std::string& id() const;
  void set_id(const ::std::string& value);
  #if LANG_CXX11
  void set_id(::std::string&& value);
  #endif
  void set_id(const char* value);
  void set_id(const char* value, size_t size);
  ::std::string* mutable_id();
  ::std::string* release_id();
  void set_allocated_id(::std::string* id);

  // optional string contact = 4;
  bool has_contact() const;
  void clear_contact();
  static const int kContactFieldNumber = 4;
  const ::std::string& contact() const;
  void set_contact(const ::std::string& value);
  #if LANG_CXX11
  void set_contact(::std::string&& value);
  #endif
  void set_contact(const char* value);
  void set_contact(const char* value, size_t size);
  ::std::string* mutable_contact();
  ::std::string* release_contact();
  void set_allocated_contact(::std::string* contact);

  // optional string memo = 9;
  bool has_memo() const;
  void clear_memo();
  static const int kMemoFieldNumber = 9;
  const ::std::string& memo() const;
  void set_memo(const ::std::string& value);
  #if LANG_CXX11
  void set_memo(::std::string&& value);
  #endif
  void set_memo(const char* value);
  void set_memo(const char* value, size_t size);
  ::std::string* mutable_memo();
  ::std::string* release_memo();
  void set_allocated_memo(::std::string* memo);

  // optional uint32 version = 1;
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 1;
  ::google::protobuf::uint32 version() const;
  void set_version(::google::protobuf::uint32 value);

  // optional .opentxs.proto.AccountEventType type = 3;
  bool has_type() const;
  void clear_type();
  static const int kTypeFieldNumber = 3;
  ::opentxs::proto::AccountEventType type() const;
  void set_type(::opentxs::proto::AccountEventType value);

  // optional uint64 number = 5;
  bool has_number() const;
  void clear_number();
  static const int kNumberFieldNumber = 5;
  ::google::protobuf::uint64 number() const;
  void set_number(::google::protobuf::uint64 value);

  // optional uint64 amount = 6;
  bool has_amount() const;
  void clear_amount();
  static const int kAmountFieldNumber = 6;
  ::google::protobuf::uint64 amount() const;
  void set_amount(::google::protobuf::uint64 value);

  // optional uint64 pendingamount = 7;
  bool has_pendingamount() const;
  void clear_pendingamount();
  static const int kPendingamountFieldNumber = 7;
  ::google::protobuf::uint64 pendingamount() const;
  void set_pendingamount(::google::protobuf::uint64 value);

  // optional int64 timestamp = 8;
  bool has_timestamp() const;
  void clear_timestamp();
  static const int kTimestampFieldNumber = 8;
  ::google::protobuf::int64 timestamp() const;
  void set_timestamp(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:opentxs.proto.AccountEvent)
 private:
  void set_has_version();
  void clear_has_version();
  void set_has_id();
  void clear_has_id();
  void set_has_type();
  void clear_has_type();
  void set_has_contact();
  void clear_has_contact();
  void set_has_number();
  void clear_has_number();
  void set_has_amount();
  void clear_has_amount();
  void set_has_pendingamount();
  void clear_has_pendingamount();
  void set_has_timestamp();
  void clear_has_timestamp();
  void set_has_memo();
  void clear_has_memo();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr id_;
  ::google::protobuf::internal::ArenaStringPtr contact_;
  ::google::protobuf::internal::ArenaStringPtr memo_;
  ::google::protobuf::uint32 version_;
  int type_;
  ::google::protobuf::uint64 number_;
  ::google::protobuf::uint64 amount_;
  ::google::protobuf::uint64 pendingamount_;
  ::google::protobuf::int64 timestamp_;
  friend struct ::protobuf_AccountEvent_2eproto::TableStruct;
  friend void ::protobuf_AccountEvent_2eproto::InitDefaultsAccountEventImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AccountEvent

// optional uint32 version = 1;
inline bool AccountEvent::has_version() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void AccountEvent::set_has_version() {
  _has_bits_[0] |= 0x00000008u;
}
inline void AccountEvent::clear_has_version() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void AccountEvent::clear_version() {
  version_ = 0u;
  clear_has_version();
}
inline ::google::protobuf::uint32 AccountEvent::version() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.AccountEvent.version)
  return version_;
}
inline void AccountEvent::set_version(::google::protobuf::uint32 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.AccountEvent.version)
}

// optional string id = 2;
inline bool AccountEvent::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AccountEvent::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AccountEvent::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void AccountEvent::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_id();
}
inline const ::std::string& AccountEvent::id() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.AccountEvent.id)
  return id_.GetNoArena();
}
inline void AccountEvent::set_id(const ::std::string& value) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.AccountEvent.id)
}
#if LANG_CXX11
inline void AccountEvent::set_id(::std::string&& value) {
  set_has_id();
  id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.AccountEvent.id)
}
#endif
inline void AccountEvent::set_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.AccountEvent.id)
}
inline void AccountEvent::set_id(const char* value, size_t size) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.AccountEvent.id)
}
inline ::std::string* AccountEvent::mutable_id() {
  set_has_id();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.AccountEvent.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AccountEvent::release_id() {
  // @@protoc_insertion_point(field_release:opentxs.proto.AccountEvent.id)
  clear_has_id();
  return id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AccountEvent::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    set_has_id();
  } else {
    clear_has_id();
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.AccountEvent.id)
}

// optional .opentxs.proto.AccountEventType type = 3;
inline bool AccountEvent::has_type() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void AccountEvent::set_has_type() {
  _has_bits_[0] |= 0x00000010u;
}
inline void AccountEvent::clear_has_type() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void AccountEvent::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::opentxs::proto::AccountEventType AccountEvent::type() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.AccountEvent.type)
  return static_cast< ::opentxs::proto::AccountEventType >(type_);
}
inline void AccountEvent::set_type(::opentxs::proto::AccountEventType value) {
  assert(::opentxs::proto::AccountEventType_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.AccountEvent.type)
}

// optional string contact = 4;
inline bool AccountEvent::has_contact() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void AccountEvent::set_has_contact() {
  _has_bits_[0] |= 0x00000002u;
}
inline void AccountEvent::clear_has_contact() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void AccountEvent::clear_contact() {
  contact_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_contact();
}
inline const ::std::string& AccountEvent::contact() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.AccountEvent.contact)
  return contact_.GetNoArena();
}
inline void AccountEvent::set_contact(const ::std::string& value) {
  set_has_contact();
  contact_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.AccountEvent.contact)
}
#if LANG_CXX11
inline void AccountEvent::set_contact(::std::string&& value) {
  set_has_contact();
  contact_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.AccountEvent.contact)
}
#endif
inline void AccountEvent::set_contact(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_contact();
  contact_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.AccountEvent.contact)
}
inline void AccountEvent::set_contact(const char* value, size_t size) {
  set_has_contact();
  contact_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.AccountEvent.contact)
}
inline ::std::string* AccountEvent::mutable_contact() {
  set_has_contact();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.AccountEvent.contact)
  return contact_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AccountEvent::release_contact() {
  // @@protoc_insertion_point(field_release:opentxs.proto.AccountEvent.contact)
  clear_has_contact();
  return contact_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AccountEvent::set_allocated_contact(::std::string* contact) {
  if (contact != NULL) {
    set_has_contact();
  } else {
    clear_has_contact();
  }
  contact_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), contact);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.AccountEvent.contact)
}

// optional uint64 number = 5;
inline bool AccountEvent::has_number() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void AccountEvent::set_has_number() {
  _has_bits_[0] |= 0x00000020u;
}
inline void AccountEvent::clear_has_number() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void AccountEvent::clear_number() {
  number_ = GOOGLE_ULONGLONG(0);
  clear_has_number();
}
inline ::google::protobuf::uint64 AccountEvent::number() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.AccountEvent.number)
  return number_;
}
inline void AccountEvent::set_number(::google::protobuf::uint64 value) {
  set_has_number();
  number_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.AccountEvent.number)
}

// optional uint64 amount = 6;
inline bool AccountEvent::has_amount() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void AccountEvent::set_has_amount() {
  _has_bits_[0] |= 0x00000040u;
}
inline void AccountEvent::clear_has_amount() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void AccountEvent::clear_amount() {
  amount_ = GOOGLE_ULONGLONG(0);
  clear_has_amount();
}
inline ::google::protobuf::uint64 AccountEvent::amount() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.AccountEvent.amount)
  return amount_;
}
inline void AccountEvent::set_amount(::google::protobuf::uint64 value) {
  set_has_amount();
  amount_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.AccountEvent.amount)
}

// optional uint64 pendingamount = 7;
inline bool AccountEvent::has_pendingamount() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void AccountEvent::set_has_pendingamount() {
  _has_bits_[0] |= 0x00000080u;
}
inline void AccountEvent::clear_has_pendingamount() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void AccountEvent::clear_pendingamount() {
  pendingamount_ = GOOGLE_ULONGLONG(0);
  clear_has_pendingamount();
}
inline ::google::protobuf::uint64 AccountEvent::pendingamount() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.AccountEvent.pendingamount)
  return pendingamount_;
}
inline void AccountEvent::set_pendingamount(::google::protobuf::uint64 value) {
  set_has_pendingamount();
  pendingamount_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.AccountEvent.pendingamount)
}

// optional int64 timestamp = 8;
inline bool AccountEvent::has_timestamp() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void AccountEvent::set_has_timestamp() {
  _has_bits_[0] |= 0x00000100u;
}
inline void AccountEvent::clear_has_timestamp() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void AccountEvent::clear_timestamp() {
  timestamp_ = GOOGLE_LONGLONG(0);
  clear_has_timestamp();
}
inline ::google::protobuf::int64 AccountEvent::timestamp() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.AccountEvent.timestamp)
  return timestamp_;
}
inline void AccountEvent::set_timestamp(::google::protobuf::int64 value) {
  set_has_timestamp();
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.AccountEvent.timestamp)
}

// optional string memo = 9;
inline bool AccountEvent::has_memo() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void AccountEvent::set_has_memo() {
  _has_bits_[0] |= 0x00000004u;
}
inline void AccountEvent::clear_has_memo() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void AccountEvent::clear_memo() {
  memo_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_memo();
}
inline const ::std::string& AccountEvent::memo() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.AccountEvent.memo)
  return memo_.GetNoArena();
}
inline void AccountEvent::set_memo(const ::std::string& value) {
  set_has_memo();
  memo_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.AccountEvent.memo)
}
#if LANG_CXX11
inline void AccountEvent::set_memo(::std::string&& value) {
  set_has_memo();
  memo_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.AccountEvent.memo)
}
#endif
inline void AccountEvent::set_memo(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_memo();
  memo_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.AccountEvent.memo)
}
inline void AccountEvent::set_memo(const char* value, size_t size) {
  set_has_memo();
  memo_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.AccountEvent.memo)
}
inline ::std::string* AccountEvent::mutable_memo() {
  set_has_memo();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.AccountEvent.memo)
  return memo_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AccountEvent::release_memo() {
  // @@protoc_insertion_point(field_release:opentxs.proto.AccountEvent.memo)
  clear_has_memo();
  return memo_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AccountEvent::set_allocated_memo(::std::string* memo) {
  if (memo != NULL) {
    set_has_memo();
  } else {
    clear_has_memo();
  }
  memo_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), memo);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.AccountEvent.memo)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_AccountEvent_2eproto__INCLUDED
