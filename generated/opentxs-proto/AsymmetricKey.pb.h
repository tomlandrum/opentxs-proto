// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AsymmetricKey.proto

#ifndef PROTOBUF_AsymmetricKey_2eproto__INCLUDED
#define PROTOBUF_AsymmetricKey_2eproto__INCLUDED

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
#include "Ciphertext.pb.h"  // IWYU pragma: export
#include "Enums.pb.h"  // IWYU pragma: export
#include "HDPath.pb.h"  // IWYU pragma: export
// @@protoc_insertion_point(includes)

namespace protobuf_AsymmetricKey_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsAsymmetricKeyImpl();
void InitDefaultsAsymmetricKey();
inline void InitDefaults() {
  InitDefaultsAsymmetricKey();
}
}  // namespace protobuf_AsymmetricKey_2eproto
namespace opentxs {
namespace proto {
class AsymmetricKey;
class AsymmetricKeyDefaultTypeInternal;
extern AsymmetricKeyDefaultTypeInternal _AsymmetricKey_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace opentxs {
namespace proto {

// ===================================================================

class AsymmetricKey : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:opentxs.proto.AsymmetricKey) */ {
 public:
  AsymmetricKey();
  virtual ~AsymmetricKey();

  AsymmetricKey(const AsymmetricKey& from);

  inline AsymmetricKey& operator=(const AsymmetricKey& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  AsymmetricKey(AsymmetricKey&& from) noexcept
    : AsymmetricKey() {
    *this = ::std::move(from);
  }

  inline AsymmetricKey& operator=(AsymmetricKey&& from) noexcept {
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

  static const AsymmetricKey& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AsymmetricKey* internal_default_instance() {
    return reinterpret_cast<const AsymmetricKey*>(
               &_AsymmetricKey_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(AsymmetricKey* other);
  friend void swap(AsymmetricKey& a, AsymmetricKey& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline AsymmetricKey* New() const PROTOBUF_FINAL { return New(NULL); }

  AsymmetricKey* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const AsymmetricKey& from);
  void MergeFrom(const AsymmetricKey& from);
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
  void InternalSwap(AsymmetricKey* other);
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

  // optional bytes key = 5;
  bool has_key() const;
  void clear_key();
  static const int kKeyFieldNumber = 5;
  const ::std::string& key() const;
  void set_key(const ::std::string& value);
  #if LANG_CXX11
  void set_key(::std::string&& value);
  #endif
  void set_key(const char* value);
  void set_key(const void* value, size_t size);
  ::std::string* mutable_key();
  ::std::string* release_key();
  void set_allocated_key(::std::string* key);

  // optional .opentxs.proto.Ciphertext encryptedKey = 6;
  bool has_encryptedkey() const;
  void clear_encryptedkey();
  static const int kEncryptedKeyFieldNumber = 6;
  const ::opentxs::proto::Ciphertext& encryptedkey() const;
  ::opentxs::proto::Ciphertext* release_encryptedkey();
  ::opentxs::proto::Ciphertext* mutable_encryptedkey();
  void set_allocated_encryptedkey(::opentxs::proto::Ciphertext* encryptedkey);

  // optional .opentxs.proto.Ciphertext chaincode = 7;
  bool has_chaincode() const;
  void clear_chaincode();
  static const int kChaincodeFieldNumber = 7;
  const ::opentxs::proto::Ciphertext& chaincode() const;
  ::opentxs::proto::Ciphertext* release_chaincode();
  ::opentxs::proto::Ciphertext* mutable_chaincode();
  void set_allocated_chaincode(::opentxs::proto::Ciphertext* chaincode);

  // optional .opentxs.proto.HDPath path = 8;
  bool has_path() const;
  void clear_path();
  static const int kPathFieldNumber = 8;
  const ::opentxs::proto::HDPath& path() const;
  ::opentxs::proto::HDPath* release_path();
  ::opentxs::proto::HDPath* mutable_path();
  void set_allocated_path(::opentxs::proto::HDPath* path);

  // optional uint32 version = 1;
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 1;
  ::google::protobuf::uint32 version() const;
  void set_version(::google::protobuf::uint32 value);

  // optional .opentxs.proto.AsymmetricKeyType type = 2;
  bool has_type() const;
  void clear_type();
  static const int kTypeFieldNumber = 2;
  ::opentxs::proto::AsymmetricKeyType type() const;
  void set_type(::opentxs::proto::AsymmetricKeyType value);

  // optional .opentxs.proto.KeyMode mode = 3;
  bool has_mode() const;
  void clear_mode();
  static const int kModeFieldNumber = 3;
  ::opentxs::proto::KeyMode mode() const;
  void set_mode(::opentxs::proto::KeyMode value);

  // optional .opentxs.proto.KeyRole role = 4;
  bool has_role() const;
  void clear_role();
  static const int kRoleFieldNumber = 4;
  ::opentxs::proto::KeyRole role() const;
  void set_role(::opentxs::proto::KeyRole value);

  // optional uint32 bip32_parent = 9;
  bool has_bip32_parent() const;
  void clear_bip32_parent();
  static const int kBip32ParentFieldNumber = 9;
  ::google::protobuf::uint32 bip32_parent() const;
  void set_bip32_parent(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:opentxs.proto.AsymmetricKey)
 private:
  void set_has_version();
  void clear_has_version();
  void set_has_type();
  void clear_has_type();
  void set_has_mode();
  void clear_has_mode();
  void set_has_role();
  void clear_has_role();
  void set_has_key();
  void clear_has_key();
  void set_has_encryptedkey();
  void clear_has_encryptedkey();
  void set_has_chaincode();
  void clear_has_chaincode();
  void set_has_path();
  void clear_has_path();
  void set_has_bip32_parent();
  void clear_has_bip32_parent();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr key_;
  ::opentxs::proto::Ciphertext* encryptedkey_;
  ::opentxs::proto::Ciphertext* chaincode_;
  ::opentxs::proto::HDPath* path_;
  ::google::protobuf::uint32 version_;
  int type_;
  int mode_;
  int role_;
  ::google::protobuf::uint32 bip32_parent_;
  friend struct ::protobuf_AsymmetricKey_2eproto::TableStruct;
  friend void ::protobuf_AsymmetricKey_2eproto::InitDefaultsAsymmetricKeyImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AsymmetricKey

// optional uint32 version = 1;
inline bool AsymmetricKey::has_version() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void AsymmetricKey::set_has_version() {
  _has_bits_[0] |= 0x00000010u;
}
inline void AsymmetricKey::clear_has_version() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void AsymmetricKey::clear_version() {
  version_ = 0u;
  clear_has_version();
}
inline ::google::protobuf::uint32 AsymmetricKey::version() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.AsymmetricKey.version)
  return version_;
}
inline void AsymmetricKey::set_version(::google::protobuf::uint32 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.AsymmetricKey.version)
}

// optional .opentxs.proto.AsymmetricKeyType type = 2;
inline bool AsymmetricKey::has_type() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void AsymmetricKey::set_has_type() {
  _has_bits_[0] |= 0x00000020u;
}
inline void AsymmetricKey::clear_has_type() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void AsymmetricKey::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::opentxs::proto::AsymmetricKeyType AsymmetricKey::type() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.AsymmetricKey.type)
  return static_cast< ::opentxs::proto::AsymmetricKeyType >(type_);
}
inline void AsymmetricKey::set_type(::opentxs::proto::AsymmetricKeyType value) {
  assert(::opentxs::proto::AsymmetricKeyType_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.AsymmetricKey.type)
}

// optional .opentxs.proto.KeyMode mode = 3;
inline bool AsymmetricKey::has_mode() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void AsymmetricKey::set_has_mode() {
  _has_bits_[0] |= 0x00000040u;
}
inline void AsymmetricKey::clear_has_mode() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void AsymmetricKey::clear_mode() {
  mode_ = 0;
  clear_has_mode();
}
inline ::opentxs::proto::KeyMode AsymmetricKey::mode() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.AsymmetricKey.mode)
  return static_cast< ::opentxs::proto::KeyMode >(mode_);
}
inline void AsymmetricKey::set_mode(::opentxs::proto::KeyMode value) {
  assert(::opentxs::proto::KeyMode_IsValid(value));
  set_has_mode();
  mode_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.AsymmetricKey.mode)
}

// optional .opentxs.proto.KeyRole role = 4;
inline bool AsymmetricKey::has_role() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void AsymmetricKey::set_has_role() {
  _has_bits_[0] |= 0x00000080u;
}
inline void AsymmetricKey::clear_has_role() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void AsymmetricKey::clear_role() {
  role_ = 0;
  clear_has_role();
}
inline ::opentxs::proto::KeyRole AsymmetricKey::role() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.AsymmetricKey.role)
  return static_cast< ::opentxs::proto::KeyRole >(role_);
}
inline void AsymmetricKey::set_role(::opentxs::proto::KeyRole value) {
  assert(::opentxs::proto::KeyRole_IsValid(value));
  set_has_role();
  role_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.AsymmetricKey.role)
}

// optional bytes key = 5;
inline bool AsymmetricKey::has_key() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AsymmetricKey::set_has_key() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AsymmetricKey::clear_has_key() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void AsymmetricKey::clear_key() {
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_key();
}
inline const ::std::string& AsymmetricKey::key() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.AsymmetricKey.key)
  return key_.GetNoArena();
}
inline void AsymmetricKey::set_key(const ::std::string& value) {
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.AsymmetricKey.key)
}
#if LANG_CXX11
inline void AsymmetricKey::set_key(::std::string&& value) {
  set_has_key();
  key_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.AsymmetricKey.key)
}
#endif
inline void AsymmetricKey::set_key(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.AsymmetricKey.key)
}
inline void AsymmetricKey::set_key(const void* value, size_t size) {
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.AsymmetricKey.key)
}
inline ::std::string* AsymmetricKey::mutable_key() {
  set_has_key();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.AsymmetricKey.key)
  return key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AsymmetricKey::release_key() {
  // @@protoc_insertion_point(field_release:opentxs.proto.AsymmetricKey.key)
  clear_has_key();
  return key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AsymmetricKey::set_allocated_key(::std::string* key) {
  if (key != NULL) {
    set_has_key();
  } else {
    clear_has_key();
  }
  key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.AsymmetricKey.key)
}

// optional .opentxs.proto.Ciphertext encryptedKey = 6;
inline bool AsymmetricKey::has_encryptedkey() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void AsymmetricKey::set_has_encryptedkey() {
  _has_bits_[0] |= 0x00000002u;
}
inline void AsymmetricKey::clear_has_encryptedkey() {
  _has_bits_[0] &= ~0x00000002u;
}
inline const ::opentxs::proto::Ciphertext& AsymmetricKey::encryptedkey() const {
  const ::opentxs::proto::Ciphertext* p = encryptedkey_;
  // @@protoc_insertion_point(field_get:opentxs.proto.AsymmetricKey.encryptedKey)
  return p != NULL ? *p : *reinterpret_cast<const ::opentxs::proto::Ciphertext*>(
      &::opentxs::proto::_Ciphertext_default_instance_);
}
inline ::opentxs::proto::Ciphertext* AsymmetricKey::release_encryptedkey() {
  // @@protoc_insertion_point(field_release:opentxs.proto.AsymmetricKey.encryptedKey)
  clear_has_encryptedkey();
  ::opentxs::proto::Ciphertext* temp = encryptedkey_;
  encryptedkey_ = NULL;
  return temp;
}
inline ::opentxs::proto::Ciphertext* AsymmetricKey::mutable_encryptedkey() {
  set_has_encryptedkey();
  if (encryptedkey_ == NULL) {
    encryptedkey_ = new ::opentxs::proto::Ciphertext;
  }
  // @@protoc_insertion_point(field_mutable:opentxs.proto.AsymmetricKey.encryptedKey)
  return encryptedkey_;
}
inline void AsymmetricKey::set_allocated_encryptedkey(::opentxs::proto::Ciphertext* encryptedkey) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(encryptedkey_);
  }
  if (encryptedkey) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      encryptedkey = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, encryptedkey, submessage_arena);
    }
    set_has_encryptedkey();
  } else {
    clear_has_encryptedkey();
  }
  encryptedkey_ = encryptedkey;
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.AsymmetricKey.encryptedKey)
}

// optional .opentxs.proto.Ciphertext chaincode = 7;
inline bool AsymmetricKey::has_chaincode() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void AsymmetricKey::set_has_chaincode() {
  _has_bits_[0] |= 0x00000004u;
}
inline void AsymmetricKey::clear_has_chaincode() {
  _has_bits_[0] &= ~0x00000004u;
}
inline const ::opentxs::proto::Ciphertext& AsymmetricKey::chaincode() const {
  const ::opentxs::proto::Ciphertext* p = chaincode_;
  // @@protoc_insertion_point(field_get:opentxs.proto.AsymmetricKey.chaincode)
  return p != NULL ? *p : *reinterpret_cast<const ::opentxs::proto::Ciphertext*>(
      &::opentxs::proto::_Ciphertext_default_instance_);
}
inline ::opentxs::proto::Ciphertext* AsymmetricKey::release_chaincode() {
  // @@protoc_insertion_point(field_release:opentxs.proto.AsymmetricKey.chaincode)
  clear_has_chaincode();
  ::opentxs::proto::Ciphertext* temp = chaincode_;
  chaincode_ = NULL;
  return temp;
}
inline ::opentxs::proto::Ciphertext* AsymmetricKey::mutable_chaincode() {
  set_has_chaincode();
  if (chaincode_ == NULL) {
    chaincode_ = new ::opentxs::proto::Ciphertext;
  }
  // @@protoc_insertion_point(field_mutable:opentxs.proto.AsymmetricKey.chaincode)
  return chaincode_;
}
inline void AsymmetricKey::set_allocated_chaincode(::opentxs::proto::Ciphertext* chaincode) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(chaincode_);
  }
  if (chaincode) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      chaincode = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, chaincode, submessage_arena);
    }
    set_has_chaincode();
  } else {
    clear_has_chaincode();
  }
  chaincode_ = chaincode;
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.AsymmetricKey.chaincode)
}

// optional .opentxs.proto.HDPath path = 8;
inline bool AsymmetricKey::has_path() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void AsymmetricKey::set_has_path() {
  _has_bits_[0] |= 0x00000008u;
}
inline void AsymmetricKey::clear_has_path() {
  _has_bits_[0] &= ~0x00000008u;
}
inline const ::opentxs::proto::HDPath& AsymmetricKey::path() const {
  const ::opentxs::proto::HDPath* p = path_;
  // @@protoc_insertion_point(field_get:opentxs.proto.AsymmetricKey.path)
  return p != NULL ? *p : *reinterpret_cast<const ::opentxs::proto::HDPath*>(
      &::opentxs::proto::_HDPath_default_instance_);
}
inline ::opentxs::proto::HDPath* AsymmetricKey::release_path() {
  // @@protoc_insertion_point(field_release:opentxs.proto.AsymmetricKey.path)
  clear_has_path();
  ::opentxs::proto::HDPath* temp = path_;
  path_ = NULL;
  return temp;
}
inline ::opentxs::proto::HDPath* AsymmetricKey::mutable_path() {
  set_has_path();
  if (path_ == NULL) {
    path_ = new ::opentxs::proto::HDPath;
  }
  // @@protoc_insertion_point(field_mutable:opentxs.proto.AsymmetricKey.path)
  return path_;
}
inline void AsymmetricKey::set_allocated_path(::opentxs::proto::HDPath* path) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(path_);
  }
  if (path) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      path = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, path, submessage_arena);
    }
    set_has_path();
  } else {
    clear_has_path();
  }
  path_ = path;
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.AsymmetricKey.path)
}

// optional uint32 bip32_parent = 9;
inline bool AsymmetricKey::has_bip32_parent() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void AsymmetricKey::set_has_bip32_parent() {
  _has_bits_[0] |= 0x00000100u;
}
inline void AsymmetricKey::clear_has_bip32_parent() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void AsymmetricKey::clear_bip32_parent() {
  bip32_parent_ = 0u;
  clear_has_bip32_parent();
}
inline ::google::protobuf::uint32 AsymmetricKey::bip32_parent() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.AsymmetricKey.bip32_parent)
  return bip32_parent_;
}
inline void AsymmetricKey::set_bip32_parent(::google::protobuf::uint32 value) {
  set_has_bip32_parent();
  bip32_parent_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.AsymmetricKey.bip32_parent)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_AsymmetricKey_2eproto__INCLUDED
