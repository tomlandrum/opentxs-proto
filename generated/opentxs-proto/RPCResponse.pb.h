// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: RPCResponse.proto

#ifndef PROTOBUF_RPCResponse_2eproto__INCLUDED
#define PROTOBUF_RPCResponse_2eproto__INCLUDED

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
#include "AccountData.pb.h"  // IWYU pragma: export
#include "AccountEvent.pb.h"  // IWYU pragma: export
#include "AddClaim.pb.h"  // IWYU pragma: export
#include "Contact.pb.h"  // IWYU pragma: export
#include "ContactEvent.pb.h"  // IWYU pragma: export
#include "CreateNym.pb.h"  // IWYU pragma: export
#include "CredentialIndex.pb.h"  // IWYU pragma: export
#include "HDSeed.pb.h"  // IWYU pragma: export
#include "PaymentWorkflow.pb.h"  // IWYU pragma: export
#include "RPCEnums.pb.h"  // IWYU pragma: export
#include "RPCStatus.pb.h"  // IWYU pragma: export
#include "RPCTask.pb.h"  // IWYU pragma: export
#include "ServerContract.pb.h"  // IWYU pragma: export
#include "SessionData.pb.h"  // IWYU pragma: export
#include "TransactionData.pb.h"  // IWYU pragma: export
#include "UnitDefinition.pb.h"  // IWYU pragma: export
// @@protoc_insertion_point(includes)

namespace protobuf_RPCResponse_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsRPCResponseImpl();
void InitDefaultsRPCResponse();
inline void InitDefaults() {
  InitDefaultsRPCResponse();
}
}  // namespace protobuf_RPCResponse_2eproto
namespace opentxs {
namespace proto {
class RPCResponse;
class RPCResponseDefaultTypeInternal;
extern RPCResponseDefaultTypeInternal _RPCResponse_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace opentxs {
namespace proto {

// ===================================================================

class RPCResponse : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:opentxs.proto.RPCResponse) */ {
 public:
  RPCResponse();
  virtual ~RPCResponse();

  RPCResponse(const RPCResponse& from);

  inline RPCResponse& operator=(const RPCResponse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  RPCResponse(RPCResponse&& from) noexcept
    : RPCResponse() {
    *this = ::std::move(from);
  }

  inline RPCResponse& operator=(RPCResponse&& from) noexcept {
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

  static const RPCResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RPCResponse* internal_default_instance() {
    return reinterpret_cast<const RPCResponse*>(
               &_RPCResponse_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(RPCResponse* other);
  friend void swap(RPCResponse& a, RPCResponse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline RPCResponse* New() const PROTOBUF_FINAL { return New(NULL); }

  RPCResponse* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const RPCResponse& from);
  void MergeFrom(const RPCResponse& from);
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
  void InternalSwap(RPCResponse* other);
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

  // repeated .opentxs.proto.RPCStatus status = 4;
  int status_size() const;
  void clear_status();
  static const int kStatusFieldNumber = 4;
  const ::opentxs::proto::RPCStatus& status(int index) const;
  ::opentxs::proto::RPCStatus* mutable_status(int index);
  ::opentxs::proto::RPCStatus* add_status();
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::RPCStatus >*
      mutable_status();
  const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::RPCStatus >&
      status() const;

  // repeated .opentxs.proto.SessionData sessions = 6;
  int sessions_size() const;
  void clear_sessions();
  static const int kSessionsFieldNumber = 6;
  const ::opentxs::proto::SessionData& sessions(int index) const;
  ::opentxs::proto::SessionData* mutable_sessions(int index);
  ::opentxs::proto::SessionData* add_sessions();
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::SessionData >*
      mutable_sessions();
  const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::SessionData >&
      sessions() const;

  // repeated string identifier = 7;
  int identifier_size() const;
  void clear_identifier();
  static const int kIdentifierFieldNumber = 7;
  const ::std::string& identifier(int index) const;
  ::std::string* mutable_identifier(int index);
  void set_identifier(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_identifier(int index, ::std::string&& value);
  #endif
  void set_identifier(int index, const char* value);
  void set_identifier(int index, const char* value, size_t size);
  ::std::string* add_identifier();
  void add_identifier(const ::std::string& value);
  #if LANG_CXX11
  void add_identifier(::std::string&& value);
  #endif
  void add_identifier(const char* value);
  void add_identifier(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& identifier() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_identifier();

  // repeated .opentxs.proto.HDSeed seed = 8;
  int seed_size() const;
  void clear_seed();
  static const int kSeedFieldNumber = 8;
  const ::opentxs::proto::HDSeed& seed(int index) const;
  ::opentxs::proto::HDSeed* mutable_seed(int index);
  ::opentxs::proto::HDSeed* add_seed();
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::HDSeed >*
      mutable_seed();
  const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::HDSeed >&
      seed() const;

  // repeated .opentxs.proto.CredentialIndex nym = 9;
  int nym_size() const;
  void clear_nym();
  static const int kNymFieldNumber = 9;
  const ::opentxs::proto::CredentialIndex& nym(int index) const;
  ::opentxs::proto::CredentialIndex* mutable_nym(int index);
  ::opentxs::proto::CredentialIndex* add_nym();
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::CredentialIndex >*
      mutable_nym();
  const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::CredentialIndex >&
      nym() const;

  // repeated .opentxs.proto.AccountData balance = 10;
  int balance_size() const;
  void clear_balance();
  static const int kBalanceFieldNumber = 10;
  const ::opentxs::proto::AccountData& balance(int index) const;
  ::opentxs::proto::AccountData* mutable_balance(int index);
  ::opentxs::proto::AccountData* add_balance();
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::AccountData >*
      mutable_balance();
  const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::AccountData >&
      balance() const;

  // repeated .opentxs.proto.Contact contact = 11;
  int contact_size() const;
  void clear_contact();
  static const int kContactFieldNumber = 11;
  const ::opentxs::proto::Contact& contact(int index) const;
  ::opentxs::proto::Contact* mutable_contact(int index);
  ::opentxs::proto::Contact* add_contact();
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::Contact >*
      mutable_contact();
  const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::Contact >&
      contact() const;

  // repeated .opentxs.proto.AccountEvent accountevent = 12;
  int accountevent_size() const;
  void clear_accountevent();
  static const int kAccounteventFieldNumber = 12;
  const ::opentxs::proto::AccountEvent& accountevent(int index) const;
  ::opentxs::proto::AccountEvent* mutable_accountevent(int index);
  ::opentxs::proto::AccountEvent* add_accountevent();
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::AccountEvent >*
      mutable_accountevent();
  const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::AccountEvent >&
      accountevent() const;

  // repeated .opentxs.proto.ContactEvent contactevent = 13;
  int contactevent_size() const;
  void clear_contactevent();
  static const int kContacteventFieldNumber = 13;
  const ::opentxs::proto::ContactEvent& contactevent(int index) const;
  ::opentxs::proto::ContactEvent* mutable_contactevent(int index);
  ::opentxs::proto::ContactEvent* add_contactevent();
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::ContactEvent >*
      mutable_contactevent();
  const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::ContactEvent >&
      contactevent() const;

  // repeated .opentxs.proto.RPCTask task = 14;
  int task_size() const;
  void clear_task();
  static const int kTaskFieldNumber = 14;
  const ::opentxs::proto::RPCTask& task(int index) const;
  ::opentxs::proto::RPCTask* mutable_task(int index);
  ::opentxs::proto::RPCTask* add_task();
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::RPCTask >*
      mutable_task();
  const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::RPCTask >&
      task() const;

  // repeated .opentxs.proto.ServerContract notary = 15;
  int notary_size() const;
  void clear_notary();
  static const int kNotaryFieldNumber = 15;
  const ::opentxs::proto::ServerContract& notary(int index) const;
  ::opentxs::proto::ServerContract* mutable_notary(int index);
  ::opentxs::proto::ServerContract* add_notary();
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::ServerContract >*
      mutable_notary();
  const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::ServerContract >&
      notary() const;

  // repeated .opentxs.proto.PaymentWorkflow workflow = 16;
  int workflow_size() const;
  void clear_workflow();
  static const int kWorkflowFieldNumber = 16;
  const ::opentxs::proto::PaymentWorkflow& workflow(int index) const;
  ::opentxs::proto::PaymentWorkflow* mutable_workflow(int index);
  ::opentxs::proto::PaymentWorkflow* add_workflow();
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::PaymentWorkflow >*
      mutable_workflow();
  const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::PaymentWorkflow >&
      workflow() const;

  // repeated .opentxs.proto.UnitDefinition unit = 17;
  int unit_size() const;
  void clear_unit();
  static const int kUnitFieldNumber = 17;
  const ::opentxs::proto::UnitDefinition& unit(int index) const;
  ::opentxs::proto::UnitDefinition* mutable_unit(int index);
  ::opentxs::proto::UnitDefinition* add_unit();
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::UnitDefinition >*
      mutable_unit();
  const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::UnitDefinition >&
      unit() const;

  // repeated .opentxs.proto.TransactionData transactiondata = 18;
  int transactiondata_size() const;
  void clear_transactiondata();
  static const int kTransactiondataFieldNumber = 18;
  const ::opentxs::proto::TransactionData& transactiondata(int index) const;
  ::opentxs::proto::TransactionData* mutable_transactiondata(int index);
  ::opentxs::proto::TransactionData* add_transactiondata();
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::TransactionData >*
      mutable_transactiondata();
  const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::TransactionData >&
      transactiondata() const;

  // optional string cookie = 2;
  bool has_cookie() const;
  void clear_cookie();
  static const int kCookieFieldNumber = 2;
  const ::std::string& cookie() const;
  void set_cookie(const ::std::string& value);
  #if LANG_CXX11
  void set_cookie(::std::string&& value);
  #endif
  void set_cookie(const char* value);
  void set_cookie(const char* value, size_t size);
  ::std::string* mutable_cookie();
  ::std::string* release_cookie();
  void set_allocated_cookie(::std::string* cookie);

  // optional uint32 version = 1;
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 1;
  ::google::protobuf::uint32 version() const;
  void set_version(::google::protobuf::uint32 value);

  // optional .opentxs.proto.RPCCommandType type = 3;
  bool has_type() const;
  void clear_type();
  static const int kTypeFieldNumber = 3;
  ::opentxs::proto::RPCCommandType type() const;
  void set_type(::opentxs::proto::RPCCommandType value);

  // optional uint32 session = 5;
  bool has_session() const;
  void clear_session();
  static const int kSessionFieldNumber = 5;
  ::google::protobuf::uint32 session() const;
  void set_session(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:opentxs.proto.RPCResponse)
 private:
  void set_has_version();
  void clear_has_version();
  void set_has_cookie();
  void clear_has_cookie();
  void set_has_type();
  void clear_has_type();
  void set_has_session();
  void clear_has_session();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::RPCStatus > status_;
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::SessionData > sessions_;
  ::google::protobuf::RepeatedPtrField< ::std::string> identifier_;
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::HDSeed > seed_;
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::CredentialIndex > nym_;
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::AccountData > balance_;
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::Contact > contact_;
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::AccountEvent > accountevent_;
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::ContactEvent > contactevent_;
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::RPCTask > task_;
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::ServerContract > notary_;
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::PaymentWorkflow > workflow_;
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::UnitDefinition > unit_;
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::TransactionData > transactiondata_;
  ::google::protobuf::internal::ArenaStringPtr cookie_;
  ::google::protobuf::uint32 version_;
  int type_;
  ::google::protobuf::uint32 session_;
  friend struct ::protobuf_RPCResponse_2eproto::TableStruct;
  friend void ::protobuf_RPCResponse_2eproto::InitDefaultsRPCResponseImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RPCResponse

// optional uint32 version = 1;
inline bool RPCResponse::has_version() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RPCResponse::set_has_version() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RPCResponse::clear_has_version() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RPCResponse::clear_version() {
  version_ = 0u;
  clear_has_version();
}
inline ::google::protobuf::uint32 RPCResponse::version() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.RPCResponse.version)
  return version_;
}
inline void RPCResponse::set_version(::google::protobuf::uint32 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.RPCResponse.version)
}

// optional string cookie = 2;
inline bool RPCResponse::has_cookie() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RPCResponse::set_has_cookie() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RPCResponse::clear_has_cookie() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RPCResponse::clear_cookie() {
  cookie_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_cookie();
}
inline const ::std::string& RPCResponse::cookie() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.RPCResponse.cookie)
  return cookie_.GetNoArena();
}
inline void RPCResponse::set_cookie(const ::std::string& value) {
  set_has_cookie();
  cookie_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.RPCResponse.cookie)
}
#if LANG_CXX11
inline void RPCResponse::set_cookie(::std::string&& value) {
  set_has_cookie();
  cookie_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.RPCResponse.cookie)
}
#endif
inline void RPCResponse::set_cookie(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_cookie();
  cookie_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.RPCResponse.cookie)
}
inline void RPCResponse::set_cookie(const char* value, size_t size) {
  set_has_cookie();
  cookie_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.RPCResponse.cookie)
}
inline ::std::string* RPCResponse::mutable_cookie() {
  set_has_cookie();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.RPCResponse.cookie)
  return cookie_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* RPCResponse::release_cookie() {
  // @@protoc_insertion_point(field_release:opentxs.proto.RPCResponse.cookie)
  clear_has_cookie();
  return cookie_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void RPCResponse::set_allocated_cookie(::std::string* cookie) {
  if (cookie != NULL) {
    set_has_cookie();
  } else {
    clear_has_cookie();
  }
  cookie_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), cookie);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.RPCResponse.cookie)
}

// optional .opentxs.proto.RPCCommandType type = 3;
inline bool RPCResponse::has_type() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void RPCResponse::set_has_type() {
  _has_bits_[0] |= 0x00000004u;
}
inline void RPCResponse::clear_has_type() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void RPCResponse::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::opentxs::proto::RPCCommandType RPCResponse::type() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.RPCResponse.type)
  return static_cast< ::opentxs::proto::RPCCommandType >(type_);
}
inline void RPCResponse::set_type(::opentxs::proto::RPCCommandType value) {
  assert(::opentxs::proto::RPCCommandType_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.RPCResponse.type)
}

// repeated .opentxs.proto.RPCStatus status = 4;
inline int RPCResponse::status_size() const {
  return status_.size();
}
inline const ::opentxs::proto::RPCStatus& RPCResponse::status(int index) const {
  // @@protoc_insertion_point(field_get:opentxs.proto.RPCResponse.status)
  return status_.Get(index);
}
inline ::opentxs::proto::RPCStatus* RPCResponse::mutable_status(int index) {
  // @@protoc_insertion_point(field_mutable:opentxs.proto.RPCResponse.status)
  return status_.Mutable(index);
}
inline ::opentxs::proto::RPCStatus* RPCResponse::add_status() {
  // @@protoc_insertion_point(field_add:opentxs.proto.RPCResponse.status)
  return status_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::opentxs::proto::RPCStatus >*
RPCResponse::mutable_status() {
  // @@protoc_insertion_point(field_mutable_list:opentxs.proto.RPCResponse.status)
  return &status_;
}
inline const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::RPCStatus >&
RPCResponse::status() const {
  // @@protoc_insertion_point(field_list:opentxs.proto.RPCResponse.status)
  return status_;
}

// optional uint32 session = 5;
inline bool RPCResponse::has_session() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void RPCResponse::set_has_session() {
  _has_bits_[0] |= 0x00000008u;
}
inline void RPCResponse::clear_has_session() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void RPCResponse::clear_session() {
  session_ = 0u;
  clear_has_session();
}
inline ::google::protobuf::uint32 RPCResponse::session() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.RPCResponse.session)
  return session_;
}
inline void RPCResponse::set_session(::google::protobuf::uint32 value) {
  set_has_session();
  session_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.RPCResponse.session)
}

// repeated .opentxs.proto.SessionData sessions = 6;
inline int RPCResponse::sessions_size() const {
  return sessions_.size();
}
inline const ::opentxs::proto::SessionData& RPCResponse::sessions(int index) const {
  // @@protoc_insertion_point(field_get:opentxs.proto.RPCResponse.sessions)
  return sessions_.Get(index);
}
inline ::opentxs::proto::SessionData* RPCResponse::mutable_sessions(int index) {
  // @@protoc_insertion_point(field_mutable:opentxs.proto.RPCResponse.sessions)
  return sessions_.Mutable(index);
}
inline ::opentxs::proto::SessionData* RPCResponse::add_sessions() {
  // @@protoc_insertion_point(field_add:opentxs.proto.RPCResponse.sessions)
  return sessions_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::opentxs::proto::SessionData >*
RPCResponse::mutable_sessions() {
  // @@protoc_insertion_point(field_mutable_list:opentxs.proto.RPCResponse.sessions)
  return &sessions_;
}
inline const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::SessionData >&
RPCResponse::sessions() const {
  // @@protoc_insertion_point(field_list:opentxs.proto.RPCResponse.sessions)
  return sessions_;
}

// repeated string identifier = 7;
inline int RPCResponse::identifier_size() const {
  return identifier_.size();
}
inline void RPCResponse::clear_identifier() {
  identifier_.Clear();
}
inline const ::std::string& RPCResponse::identifier(int index) const {
  // @@protoc_insertion_point(field_get:opentxs.proto.RPCResponse.identifier)
  return identifier_.Get(index);
}
inline ::std::string* RPCResponse::mutable_identifier(int index) {
  // @@protoc_insertion_point(field_mutable:opentxs.proto.RPCResponse.identifier)
  return identifier_.Mutable(index);
}
inline void RPCResponse::set_identifier(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:opentxs.proto.RPCResponse.identifier)
  identifier_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void RPCResponse::set_identifier(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:opentxs.proto.RPCResponse.identifier)
  identifier_.Mutable(index)->assign(std::move(value));
}
#endif
inline void RPCResponse::set_identifier(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  identifier_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:opentxs.proto.RPCResponse.identifier)
}
inline void RPCResponse::set_identifier(int index, const char* value, size_t size) {
  identifier_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.RPCResponse.identifier)
}
inline ::std::string* RPCResponse::add_identifier() {
  // @@protoc_insertion_point(field_add_mutable:opentxs.proto.RPCResponse.identifier)
  return identifier_.Add();
}
inline void RPCResponse::add_identifier(const ::std::string& value) {
  identifier_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:opentxs.proto.RPCResponse.identifier)
}
#if LANG_CXX11
inline void RPCResponse::add_identifier(::std::string&& value) {
  identifier_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:opentxs.proto.RPCResponse.identifier)
}
#endif
inline void RPCResponse::add_identifier(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  identifier_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:opentxs.proto.RPCResponse.identifier)
}
inline void RPCResponse::add_identifier(const char* value, size_t size) {
  identifier_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:opentxs.proto.RPCResponse.identifier)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
RPCResponse::identifier() const {
  // @@protoc_insertion_point(field_list:opentxs.proto.RPCResponse.identifier)
  return identifier_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
RPCResponse::mutable_identifier() {
  // @@protoc_insertion_point(field_mutable_list:opentxs.proto.RPCResponse.identifier)
  return &identifier_;
}

// repeated .opentxs.proto.HDSeed seed = 8;
inline int RPCResponse::seed_size() const {
  return seed_.size();
}
inline const ::opentxs::proto::HDSeed& RPCResponse::seed(int index) const {
  // @@protoc_insertion_point(field_get:opentxs.proto.RPCResponse.seed)
  return seed_.Get(index);
}
inline ::opentxs::proto::HDSeed* RPCResponse::mutable_seed(int index) {
  // @@protoc_insertion_point(field_mutable:opentxs.proto.RPCResponse.seed)
  return seed_.Mutable(index);
}
inline ::opentxs::proto::HDSeed* RPCResponse::add_seed() {
  // @@protoc_insertion_point(field_add:opentxs.proto.RPCResponse.seed)
  return seed_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::opentxs::proto::HDSeed >*
RPCResponse::mutable_seed() {
  // @@protoc_insertion_point(field_mutable_list:opentxs.proto.RPCResponse.seed)
  return &seed_;
}
inline const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::HDSeed >&
RPCResponse::seed() const {
  // @@protoc_insertion_point(field_list:opentxs.proto.RPCResponse.seed)
  return seed_;
}

// repeated .opentxs.proto.CredentialIndex nym = 9;
inline int RPCResponse::nym_size() const {
  return nym_.size();
}
inline const ::opentxs::proto::CredentialIndex& RPCResponse::nym(int index) const {
  // @@protoc_insertion_point(field_get:opentxs.proto.RPCResponse.nym)
  return nym_.Get(index);
}
inline ::opentxs::proto::CredentialIndex* RPCResponse::mutable_nym(int index) {
  // @@protoc_insertion_point(field_mutable:opentxs.proto.RPCResponse.nym)
  return nym_.Mutable(index);
}
inline ::opentxs::proto::CredentialIndex* RPCResponse::add_nym() {
  // @@protoc_insertion_point(field_add:opentxs.proto.RPCResponse.nym)
  return nym_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::opentxs::proto::CredentialIndex >*
RPCResponse::mutable_nym() {
  // @@protoc_insertion_point(field_mutable_list:opentxs.proto.RPCResponse.nym)
  return &nym_;
}
inline const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::CredentialIndex >&
RPCResponse::nym() const {
  // @@protoc_insertion_point(field_list:opentxs.proto.RPCResponse.nym)
  return nym_;
}

// repeated .opentxs.proto.AccountData balance = 10;
inline int RPCResponse::balance_size() const {
  return balance_.size();
}
inline const ::opentxs::proto::AccountData& RPCResponse::balance(int index) const {
  // @@protoc_insertion_point(field_get:opentxs.proto.RPCResponse.balance)
  return balance_.Get(index);
}
inline ::opentxs::proto::AccountData* RPCResponse::mutable_balance(int index) {
  // @@protoc_insertion_point(field_mutable:opentxs.proto.RPCResponse.balance)
  return balance_.Mutable(index);
}
inline ::opentxs::proto::AccountData* RPCResponse::add_balance() {
  // @@protoc_insertion_point(field_add:opentxs.proto.RPCResponse.balance)
  return balance_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::opentxs::proto::AccountData >*
RPCResponse::mutable_balance() {
  // @@protoc_insertion_point(field_mutable_list:opentxs.proto.RPCResponse.balance)
  return &balance_;
}
inline const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::AccountData >&
RPCResponse::balance() const {
  // @@protoc_insertion_point(field_list:opentxs.proto.RPCResponse.balance)
  return balance_;
}

// repeated .opentxs.proto.Contact contact = 11;
inline int RPCResponse::contact_size() const {
  return contact_.size();
}
inline const ::opentxs::proto::Contact& RPCResponse::contact(int index) const {
  // @@protoc_insertion_point(field_get:opentxs.proto.RPCResponse.contact)
  return contact_.Get(index);
}
inline ::opentxs::proto::Contact* RPCResponse::mutable_contact(int index) {
  // @@protoc_insertion_point(field_mutable:opentxs.proto.RPCResponse.contact)
  return contact_.Mutable(index);
}
inline ::opentxs::proto::Contact* RPCResponse::add_contact() {
  // @@protoc_insertion_point(field_add:opentxs.proto.RPCResponse.contact)
  return contact_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::opentxs::proto::Contact >*
RPCResponse::mutable_contact() {
  // @@protoc_insertion_point(field_mutable_list:opentxs.proto.RPCResponse.contact)
  return &contact_;
}
inline const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::Contact >&
RPCResponse::contact() const {
  // @@protoc_insertion_point(field_list:opentxs.proto.RPCResponse.contact)
  return contact_;
}

// repeated .opentxs.proto.AccountEvent accountevent = 12;
inline int RPCResponse::accountevent_size() const {
  return accountevent_.size();
}
inline const ::opentxs::proto::AccountEvent& RPCResponse::accountevent(int index) const {
  // @@protoc_insertion_point(field_get:opentxs.proto.RPCResponse.accountevent)
  return accountevent_.Get(index);
}
inline ::opentxs::proto::AccountEvent* RPCResponse::mutable_accountevent(int index) {
  // @@protoc_insertion_point(field_mutable:opentxs.proto.RPCResponse.accountevent)
  return accountevent_.Mutable(index);
}
inline ::opentxs::proto::AccountEvent* RPCResponse::add_accountevent() {
  // @@protoc_insertion_point(field_add:opentxs.proto.RPCResponse.accountevent)
  return accountevent_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::opentxs::proto::AccountEvent >*
RPCResponse::mutable_accountevent() {
  // @@protoc_insertion_point(field_mutable_list:opentxs.proto.RPCResponse.accountevent)
  return &accountevent_;
}
inline const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::AccountEvent >&
RPCResponse::accountevent() const {
  // @@protoc_insertion_point(field_list:opentxs.proto.RPCResponse.accountevent)
  return accountevent_;
}

// repeated .opentxs.proto.ContactEvent contactevent = 13;
inline int RPCResponse::contactevent_size() const {
  return contactevent_.size();
}
inline const ::opentxs::proto::ContactEvent& RPCResponse::contactevent(int index) const {
  // @@protoc_insertion_point(field_get:opentxs.proto.RPCResponse.contactevent)
  return contactevent_.Get(index);
}
inline ::opentxs::proto::ContactEvent* RPCResponse::mutable_contactevent(int index) {
  // @@protoc_insertion_point(field_mutable:opentxs.proto.RPCResponse.contactevent)
  return contactevent_.Mutable(index);
}
inline ::opentxs::proto::ContactEvent* RPCResponse::add_contactevent() {
  // @@protoc_insertion_point(field_add:opentxs.proto.RPCResponse.contactevent)
  return contactevent_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::opentxs::proto::ContactEvent >*
RPCResponse::mutable_contactevent() {
  // @@protoc_insertion_point(field_mutable_list:opentxs.proto.RPCResponse.contactevent)
  return &contactevent_;
}
inline const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::ContactEvent >&
RPCResponse::contactevent() const {
  // @@protoc_insertion_point(field_list:opentxs.proto.RPCResponse.contactevent)
  return contactevent_;
}

// repeated .opentxs.proto.RPCTask task = 14;
inline int RPCResponse::task_size() const {
  return task_.size();
}
inline const ::opentxs::proto::RPCTask& RPCResponse::task(int index) const {
  // @@protoc_insertion_point(field_get:opentxs.proto.RPCResponse.task)
  return task_.Get(index);
}
inline ::opentxs::proto::RPCTask* RPCResponse::mutable_task(int index) {
  // @@protoc_insertion_point(field_mutable:opentxs.proto.RPCResponse.task)
  return task_.Mutable(index);
}
inline ::opentxs::proto::RPCTask* RPCResponse::add_task() {
  // @@protoc_insertion_point(field_add:opentxs.proto.RPCResponse.task)
  return task_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::opentxs::proto::RPCTask >*
RPCResponse::mutable_task() {
  // @@protoc_insertion_point(field_mutable_list:opentxs.proto.RPCResponse.task)
  return &task_;
}
inline const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::RPCTask >&
RPCResponse::task() const {
  // @@protoc_insertion_point(field_list:opentxs.proto.RPCResponse.task)
  return task_;
}

// repeated .opentxs.proto.ServerContract notary = 15;
inline int RPCResponse::notary_size() const {
  return notary_.size();
}
inline const ::opentxs::proto::ServerContract& RPCResponse::notary(int index) const {
  // @@protoc_insertion_point(field_get:opentxs.proto.RPCResponse.notary)
  return notary_.Get(index);
}
inline ::opentxs::proto::ServerContract* RPCResponse::mutable_notary(int index) {
  // @@protoc_insertion_point(field_mutable:opentxs.proto.RPCResponse.notary)
  return notary_.Mutable(index);
}
inline ::opentxs::proto::ServerContract* RPCResponse::add_notary() {
  // @@protoc_insertion_point(field_add:opentxs.proto.RPCResponse.notary)
  return notary_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::opentxs::proto::ServerContract >*
RPCResponse::mutable_notary() {
  // @@protoc_insertion_point(field_mutable_list:opentxs.proto.RPCResponse.notary)
  return &notary_;
}
inline const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::ServerContract >&
RPCResponse::notary() const {
  // @@protoc_insertion_point(field_list:opentxs.proto.RPCResponse.notary)
  return notary_;
}

// repeated .opentxs.proto.PaymentWorkflow workflow = 16;
inline int RPCResponse::workflow_size() const {
  return workflow_.size();
}
inline const ::opentxs::proto::PaymentWorkflow& RPCResponse::workflow(int index) const {
  // @@protoc_insertion_point(field_get:opentxs.proto.RPCResponse.workflow)
  return workflow_.Get(index);
}
inline ::opentxs::proto::PaymentWorkflow* RPCResponse::mutable_workflow(int index) {
  // @@protoc_insertion_point(field_mutable:opentxs.proto.RPCResponse.workflow)
  return workflow_.Mutable(index);
}
inline ::opentxs::proto::PaymentWorkflow* RPCResponse::add_workflow() {
  // @@protoc_insertion_point(field_add:opentxs.proto.RPCResponse.workflow)
  return workflow_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::opentxs::proto::PaymentWorkflow >*
RPCResponse::mutable_workflow() {
  // @@protoc_insertion_point(field_mutable_list:opentxs.proto.RPCResponse.workflow)
  return &workflow_;
}
inline const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::PaymentWorkflow >&
RPCResponse::workflow() const {
  // @@protoc_insertion_point(field_list:opentxs.proto.RPCResponse.workflow)
  return workflow_;
}

// repeated .opentxs.proto.UnitDefinition unit = 17;
inline int RPCResponse::unit_size() const {
  return unit_.size();
}
inline const ::opentxs::proto::UnitDefinition& RPCResponse::unit(int index) const {
  // @@protoc_insertion_point(field_get:opentxs.proto.RPCResponse.unit)
  return unit_.Get(index);
}
inline ::opentxs::proto::UnitDefinition* RPCResponse::mutable_unit(int index) {
  // @@protoc_insertion_point(field_mutable:opentxs.proto.RPCResponse.unit)
  return unit_.Mutable(index);
}
inline ::opentxs::proto::UnitDefinition* RPCResponse::add_unit() {
  // @@protoc_insertion_point(field_add:opentxs.proto.RPCResponse.unit)
  return unit_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::opentxs::proto::UnitDefinition >*
RPCResponse::mutable_unit() {
  // @@protoc_insertion_point(field_mutable_list:opentxs.proto.RPCResponse.unit)
  return &unit_;
}
inline const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::UnitDefinition >&
RPCResponse::unit() const {
  // @@protoc_insertion_point(field_list:opentxs.proto.RPCResponse.unit)
  return unit_;
}

// repeated .opentxs.proto.TransactionData transactiondata = 18;
inline int RPCResponse::transactiondata_size() const {
  return transactiondata_.size();
}
inline const ::opentxs::proto::TransactionData& RPCResponse::transactiondata(int index) const {
  // @@protoc_insertion_point(field_get:opentxs.proto.RPCResponse.transactiondata)
  return transactiondata_.Get(index);
}
inline ::opentxs::proto::TransactionData* RPCResponse::mutable_transactiondata(int index) {
  // @@protoc_insertion_point(field_mutable:opentxs.proto.RPCResponse.transactiondata)
  return transactiondata_.Mutable(index);
}
inline ::opentxs::proto::TransactionData* RPCResponse::add_transactiondata() {
  // @@protoc_insertion_point(field_add:opentxs.proto.RPCResponse.transactiondata)
  return transactiondata_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::opentxs::proto::TransactionData >*
RPCResponse::mutable_transactiondata() {
  // @@protoc_insertion_point(field_mutable_list:opentxs.proto.RPCResponse.transactiondata)
  return &transactiondata_;
}
inline const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::TransactionData >&
RPCResponse::transactiondata() const {
  // @@protoc_insertion_point(field_list:opentxs.proto.RPCResponse.transactiondata)
  return transactiondata_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_RPCResponse_2eproto__INCLUDED
