// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PaymentWorkflow.proto

#ifndef PROTOBUF_PaymentWorkflow_2eproto__INCLUDED
#define PROTOBUF_PaymentWorkflow_2eproto__INCLUDED

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
#include "InstrumentRevision.pb.h"  // IWYU pragma: export
#include "PaymentEvent.pb.h"  // IWYU pragma: export
#include "PaymentWorkflowEnums.pb.h"  // IWYU pragma: export
// @@protoc_insertion_point(includes)

namespace protobuf_PaymentWorkflow_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsPaymentWorkflowImpl();
void InitDefaultsPaymentWorkflow();
inline void InitDefaults() {
  InitDefaultsPaymentWorkflow();
}
}  // namespace protobuf_PaymentWorkflow_2eproto
namespace opentxs {
namespace proto {
class PaymentWorkflow;
class PaymentWorkflowDefaultTypeInternal;
extern PaymentWorkflowDefaultTypeInternal _PaymentWorkflow_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace opentxs {
namespace proto {

// ===================================================================

class PaymentWorkflow : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:opentxs.proto.PaymentWorkflow) */ {
 public:
  PaymentWorkflow();
  virtual ~PaymentWorkflow();

  PaymentWorkflow(const PaymentWorkflow& from);

  inline PaymentWorkflow& operator=(const PaymentWorkflow& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  PaymentWorkflow(PaymentWorkflow&& from) noexcept
    : PaymentWorkflow() {
    *this = ::std::move(from);
  }

  inline PaymentWorkflow& operator=(PaymentWorkflow&& from) noexcept {
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

  static const PaymentWorkflow& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PaymentWorkflow* internal_default_instance() {
    return reinterpret_cast<const PaymentWorkflow*>(
               &_PaymentWorkflow_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(PaymentWorkflow* other);
  friend void swap(PaymentWorkflow& a, PaymentWorkflow& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline PaymentWorkflow* New() const PROTOBUF_FINAL { return New(NULL); }

  PaymentWorkflow* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const PaymentWorkflow& from);
  void MergeFrom(const PaymentWorkflow& from);
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
  void InternalSwap(PaymentWorkflow* other);
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

  // repeated .opentxs.proto.InstrumentRevision source = 5;
  int source_size() const;
  void clear_source();
  static const int kSourceFieldNumber = 5;
  const ::opentxs::proto::InstrumentRevision& source(int index) const;
  ::opentxs::proto::InstrumentRevision* mutable_source(int index);
  ::opentxs::proto::InstrumentRevision* add_source();
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::InstrumentRevision >*
      mutable_source();
  const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::InstrumentRevision >&
      source() const;

  // repeated string party = 7;
  int party_size() const;
  void clear_party();
  static const int kPartyFieldNumber = 7;
  const ::std::string& party(int index) const;
  ::std::string* mutable_party(int index);
  void set_party(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_party(int index, ::std::string&& value);
  #endif
  void set_party(int index, const char* value);
  void set_party(int index, const char* value, size_t size);
  ::std::string* add_party();
  void add_party(const ::std::string& value);
  #if LANG_CXX11
  void add_party(::std::string&& value);
  #endif
  void add_party(const char* value);
  void add_party(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& party() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_party();

  // repeated .opentxs.proto.PaymentEvent event = 8;
  int event_size() const;
  void clear_event();
  static const int kEventFieldNumber = 8;
  const ::opentxs::proto::PaymentEvent& event(int index) const;
  ::opentxs::proto::PaymentEvent* mutable_event(int index);
  ::opentxs::proto::PaymentEvent* add_event();
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::PaymentEvent >*
      mutable_event();
  const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::PaymentEvent >&
      event() const;

  // repeated string unit = 9;
  int unit_size() const;
  void clear_unit();
  static const int kUnitFieldNumber = 9;
  const ::std::string& unit(int index) const;
  ::std::string* mutable_unit(int index);
  void set_unit(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_unit(int index, ::std::string&& value);
  #endif
  void set_unit(int index, const char* value);
  void set_unit(int index, const char* value, size_t size);
  ::std::string* add_unit();
  void add_unit(const ::std::string& value);
  #if LANG_CXX11
  void add_unit(::std::string&& value);
  #endif
  void add_unit(const char* value);
  void add_unit(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& unit() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_unit();

  // repeated string account = 10;
  int account_size() const;
  void clear_account();
  static const int kAccountFieldNumber = 10;
  const ::std::string& account(int index) const;
  ::std::string* mutable_account(int index);
  void set_account(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_account(int index, ::std::string&& value);
  #endif
  void set_account(int index, const char* value);
  void set_account(int index, const char* value, size_t size);
  ::std::string* add_account();
  void add_account(const ::std::string& value);
  #if LANG_CXX11
  void add_account(::std::string&& value);
  #endif
  void add_account(const char* value);
  void add_account(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& account() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_account();

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

  // optional string notary = 6;
  bool has_notary() const;
  void clear_notary();
  static const int kNotaryFieldNumber = 6;
  const ::std::string& notary() const;
  void set_notary(const ::std::string& value);
  #if LANG_CXX11
  void set_notary(::std::string&& value);
  #endif
  void set_notary(const char* value);
  void set_notary(const char* value, size_t size);
  ::std::string* mutable_notary();
  ::std::string* release_notary();
  void set_allocated_notary(::std::string* notary);

  // optional uint32 version = 1;
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 1;
  ::google::protobuf::uint32 version() const;
  void set_version(::google::protobuf::uint32 value);

  // optional .opentxs.proto.PaymentWorkflowType type = 3;
  bool has_type() const;
  void clear_type();
  static const int kTypeFieldNumber = 3;
  ::opentxs::proto::PaymentWorkflowType type() const;
  void set_type(::opentxs::proto::PaymentWorkflowType value);

  // optional .opentxs.proto.PaymentWorkflowState state = 4;
  bool has_state() const;
  void clear_state();
  static const int kStateFieldNumber = 4;
  ::opentxs::proto::PaymentWorkflowState state() const;
  void set_state(::opentxs::proto::PaymentWorkflowState value);

  // optional bool archived = 11;
  bool has_archived() const;
  void clear_archived();
  static const int kArchivedFieldNumber = 11;
  bool archived() const;
  void set_archived(bool value);

  // @@protoc_insertion_point(class_scope:opentxs.proto.PaymentWorkflow)
 private:
  void set_has_version();
  void clear_has_version();
  void set_has_id();
  void clear_has_id();
  void set_has_type();
  void clear_has_type();
  void set_has_state();
  void clear_has_state();
  void set_has_notary();
  void clear_has_notary();
  void set_has_archived();
  void clear_has_archived();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::InstrumentRevision > source_;
  ::google::protobuf::RepeatedPtrField< ::std::string> party_;
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::PaymentEvent > event_;
  ::google::protobuf::RepeatedPtrField< ::std::string> unit_;
  ::google::protobuf::RepeatedPtrField< ::std::string> account_;
  ::google::protobuf::internal::ArenaStringPtr id_;
  ::google::protobuf::internal::ArenaStringPtr notary_;
  ::google::protobuf::uint32 version_;
  int type_;
  int state_;
  bool archived_;
  friend struct ::protobuf_PaymentWorkflow_2eproto::TableStruct;
  friend void ::protobuf_PaymentWorkflow_2eproto::InitDefaultsPaymentWorkflowImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PaymentWorkflow

// optional uint32 version = 1;
inline bool PaymentWorkflow::has_version() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PaymentWorkflow::set_has_version() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PaymentWorkflow::clear_has_version() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PaymentWorkflow::clear_version() {
  version_ = 0u;
  clear_has_version();
}
inline ::google::protobuf::uint32 PaymentWorkflow::version() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.PaymentWorkflow.version)
  return version_;
}
inline void PaymentWorkflow::set_version(::google::protobuf::uint32 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.PaymentWorkflow.version)
}

// optional string id = 2;
inline bool PaymentWorkflow::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PaymentWorkflow::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PaymentWorkflow::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PaymentWorkflow::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_id();
}
inline const ::std::string& PaymentWorkflow::id() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.PaymentWorkflow.id)
  return id_.GetNoArena();
}
inline void PaymentWorkflow::set_id(const ::std::string& value) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.PaymentWorkflow.id)
}
#if LANG_CXX11
inline void PaymentWorkflow::set_id(::std::string&& value) {
  set_has_id();
  id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.PaymentWorkflow.id)
}
#endif
inline void PaymentWorkflow::set_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.PaymentWorkflow.id)
}
inline void PaymentWorkflow::set_id(const char* value, size_t size) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.PaymentWorkflow.id)
}
inline ::std::string* PaymentWorkflow::mutable_id() {
  set_has_id();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.PaymentWorkflow.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PaymentWorkflow::release_id() {
  // @@protoc_insertion_point(field_release:opentxs.proto.PaymentWorkflow.id)
  clear_has_id();
  return id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PaymentWorkflow::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    set_has_id();
  } else {
    clear_has_id();
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.PaymentWorkflow.id)
}

// optional .opentxs.proto.PaymentWorkflowType type = 3;
inline bool PaymentWorkflow::has_type() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void PaymentWorkflow::set_has_type() {
  _has_bits_[0] |= 0x00000008u;
}
inline void PaymentWorkflow::clear_has_type() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void PaymentWorkflow::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::opentxs::proto::PaymentWorkflowType PaymentWorkflow::type() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.PaymentWorkflow.type)
  return static_cast< ::opentxs::proto::PaymentWorkflowType >(type_);
}
inline void PaymentWorkflow::set_type(::opentxs::proto::PaymentWorkflowType value) {
  assert(::opentxs::proto::PaymentWorkflowType_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.PaymentWorkflow.type)
}

// optional .opentxs.proto.PaymentWorkflowState state = 4;
inline bool PaymentWorkflow::has_state() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void PaymentWorkflow::set_has_state() {
  _has_bits_[0] |= 0x00000010u;
}
inline void PaymentWorkflow::clear_has_state() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void PaymentWorkflow::clear_state() {
  state_ = 0;
  clear_has_state();
}
inline ::opentxs::proto::PaymentWorkflowState PaymentWorkflow::state() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.PaymentWorkflow.state)
  return static_cast< ::opentxs::proto::PaymentWorkflowState >(state_);
}
inline void PaymentWorkflow::set_state(::opentxs::proto::PaymentWorkflowState value) {
  assert(::opentxs::proto::PaymentWorkflowState_IsValid(value));
  set_has_state();
  state_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.PaymentWorkflow.state)
}

// repeated .opentxs.proto.InstrumentRevision source = 5;
inline int PaymentWorkflow::source_size() const {
  return source_.size();
}
inline const ::opentxs::proto::InstrumentRevision& PaymentWorkflow::source(int index) const {
  // @@protoc_insertion_point(field_get:opentxs.proto.PaymentWorkflow.source)
  return source_.Get(index);
}
inline ::opentxs::proto::InstrumentRevision* PaymentWorkflow::mutable_source(int index) {
  // @@protoc_insertion_point(field_mutable:opentxs.proto.PaymentWorkflow.source)
  return source_.Mutable(index);
}
inline ::opentxs::proto::InstrumentRevision* PaymentWorkflow::add_source() {
  // @@protoc_insertion_point(field_add:opentxs.proto.PaymentWorkflow.source)
  return source_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::opentxs::proto::InstrumentRevision >*
PaymentWorkflow::mutable_source() {
  // @@protoc_insertion_point(field_mutable_list:opentxs.proto.PaymentWorkflow.source)
  return &source_;
}
inline const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::InstrumentRevision >&
PaymentWorkflow::source() const {
  // @@protoc_insertion_point(field_list:opentxs.proto.PaymentWorkflow.source)
  return source_;
}

// optional string notary = 6;
inline bool PaymentWorkflow::has_notary() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PaymentWorkflow::set_has_notary() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PaymentWorkflow::clear_has_notary() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PaymentWorkflow::clear_notary() {
  notary_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_notary();
}
inline const ::std::string& PaymentWorkflow::notary() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.PaymentWorkflow.notary)
  return notary_.GetNoArena();
}
inline void PaymentWorkflow::set_notary(const ::std::string& value) {
  set_has_notary();
  notary_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.PaymentWorkflow.notary)
}
#if LANG_CXX11
inline void PaymentWorkflow::set_notary(::std::string&& value) {
  set_has_notary();
  notary_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.PaymentWorkflow.notary)
}
#endif
inline void PaymentWorkflow::set_notary(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_notary();
  notary_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.PaymentWorkflow.notary)
}
inline void PaymentWorkflow::set_notary(const char* value, size_t size) {
  set_has_notary();
  notary_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.PaymentWorkflow.notary)
}
inline ::std::string* PaymentWorkflow::mutable_notary() {
  set_has_notary();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.PaymentWorkflow.notary)
  return notary_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PaymentWorkflow::release_notary() {
  // @@protoc_insertion_point(field_release:opentxs.proto.PaymentWorkflow.notary)
  clear_has_notary();
  return notary_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PaymentWorkflow::set_allocated_notary(::std::string* notary) {
  if (notary != NULL) {
    set_has_notary();
  } else {
    clear_has_notary();
  }
  notary_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), notary);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.PaymentWorkflow.notary)
}

// repeated string party = 7;
inline int PaymentWorkflow::party_size() const {
  return party_.size();
}
inline void PaymentWorkflow::clear_party() {
  party_.Clear();
}
inline const ::std::string& PaymentWorkflow::party(int index) const {
  // @@protoc_insertion_point(field_get:opentxs.proto.PaymentWorkflow.party)
  return party_.Get(index);
}
inline ::std::string* PaymentWorkflow::mutable_party(int index) {
  // @@protoc_insertion_point(field_mutable:opentxs.proto.PaymentWorkflow.party)
  return party_.Mutable(index);
}
inline void PaymentWorkflow::set_party(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:opentxs.proto.PaymentWorkflow.party)
  party_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void PaymentWorkflow::set_party(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:opentxs.proto.PaymentWorkflow.party)
  party_.Mutable(index)->assign(std::move(value));
}
#endif
inline void PaymentWorkflow::set_party(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  party_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:opentxs.proto.PaymentWorkflow.party)
}
inline void PaymentWorkflow::set_party(int index, const char* value, size_t size) {
  party_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.PaymentWorkflow.party)
}
inline ::std::string* PaymentWorkflow::add_party() {
  // @@protoc_insertion_point(field_add_mutable:opentxs.proto.PaymentWorkflow.party)
  return party_.Add();
}
inline void PaymentWorkflow::add_party(const ::std::string& value) {
  party_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:opentxs.proto.PaymentWorkflow.party)
}
#if LANG_CXX11
inline void PaymentWorkflow::add_party(::std::string&& value) {
  party_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:opentxs.proto.PaymentWorkflow.party)
}
#endif
inline void PaymentWorkflow::add_party(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  party_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:opentxs.proto.PaymentWorkflow.party)
}
inline void PaymentWorkflow::add_party(const char* value, size_t size) {
  party_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:opentxs.proto.PaymentWorkflow.party)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
PaymentWorkflow::party() const {
  // @@protoc_insertion_point(field_list:opentxs.proto.PaymentWorkflow.party)
  return party_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
PaymentWorkflow::mutable_party() {
  // @@protoc_insertion_point(field_mutable_list:opentxs.proto.PaymentWorkflow.party)
  return &party_;
}

// repeated .opentxs.proto.PaymentEvent event = 8;
inline int PaymentWorkflow::event_size() const {
  return event_.size();
}
inline const ::opentxs::proto::PaymentEvent& PaymentWorkflow::event(int index) const {
  // @@protoc_insertion_point(field_get:opentxs.proto.PaymentWorkflow.event)
  return event_.Get(index);
}
inline ::opentxs::proto::PaymentEvent* PaymentWorkflow::mutable_event(int index) {
  // @@protoc_insertion_point(field_mutable:opentxs.proto.PaymentWorkflow.event)
  return event_.Mutable(index);
}
inline ::opentxs::proto::PaymentEvent* PaymentWorkflow::add_event() {
  // @@protoc_insertion_point(field_add:opentxs.proto.PaymentWorkflow.event)
  return event_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::opentxs::proto::PaymentEvent >*
PaymentWorkflow::mutable_event() {
  // @@protoc_insertion_point(field_mutable_list:opentxs.proto.PaymentWorkflow.event)
  return &event_;
}
inline const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::PaymentEvent >&
PaymentWorkflow::event() const {
  // @@protoc_insertion_point(field_list:opentxs.proto.PaymentWorkflow.event)
  return event_;
}

// repeated string unit = 9;
inline int PaymentWorkflow::unit_size() const {
  return unit_.size();
}
inline void PaymentWorkflow::clear_unit() {
  unit_.Clear();
}
inline const ::std::string& PaymentWorkflow::unit(int index) const {
  // @@protoc_insertion_point(field_get:opentxs.proto.PaymentWorkflow.unit)
  return unit_.Get(index);
}
inline ::std::string* PaymentWorkflow::mutable_unit(int index) {
  // @@protoc_insertion_point(field_mutable:opentxs.proto.PaymentWorkflow.unit)
  return unit_.Mutable(index);
}
inline void PaymentWorkflow::set_unit(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:opentxs.proto.PaymentWorkflow.unit)
  unit_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void PaymentWorkflow::set_unit(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:opentxs.proto.PaymentWorkflow.unit)
  unit_.Mutable(index)->assign(std::move(value));
}
#endif
inline void PaymentWorkflow::set_unit(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  unit_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:opentxs.proto.PaymentWorkflow.unit)
}
inline void PaymentWorkflow::set_unit(int index, const char* value, size_t size) {
  unit_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.PaymentWorkflow.unit)
}
inline ::std::string* PaymentWorkflow::add_unit() {
  // @@protoc_insertion_point(field_add_mutable:opentxs.proto.PaymentWorkflow.unit)
  return unit_.Add();
}
inline void PaymentWorkflow::add_unit(const ::std::string& value) {
  unit_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:opentxs.proto.PaymentWorkflow.unit)
}
#if LANG_CXX11
inline void PaymentWorkflow::add_unit(::std::string&& value) {
  unit_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:opentxs.proto.PaymentWorkflow.unit)
}
#endif
inline void PaymentWorkflow::add_unit(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  unit_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:opentxs.proto.PaymentWorkflow.unit)
}
inline void PaymentWorkflow::add_unit(const char* value, size_t size) {
  unit_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:opentxs.proto.PaymentWorkflow.unit)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
PaymentWorkflow::unit() const {
  // @@protoc_insertion_point(field_list:opentxs.proto.PaymentWorkflow.unit)
  return unit_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
PaymentWorkflow::mutable_unit() {
  // @@protoc_insertion_point(field_mutable_list:opentxs.proto.PaymentWorkflow.unit)
  return &unit_;
}

// repeated string account = 10;
inline int PaymentWorkflow::account_size() const {
  return account_.size();
}
inline void PaymentWorkflow::clear_account() {
  account_.Clear();
}
inline const ::std::string& PaymentWorkflow::account(int index) const {
  // @@protoc_insertion_point(field_get:opentxs.proto.PaymentWorkflow.account)
  return account_.Get(index);
}
inline ::std::string* PaymentWorkflow::mutable_account(int index) {
  // @@protoc_insertion_point(field_mutable:opentxs.proto.PaymentWorkflow.account)
  return account_.Mutable(index);
}
inline void PaymentWorkflow::set_account(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:opentxs.proto.PaymentWorkflow.account)
  account_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void PaymentWorkflow::set_account(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:opentxs.proto.PaymentWorkflow.account)
  account_.Mutable(index)->assign(std::move(value));
}
#endif
inline void PaymentWorkflow::set_account(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  account_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:opentxs.proto.PaymentWorkflow.account)
}
inline void PaymentWorkflow::set_account(int index, const char* value, size_t size) {
  account_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.PaymentWorkflow.account)
}
inline ::std::string* PaymentWorkflow::add_account() {
  // @@protoc_insertion_point(field_add_mutable:opentxs.proto.PaymentWorkflow.account)
  return account_.Add();
}
inline void PaymentWorkflow::add_account(const ::std::string& value) {
  account_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:opentxs.proto.PaymentWorkflow.account)
}
#if LANG_CXX11
inline void PaymentWorkflow::add_account(::std::string&& value) {
  account_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:opentxs.proto.PaymentWorkflow.account)
}
#endif
inline void PaymentWorkflow::add_account(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  account_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:opentxs.proto.PaymentWorkflow.account)
}
inline void PaymentWorkflow::add_account(const char* value, size_t size) {
  account_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:opentxs.proto.PaymentWorkflow.account)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
PaymentWorkflow::account() const {
  // @@protoc_insertion_point(field_list:opentxs.proto.PaymentWorkflow.account)
  return account_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
PaymentWorkflow::mutable_account() {
  // @@protoc_insertion_point(field_mutable_list:opentxs.proto.PaymentWorkflow.account)
  return &account_;
}

// optional bool archived = 11;
inline bool PaymentWorkflow::has_archived() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void PaymentWorkflow::set_has_archived() {
  _has_bits_[0] |= 0x00000020u;
}
inline void PaymentWorkflow::clear_has_archived() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void PaymentWorkflow::clear_archived() {
  archived_ = false;
  clear_has_archived();
}
inline bool PaymentWorkflow::archived() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.PaymentWorkflow.archived)
  return archived_;
}
inline void PaymentWorkflow::set_archived(bool value) {
  set_has_archived();
  archived_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.PaymentWorkflow.archived)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_PaymentWorkflow_2eproto__INCLUDED
