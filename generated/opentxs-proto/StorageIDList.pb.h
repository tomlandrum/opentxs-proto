// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: StorageIDList.proto

#ifndef PROTOBUF_StorageIDList_2eproto__INCLUDED
#define PROTOBUF_StorageIDList_2eproto__INCLUDED

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

namespace protobuf_StorageIDList_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsStorageIDListImpl();
void InitDefaultsStorageIDList();
inline void InitDefaults() {
  InitDefaultsStorageIDList();
}
}  // namespace protobuf_StorageIDList_2eproto
namespace opentxs {
namespace proto {
class StorageIDList;
class StorageIDListDefaultTypeInternal;
extern StorageIDListDefaultTypeInternal _StorageIDList_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace opentxs {
namespace proto {

// ===================================================================

class StorageIDList : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:opentxs.proto.StorageIDList) */ {
 public:
  StorageIDList();
  virtual ~StorageIDList();

  StorageIDList(const StorageIDList& from);

  inline StorageIDList& operator=(const StorageIDList& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  StorageIDList(StorageIDList&& from) noexcept
    : StorageIDList() {
    *this = ::std::move(from);
  }

  inline StorageIDList& operator=(StorageIDList&& from) noexcept {
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

  static const StorageIDList& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const StorageIDList* internal_default_instance() {
    return reinterpret_cast<const StorageIDList*>(
               &_StorageIDList_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(StorageIDList* other);
  friend void swap(StorageIDList& a, StorageIDList& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline StorageIDList* New() const PROTOBUF_FINAL { return New(NULL); }

  StorageIDList* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const StorageIDList& from);
  void MergeFrom(const StorageIDList& from);
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
  void InternalSwap(StorageIDList* other);
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

  // repeated string list = 3;
  int list_size() const;
  void clear_list();
  static const int kListFieldNumber = 3;
  const ::std::string& list(int index) const;
  ::std::string* mutable_list(int index);
  void set_list(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_list(int index, ::std::string&& value);
  #endif
  void set_list(int index, const char* value);
  void set_list(int index, const char* value, size_t size);
  ::std::string* add_list();
  void add_list(const ::std::string& value);
  #if LANG_CXX11
  void add_list(::std::string&& value);
  #endif
  void add_list(const char* value);
  void add_list(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& list() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_list();

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

  // optional uint32 version = 1;
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 1;
  ::google::protobuf::uint32 version() const;
  void set_version(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:opentxs.proto.StorageIDList)
 private:
  void set_has_version();
  void clear_has_version();
  void set_has_id();
  void clear_has_id();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::std::string> list_;
  ::google::protobuf::internal::ArenaStringPtr id_;
  ::google::protobuf::uint32 version_;
  friend struct ::protobuf_StorageIDList_2eproto::TableStruct;
  friend void ::protobuf_StorageIDList_2eproto::InitDefaultsStorageIDListImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// StorageIDList

// optional uint32 version = 1;
inline bool StorageIDList::has_version() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void StorageIDList::set_has_version() {
  _has_bits_[0] |= 0x00000002u;
}
inline void StorageIDList::clear_has_version() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void StorageIDList::clear_version() {
  version_ = 0u;
  clear_has_version();
}
inline ::google::protobuf::uint32 StorageIDList::version() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.StorageIDList.version)
  return version_;
}
inline void StorageIDList::set_version(::google::protobuf::uint32 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.StorageIDList.version)
}

// optional string id = 2;
inline bool StorageIDList::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void StorageIDList::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void StorageIDList::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void StorageIDList::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_id();
}
inline const ::std::string& StorageIDList::id() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.StorageIDList.id)
  return id_.GetNoArena();
}
inline void StorageIDList::set_id(const ::std::string& value) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.StorageIDList.id)
}
#if LANG_CXX11
inline void StorageIDList::set_id(::std::string&& value) {
  set_has_id();
  id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.StorageIDList.id)
}
#endif
inline void StorageIDList::set_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.StorageIDList.id)
}
inline void StorageIDList::set_id(const char* value, size_t size) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.StorageIDList.id)
}
inline ::std::string* StorageIDList::mutable_id() {
  set_has_id();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.StorageIDList.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* StorageIDList::release_id() {
  // @@protoc_insertion_point(field_release:opentxs.proto.StorageIDList.id)
  clear_has_id();
  return id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void StorageIDList::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    set_has_id();
  } else {
    clear_has_id();
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.StorageIDList.id)
}

// repeated string list = 3;
inline int StorageIDList::list_size() const {
  return list_.size();
}
inline void StorageIDList::clear_list() {
  list_.Clear();
}
inline const ::std::string& StorageIDList::list(int index) const {
  // @@protoc_insertion_point(field_get:opentxs.proto.StorageIDList.list)
  return list_.Get(index);
}
inline ::std::string* StorageIDList::mutable_list(int index) {
  // @@protoc_insertion_point(field_mutable:opentxs.proto.StorageIDList.list)
  return list_.Mutable(index);
}
inline void StorageIDList::set_list(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:opentxs.proto.StorageIDList.list)
  list_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void StorageIDList::set_list(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:opentxs.proto.StorageIDList.list)
  list_.Mutable(index)->assign(std::move(value));
}
#endif
inline void StorageIDList::set_list(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  list_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:opentxs.proto.StorageIDList.list)
}
inline void StorageIDList::set_list(int index, const char* value, size_t size) {
  list_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.StorageIDList.list)
}
inline ::std::string* StorageIDList::add_list() {
  // @@protoc_insertion_point(field_add_mutable:opentxs.proto.StorageIDList.list)
  return list_.Add();
}
inline void StorageIDList::add_list(const ::std::string& value) {
  list_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:opentxs.proto.StorageIDList.list)
}
#if LANG_CXX11
inline void StorageIDList::add_list(::std::string&& value) {
  list_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:opentxs.proto.StorageIDList.list)
}
#endif
inline void StorageIDList::add_list(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  list_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:opentxs.proto.StorageIDList.list)
}
inline void StorageIDList::add_list(const char* value, size_t size) {
  list_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:opentxs.proto.StorageIDList.list)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
StorageIDList::list() const {
  // @@protoc_insertion_point(field_list:opentxs.proto.StorageIDList.list)
  return list_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
StorageIDList::mutable_list() {
  // @@protoc_insertion_point(field_mutable_list:opentxs.proto.StorageIDList.list)
  return &list_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_StorageIDList_2eproto__INCLUDED
