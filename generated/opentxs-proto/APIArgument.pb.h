// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: APIArgument.proto

#ifndef PROTOBUF_APIArgument_2eproto__INCLUDED
#define PROTOBUF_APIArgument_2eproto__INCLUDED

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

namespace protobuf_APIArgument_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsAPIArgumentImpl();
void InitDefaultsAPIArgument();
inline void InitDefaults() {
  InitDefaultsAPIArgument();
}
}  // namespace protobuf_APIArgument_2eproto
namespace opentxs {
namespace proto {
class APIArgument;
class APIArgumentDefaultTypeInternal;
extern APIArgumentDefaultTypeInternal _APIArgument_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace opentxs {
namespace proto {

// ===================================================================

class APIArgument : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:opentxs.proto.APIArgument) */ {
 public:
  APIArgument();
  virtual ~APIArgument();

  APIArgument(const APIArgument& from);

  inline APIArgument& operator=(const APIArgument& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  APIArgument(APIArgument&& from) noexcept
    : APIArgument() {
    *this = ::std::move(from);
  }

  inline APIArgument& operator=(APIArgument&& from) noexcept {
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

  static const APIArgument& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const APIArgument* internal_default_instance() {
    return reinterpret_cast<const APIArgument*>(
               &_APIArgument_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(APIArgument* other);
  friend void swap(APIArgument& a, APIArgument& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline APIArgument* New() const PROTOBUF_FINAL { return New(NULL); }

  APIArgument* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const APIArgument& from);
  void MergeFrom(const APIArgument& from);
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
  void InternalSwap(APIArgument* other);
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

  // repeated string value = 3;
  int value_size() const;
  void clear_value();
  static const int kValueFieldNumber = 3;
  const ::std::string& value(int index) const;
  ::std::string* mutable_value(int index);
  void set_value(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_value(int index, ::std::string&& value);
  #endif
  void set_value(int index, const char* value);
  void set_value(int index, const char* value, size_t size);
  ::std::string* add_value();
  void add_value(const ::std::string& value);
  #if LANG_CXX11
  void add_value(::std::string&& value);
  #endif
  void add_value(const char* value);
  void add_value(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& value() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_value();

  // optional string key = 2;
  bool has_key() const;
  void clear_key();
  static const int kKeyFieldNumber = 2;
  const ::std::string& key() const;
  void set_key(const ::std::string& value);
  #if LANG_CXX11
  void set_key(::std::string&& value);
  #endif
  void set_key(const char* value);
  void set_key(const char* value, size_t size);
  ::std::string* mutable_key();
  ::std::string* release_key();
  void set_allocated_key(::std::string* key);

  // optional uint32 version = 1;
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 1;
  ::google::protobuf::uint32 version() const;
  void set_version(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:opentxs.proto.APIArgument)
 private:
  void set_has_version();
  void clear_has_version();
  void set_has_key();
  void clear_has_key();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::std::string> value_;
  ::google::protobuf::internal::ArenaStringPtr key_;
  ::google::protobuf::uint32 version_;
  friend struct ::protobuf_APIArgument_2eproto::TableStruct;
  friend void ::protobuf_APIArgument_2eproto::InitDefaultsAPIArgumentImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// APIArgument

// optional uint32 version = 1;
inline bool APIArgument::has_version() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void APIArgument::set_has_version() {
  _has_bits_[0] |= 0x00000002u;
}
inline void APIArgument::clear_has_version() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void APIArgument::clear_version() {
  version_ = 0u;
  clear_has_version();
}
inline ::google::protobuf::uint32 APIArgument::version() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.APIArgument.version)
  return version_;
}
inline void APIArgument::set_version(::google::protobuf::uint32 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.APIArgument.version)
}

// optional string key = 2;
inline bool APIArgument::has_key() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void APIArgument::set_has_key() {
  _has_bits_[0] |= 0x00000001u;
}
inline void APIArgument::clear_has_key() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void APIArgument::clear_key() {
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_key();
}
inline const ::std::string& APIArgument::key() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.APIArgument.key)
  return key_.GetNoArena();
}
inline void APIArgument::set_key(const ::std::string& value) {
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.APIArgument.key)
}
#if LANG_CXX11
inline void APIArgument::set_key(::std::string&& value) {
  set_has_key();
  key_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.APIArgument.key)
}
#endif
inline void APIArgument::set_key(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.APIArgument.key)
}
inline void APIArgument::set_key(const char* value, size_t size) {
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.APIArgument.key)
}
inline ::std::string* APIArgument::mutable_key() {
  set_has_key();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.APIArgument.key)
  return key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* APIArgument::release_key() {
  // @@protoc_insertion_point(field_release:opentxs.proto.APIArgument.key)
  clear_has_key();
  return key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void APIArgument::set_allocated_key(::std::string* key) {
  if (key != NULL) {
    set_has_key();
  } else {
    clear_has_key();
  }
  key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.APIArgument.key)
}

// repeated string value = 3;
inline int APIArgument::value_size() const {
  return value_.size();
}
inline void APIArgument::clear_value() {
  value_.Clear();
}
inline const ::std::string& APIArgument::value(int index) const {
  // @@protoc_insertion_point(field_get:opentxs.proto.APIArgument.value)
  return value_.Get(index);
}
inline ::std::string* APIArgument::mutable_value(int index) {
  // @@protoc_insertion_point(field_mutable:opentxs.proto.APIArgument.value)
  return value_.Mutable(index);
}
inline void APIArgument::set_value(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:opentxs.proto.APIArgument.value)
  value_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void APIArgument::set_value(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:opentxs.proto.APIArgument.value)
  value_.Mutable(index)->assign(std::move(value));
}
#endif
inline void APIArgument::set_value(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  value_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:opentxs.proto.APIArgument.value)
}
inline void APIArgument::set_value(int index, const char* value, size_t size) {
  value_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.APIArgument.value)
}
inline ::std::string* APIArgument::add_value() {
  // @@protoc_insertion_point(field_add_mutable:opentxs.proto.APIArgument.value)
  return value_.Add();
}
inline void APIArgument::add_value(const ::std::string& value) {
  value_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:opentxs.proto.APIArgument.value)
}
#if LANG_CXX11
inline void APIArgument::add_value(::std::string&& value) {
  value_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:opentxs.proto.APIArgument.value)
}
#endif
inline void APIArgument::add_value(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  value_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:opentxs.proto.APIArgument.value)
}
inline void APIArgument::add_value(const char* value, size_t size) {
  value_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:opentxs.proto.APIArgument.value)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
APIArgument::value() const {
  // @@protoc_insertion_point(field_list:opentxs.proto.APIArgument.value)
  return value_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
APIArgument::mutable_value() {
  // @@protoc_insertion_point(field_mutable_list:opentxs.proto.APIArgument.value)
  return &value_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_APIArgument_2eproto__INCLUDED
