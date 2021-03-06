// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: RPCPush.proto

#ifndef PROTOBUF_RPCPush_2eproto__INCLUDED
#define PROTOBUF_RPCPush_2eproto__INCLUDED

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
#include "AccountEvent.pb.h"  // IWYU pragma: export
#include "ContactEvent.pb.h"  // IWYU pragma: export
#include "RPCEnums.pb.h"  // IWYU pragma: export
#include "TaskComplete.pb.h"  // IWYU pragma: export
// @@protoc_insertion_point(includes)

namespace protobuf_RPCPush_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsRPCPushImpl();
void InitDefaultsRPCPush();
inline void InitDefaults() {
  InitDefaultsRPCPush();
}
}  // namespace protobuf_RPCPush_2eproto
namespace opentxs {
namespace proto {
class RPCPush;
class RPCPushDefaultTypeInternal;
extern RPCPushDefaultTypeInternal _RPCPush_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace opentxs {
namespace proto {

// ===================================================================

class RPCPush : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:opentxs.proto.RPCPush) */ {
 public:
  RPCPush();
  virtual ~RPCPush();

  RPCPush(const RPCPush& from);

  inline RPCPush& operator=(const RPCPush& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  RPCPush(RPCPush&& from) noexcept
    : RPCPush() {
    *this = ::std::move(from);
  }

  inline RPCPush& operator=(RPCPush&& from) noexcept {
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

  static const RPCPush& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RPCPush* internal_default_instance() {
    return reinterpret_cast<const RPCPush*>(
               &_RPCPush_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(RPCPush* other);
  friend void swap(RPCPush& a, RPCPush& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline RPCPush* New() const PROTOBUF_FINAL { return New(NULL); }

  RPCPush* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const RPCPush& from);
  void MergeFrom(const RPCPush& from);
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
  void InternalSwap(RPCPush* other);
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

  // optional string id = 3;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 3;
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

  // optional .opentxs.proto.AccountEvent accountevent = 4;
  bool has_accountevent() const;
  void clear_accountevent();
  static const int kAccounteventFieldNumber = 4;
  const ::opentxs::proto::AccountEvent& accountevent() const;
  ::opentxs::proto::AccountEvent* release_accountevent();
  ::opentxs::proto::AccountEvent* mutable_accountevent();
  void set_allocated_accountevent(::opentxs::proto::AccountEvent* accountevent);

  // optional .opentxs.proto.ContactEvent contactevent = 5;
  bool has_contactevent() const;
  void clear_contactevent();
  static const int kContacteventFieldNumber = 5;
  const ::opentxs::proto::ContactEvent& contactevent() const;
  ::opentxs::proto::ContactEvent* release_contactevent();
  ::opentxs::proto::ContactEvent* mutable_contactevent();
  void set_allocated_contactevent(::opentxs::proto::ContactEvent* contactevent);

  // optional .opentxs.proto.TaskComplete taskcomplete = 6;
  bool has_taskcomplete() const;
  void clear_taskcomplete();
  static const int kTaskcompleteFieldNumber = 6;
  const ::opentxs::proto::TaskComplete& taskcomplete() const;
  ::opentxs::proto::TaskComplete* release_taskcomplete();
  ::opentxs::proto::TaskComplete* mutable_taskcomplete();
  void set_allocated_taskcomplete(::opentxs::proto::TaskComplete* taskcomplete);

  // optional uint32 version = 1;
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 1;
  ::google::protobuf::uint32 version() const;
  void set_version(::google::protobuf::uint32 value);

  // optional .opentxs.proto.RPCPushType type = 2;
  bool has_type() const;
  void clear_type();
  static const int kTypeFieldNumber = 2;
  ::opentxs::proto::RPCPushType type() const;
  void set_type(::opentxs::proto::RPCPushType value);

  // @@protoc_insertion_point(class_scope:opentxs.proto.RPCPush)
 private:
  void set_has_version();
  void clear_has_version();
  void set_has_type();
  void clear_has_type();
  void set_has_id();
  void clear_has_id();
  void set_has_accountevent();
  void clear_has_accountevent();
  void set_has_contactevent();
  void clear_has_contactevent();
  void set_has_taskcomplete();
  void clear_has_taskcomplete();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr id_;
  ::opentxs::proto::AccountEvent* accountevent_;
  ::opentxs::proto::ContactEvent* contactevent_;
  ::opentxs::proto::TaskComplete* taskcomplete_;
  ::google::protobuf::uint32 version_;
  int type_;
  friend struct ::protobuf_RPCPush_2eproto::TableStruct;
  friend void ::protobuf_RPCPush_2eproto::InitDefaultsRPCPushImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RPCPush

// optional uint32 version = 1;
inline bool RPCPush::has_version() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void RPCPush::set_has_version() {
  _has_bits_[0] |= 0x00000010u;
}
inline void RPCPush::clear_has_version() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void RPCPush::clear_version() {
  version_ = 0u;
  clear_has_version();
}
inline ::google::protobuf::uint32 RPCPush::version() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.RPCPush.version)
  return version_;
}
inline void RPCPush::set_version(::google::protobuf::uint32 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.RPCPush.version)
}

// optional .opentxs.proto.RPCPushType type = 2;
inline bool RPCPush::has_type() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void RPCPush::set_has_type() {
  _has_bits_[0] |= 0x00000020u;
}
inline void RPCPush::clear_has_type() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void RPCPush::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::opentxs::proto::RPCPushType RPCPush::type() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.RPCPush.type)
  return static_cast< ::opentxs::proto::RPCPushType >(type_);
}
inline void RPCPush::set_type(::opentxs::proto::RPCPushType value) {
  assert(::opentxs::proto::RPCPushType_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.RPCPush.type)
}

// optional string id = 3;
inline bool RPCPush::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RPCPush::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RPCPush::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RPCPush::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_id();
}
inline const ::std::string& RPCPush::id() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.RPCPush.id)
  return id_.GetNoArena();
}
inline void RPCPush::set_id(const ::std::string& value) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.RPCPush.id)
}
#if LANG_CXX11
inline void RPCPush::set_id(::std::string&& value) {
  set_has_id();
  id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.RPCPush.id)
}
#endif
inline void RPCPush::set_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.RPCPush.id)
}
inline void RPCPush::set_id(const char* value, size_t size) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.RPCPush.id)
}
inline ::std::string* RPCPush::mutable_id() {
  set_has_id();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.RPCPush.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* RPCPush::release_id() {
  // @@protoc_insertion_point(field_release:opentxs.proto.RPCPush.id)
  clear_has_id();
  return id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void RPCPush::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    set_has_id();
  } else {
    clear_has_id();
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.RPCPush.id)
}

// optional .opentxs.proto.AccountEvent accountevent = 4;
inline bool RPCPush::has_accountevent() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RPCPush::set_has_accountevent() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RPCPush::clear_has_accountevent() {
  _has_bits_[0] &= ~0x00000002u;
}
inline const ::opentxs::proto::AccountEvent& RPCPush::accountevent() const {
  const ::opentxs::proto::AccountEvent* p = accountevent_;
  // @@protoc_insertion_point(field_get:opentxs.proto.RPCPush.accountevent)
  return p != NULL ? *p : *reinterpret_cast<const ::opentxs::proto::AccountEvent*>(
      &::opentxs::proto::_AccountEvent_default_instance_);
}
inline ::opentxs::proto::AccountEvent* RPCPush::release_accountevent() {
  // @@protoc_insertion_point(field_release:opentxs.proto.RPCPush.accountevent)
  clear_has_accountevent();
  ::opentxs::proto::AccountEvent* temp = accountevent_;
  accountevent_ = NULL;
  return temp;
}
inline ::opentxs::proto::AccountEvent* RPCPush::mutable_accountevent() {
  set_has_accountevent();
  if (accountevent_ == NULL) {
    accountevent_ = new ::opentxs::proto::AccountEvent;
  }
  // @@protoc_insertion_point(field_mutable:opentxs.proto.RPCPush.accountevent)
  return accountevent_;
}
inline void RPCPush::set_allocated_accountevent(::opentxs::proto::AccountEvent* accountevent) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(accountevent_);
  }
  if (accountevent) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      accountevent = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, accountevent, submessage_arena);
    }
    set_has_accountevent();
  } else {
    clear_has_accountevent();
  }
  accountevent_ = accountevent;
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.RPCPush.accountevent)
}

// optional .opentxs.proto.ContactEvent contactevent = 5;
inline bool RPCPush::has_contactevent() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void RPCPush::set_has_contactevent() {
  _has_bits_[0] |= 0x00000004u;
}
inline void RPCPush::clear_has_contactevent() {
  _has_bits_[0] &= ~0x00000004u;
}
inline const ::opentxs::proto::ContactEvent& RPCPush::contactevent() const {
  const ::opentxs::proto::ContactEvent* p = contactevent_;
  // @@protoc_insertion_point(field_get:opentxs.proto.RPCPush.contactevent)
  return p != NULL ? *p : *reinterpret_cast<const ::opentxs::proto::ContactEvent*>(
      &::opentxs::proto::_ContactEvent_default_instance_);
}
inline ::opentxs::proto::ContactEvent* RPCPush::release_contactevent() {
  // @@protoc_insertion_point(field_release:opentxs.proto.RPCPush.contactevent)
  clear_has_contactevent();
  ::opentxs::proto::ContactEvent* temp = contactevent_;
  contactevent_ = NULL;
  return temp;
}
inline ::opentxs::proto::ContactEvent* RPCPush::mutable_contactevent() {
  set_has_contactevent();
  if (contactevent_ == NULL) {
    contactevent_ = new ::opentxs::proto::ContactEvent;
  }
  // @@protoc_insertion_point(field_mutable:opentxs.proto.RPCPush.contactevent)
  return contactevent_;
}
inline void RPCPush::set_allocated_contactevent(::opentxs::proto::ContactEvent* contactevent) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(contactevent_);
  }
  if (contactevent) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      contactevent = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, contactevent, submessage_arena);
    }
    set_has_contactevent();
  } else {
    clear_has_contactevent();
  }
  contactevent_ = contactevent;
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.RPCPush.contactevent)
}

// optional .opentxs.proto.TaskComplete taskcomplete = 6;
inline bool RPCPush::has_taskcomplete() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void RPCPush::set_has_taskcomplete() {
  _has_bits_[0] |= 0x00000008u;
}
inline void RPCPush::clear_has_taskcomplete() {
  _has_bits_[0] &= ~0x00000008u;
}
inline const ::opentxs::proto::TaskComplete& RPCPush::taskcomplete() const {
  const ::opentxs::proto::TaskComplete* p = taskcomplete_;
  // @@protoc_insertion_point(field_get:opentxs.proto.RPCPush.taskcomplete)
  return p != NULL ? *p : *reinterpret_cast<const ::opentxs::proto::TaskComplete*>(
      &::opentxs::proto::_TaskComplete_default_instance_);
}
inline ::opentxs::proto::TaskComplete* RPCPush::release_taskcomplete() {
  // @@protoc_insertion_point(field_release:opentxs.proto.RPCPush.taskcomplete)
  clear_has_taskcomplete();
  ::opentxs::proto::TaskComplete* temp = taskcomplete_;
  taskcomplete_ = NULL;
  return temp;
}
inline ::opentxs::proto::TaskComplete* RPCPush::mutable_taskcomplete() {
  set_has_taskcomplete();
  if (taskcomplete_ == NULL) {
    taskcomplete_ = new ::opentxs::proto::TaskComplete;
  }
  // @@protoc_insertion_point(field_mutable:opentxs.proto.RPCPush.taskcomplete)
  return taskcomplete_;
}
inline void RPCPush::set_allocated_taskcomplete(::opentxs::proto::TaskComplete* taskcomplete) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(taskcomplete_);
  }
  if (taskcomplete) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      taskcomplete = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, taskcomplete, submessage_arena);
    }
    set_has_taskcomplete();
  } else {
    clear_has_taskcomplete();
  }
  taskcomplete_ = taskcomplete;
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.RPCPush.taskcomplete)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_RPCPush_2eproto__INCLUDED
