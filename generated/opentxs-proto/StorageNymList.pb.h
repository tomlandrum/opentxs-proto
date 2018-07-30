// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: StorageNymList.proto

#ifndef PROTOBUF_StorageNymList_2eproto__INCLUDED
#define PROTOBUF_StorageNymList_2eproto__INCLUDED

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
#include "StorageBip47NymAddressIndex.pb.h"  // IWYU pragma: export
#include "StorageItemHash.pb.h"  // IWYU pragma: export
// @@protoc_insertion_point(includes)

namespace protobuf_StorageNymList_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsStorageNymListImpl();
void InitDefaultsStorageNymList();
inline void InitDefaults() {
  InitDefaultsStorageNymList();
}
}  // namespace protobuf_StorageNymList_2eproto
namespace opentxs {
namespace proto {
class StorageNymList;
class StorageNymListDefaultTypeInternal;
extern StorageNymListDefaultTypeInternal _StorageNymList_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace opentxs {
namespace proto {

// ===================================================================

class StorageNymList : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:opentxs.proto.StorageNymList) */ {
 public:
  StorageNymList();
  virtual ~StorageNymList();

  StorageNymList(const StorageNymList& from);

  inline StorageNymList& operator=(const StorageNymList& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  StorageNymList(StorageNymList&& from) noexcept
    : StorageNymList() {
    *this = ::std::move(from);
  }

  inline StorageNymList& operator=(StorageNymList&& from) noexcept {
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

  static const StorageNymList& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const StorageNymList* internal_default_instance() {
    return reinterpret_cast<const StorageNymList*>(
               &_StorageNymList_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(StorageNymList* other);
  friend void swap(StorageNymList& a, StorageNymList& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline StorageNymList* New() const PROTOBUF_FINAL { return New(NULL); }

  StorageNymList* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const StorageNymList& from);
  void MergeFrom(const StorageNymList& from);
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
  void InternalSwap(StorageNymList* other);
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

  // repeated .opentxs.proto.StorageItemHash nym = 2;
  int nym_size() const;
  void clear_nym();
  static const int kNymFieldNumber = 2;
  const ::opentxs::proto::StorageItemHash& nym(int index) const;
  ::opentxs::proto::StorageItemHash* mutable_nym(int index);
  ::opentxs::proto::StorageItemHash* add_nym();
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::StorageItemHash >*
      mutable_nym();
  const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::StorageItemHash >&
      nym() const;

  // repeated string localnymid = 3;
  int localnymid_size() const;
  void clear_localnymid();
  static const int kLocalnymidFieldNumber = 3;
  const ::std::string& localnymid(int index) const;
  ::std::string* mutable_localnymid(int index);
  void set_localnymid(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_localnymid(int index, ::std::string&& value);
  #endif
  void set_localnymid(int index, const char* value);
  void set_localnymid(int index, const char* value, size_t size);
  ::std::string* add_localnymid();
  void add_localnymid(const ::std::string& value);
  #if LANG_CXX11
  void add_localnymid(::std::string&& value);
  #endif
  void add_localnymid(const char* value);
  void add_localnymid(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& localnymid() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_localnymid();

  // repeated .opentxs.proto.StorageBip47NymAddressIndex address = 4;
  int address_size() const;
  void clear_address();
  static const int kAddressFieldNumber = 4;
  const ::opentxs::proto::StorageBip47NymAddressIndex& address(int index) const;
  ::opentxs::proto::StorageBip47NymAddressIndex* mutable_address(int index);
  ::opentxs::proto::StorageBip47NymAddressIndex* add_address();
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::StorageBip47NymAddressIndex >*
      mutable_address();
  const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::StorageBip47NymAddressIndex >&
      address() const;

  // repeated .opentxs.proto.StorageBip47NymAddressIndex transaction = 5;
  int transaction_size() const;
  void clear_transaction();
  static const int kTransactionFieldNumber = 5;
  const ::opentxs::proto::StorageBip47NymAddressIndex& transaction(int index) const;
  ::opentxs::proto::StorageBip47NymAddressIndex* mutable_transaction(int index);
  ::opentxs::proto::StorageBip47NymAddressIndex* add_transaction();
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::StorageBip47NymAddressIndex >*
      mutable_transaction();
  const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::StorageBip47NymAddressIndex >&
      transaction() const;

  // optional uint32 version = 1;
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 1;
  ::google::protobuf::uint32 version() const;
  void set_version(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:opentxs.proto.StorageNymList)
 private:
  void set_has_version();
  void clear_has_version();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::StorageItemHash > nym_;
  ::google::protobuf::RepeatedPtrField< ::std::string> localnymid_;
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::StorageBip47NymAddressIndex > address_;
  ::google::protobuf::RepeatedPtrField< ::opentxs::proto::StorageBip47NymAddressIndex > transaction_;
  ::google::protobuf::uint32 version_;
  friend struct ::protobuf_StorageNymList_2eproto::TableStruct;
  friend void ::protobuf_StorageNymList_2eproto::InitDefaultsStorageNymListImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// StorageNymList

// optional uint32 version = 1;
inline bool StorageNymList::has_version() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void StorageNymList::set_has_version() {
  _has_bits_[0] |= 0x00000001u;
}
inline void StorageNymList::clear_has_version() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void StorageNymList::clear_version() {
  version_ = 0u;
  clear_has_version();
}
inline ::google::protobuf::uint32 StorageNymList::version() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.StorageNymList.version)
  return version_;
}
inline void StorageNymList::set_version(::google::protobuf::uint32 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.StorageNymList.version)
}

// repeated .opentxs.proto.StorageItemHash nym = 2;
inline int StorageNymList::nym_size() const {
  return nym_.size();
}
inline const ::opentxs::proto::StorageItemHash& StorageNymList::nym(int index) const {
  // @@protoc_insertion_point(field_get:opentxs.proto.StorageNymList.nym)
  return nym_.Get(index);
}
inline ::opentxs::proto::StorageItemHash* StorageNymList::mutable_nym(int index) {
  // @@protoc_insertion_point(field_mutable:opentxs.proto.StorageNymList.nym)
  return nym_.Mutable(index);
}
inline ::opentxs::proto::StorageItemHash* StorageNymList::add_nym() {
  // @@protoc_insertion_point(field_add:opentxs.proto.StorageNymList.nym)
  return nym_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::opentxs::proto::StorageItemHash >*
StorageNymList::mutable_nym() {
  // @@protoc_insertion_point(field_mutable_list:opentxs.proto.StorageNymList.nym)
  return &nym_;
}
inline const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::StorageItemHash >&
StorageNymList::nym() const {
  // @@protoc_insertion_point(field_list:opentxs.proto.StorageNymList.nym)
  return nym_;
}

// repeated string localnymid = 3;
inline int StorageNymList::localnymid_size() const {
  return localnymid_.size();
}
inline void StorageNymList::clear_localnymid() {
  localnymid_.Clear();
}
inline const ::std::string& StorageNymList::localnymid(int index) const {
  // @@protoc_insertion_point(field_get:opentxs.proto.StorageNymList.localnymid)
  return localnymid_.Get(index);
}
inline ::std::string* StorageNymList::mutable_localnymid(int index) {
  // @@protoc_insertion_point(field_mutable:opentxs.proto.StorageNymList.localnymid)
  return localnymid_.Mutable(index);
}
inline void StorageNymList::set_localnymid(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:opentxs.proto.StorageNymList.localnymid)
  localnymid_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void StorageNymList::set_localnymid(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:opentxs.proto.StorageNymList.localnymid)
  localnymid_.Mutable(index)->assign(std::move(value));
}
#endif
inline void StorageNymList::set_localnymid(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  localnymid_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:opentxs.proto.StorageNymList.localnymid)
}
inline void StorageNymList::set_localnymid(int index, const char* value, size_t size) {
  localnymid_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.StorageNymList.localnymid)
}
inline ::std::string* StorageNymList::add_localnymid() {
  // @@protoc_insertion_point(field_add_mutable:opentxs.proto.StorageNymList.localnymid)
  return localnymid_.Add();
}
inline void StorageNymList::add_localnymid(const ::std::string& value) {
  localnymid_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:opentxs.proto.StorageNymList.localnymid)
}
#if LANG_CXX11
inline void StorageNymList::add_localnymid(::std::string&& value) {
  localnymid_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:opentxs.proto.StorageNymList.localnymid)
}
#endif
inline void StorageNymList::add_localnymid(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  localnymid_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:opentxs.proto.StorageNymList.localnymid)
}
inline void StorageNymList::add_localnymid(const char* value, size_t size) {
  localnymid_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:opentxs.proto.StorageNymList.localnymid)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
StorageNymList::localnymid() const {
  // @@protoc_insertion_point(field_list:opentxs.proto.StorageNymList.localnymid)
  return localnymid_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
StorageNymList::mutable_localnymid() {
  // @@protoc_insertion_point(field_mutable_list:opentxs.proto.StorageNymList.localnymid)
  return &localnymid_;
}

// repeated .opentxs.proto.StorageBip47NymAddressIndex address = 4;
inline int StorageNymList::address_size() const {
  return address_.size();
}
inline const ::opentxs::proto::StorageBip47NymAddressIndex& StorageNymList::address(int index) const {
  // @@protoc_insertion_point(field_get:opentxs.proto.StorageNymList.address)
  return address_.Get(index);
}
inline ::opentxs::proto::StorageBip47NymAddressIndex* StorageNymList::mutable_address(int index) {
  // @@protoc_insertion_point(field_mutable:opentxs.proto.StorageNymList.address)
  return address_.Mutable(index);
}
inline ::opentxs::proto::StorageBip47NymAddressIndex* StorageNymList::add_address() {
  // @@protoc_insertion_point(field_add:opentxs.proto.StorageNymList.address)
  return address_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::opentxs::proto::StorageBip47NymAddressIndex >*
StorageNymList::mutable_address() {
  // @@protoc_insertion_point(field_mutable_list:opentxs.proto.StorageNymList.address)
  return &address_;
}
inline const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::StorageBip47NymAddressIndex >&
StorageNymList::address() const {
  // @@protoc_insertion_point(field_list:opentxs.proto.StorageNymList.address)
  return address_;
}

// repeated .opentxs.proto.StorageBip47NymAddressIndex transaction = 5;
inline int StorageNymList::transaction_size() const {
  return transaction_.size();
}
inline const ::opentxs::proto::StorageBip47NymAddressIndex& StorageNymList::transaction(int index) const {
  // @@protoc_insertion_point(field_get:opentxs.proto.StorageNymList.transaction)
  return transaction_.Get(index);
}
inline ::opentxs::proto::StorageBip47NymAddressIndex* StorageNymList::mutable_transaction(int index) {
  // @@protoc_insertion_point(field_mutable:opentxs.proto.StorageNymList.transaction)
  return transaction_.Mutable(index);
}
inline ::opentxs::proto::StorageBip47NymAddressIndex* StorageNymList::add_transaction() {
  // @@protoc_insertion_point(field_add:opentxs.proto.StorageNymList.transaction)
  return transaction_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::opentxs::proto::StorageBip47NymAddressIndex >*
StorageNymList::mutable_transaction() {
  // @@protoc_insertion_point(field_mutable_list:opentxs.proto.StorageNymList.transaction)
  return &transaction_;
}
inline const ::google::protobuf::RepeatedPtrField< ::opentxs::proto::StorageBip47NymAddressIndex >&
StorageNymList::transaction() const {
  // @@protoc_insertion_point(field_list:opentxs.proto.StorageNymList.transaction)
  return transaction_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_StorageNymList_2eproto__INCLUDED