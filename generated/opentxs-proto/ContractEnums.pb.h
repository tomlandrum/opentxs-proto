// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ContractEnums.proto

#ifndef PROTOBUF_ContractEnums_2eproto__INCLUDED
#define PROTOBUF_ContractEnums_2eproto__INCLUDED

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
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_util.h>
// @@protoc_insertion_point(includes)

namespace protobuf_ContractEnums_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
inline void InitDefaults() {
}
}  // namespace protobuf_ContractEnums_2eproto
namespace opentxs {
namespace proto {
}  // namespace proto
}  // namespace opentxs
namespace opentxs {
namespace proto {

enum AddressType {
  ADDRESSTYPE_ERROR = 0,
  ADDRESSTYPE_IPV4 = 1,
  ADDRESSTYPE_IPV6 = 2,
  ADDRESSTYPE_ONION = 3,
  ADDRESSTYPE_EEP = 4,
  ADDRESSTYPE_INPROC = 5
};
bool AddressType_IsValid(int value);
const AddressType AddressType_MIN = ADDRESSTYPE_ERROR;
const AddressType AddressType_MAX = ADDRESSTYPE_INPROC;
const int AddressType_ARRAYSIZE = AddressType_MAX + 1;

enum ProtocolVersion {
  PROTOCOLVERSION_ERROR = 0,
  PROTOCOLVERSION_LEGACY = 1,
  PROTOCOLVERSION_NOTIFY = 2
};
bool ProtocolVersion_IsValid(int value);
const ProtocolVersion ProtocolVersion_MIN = PROTOCOLVERSION_ERROR;
const ProtocolVersion ProtocolVersion_MAX = PROTOCOLVERSION_NOTIFY;
const int ProtocolVersion_ARRAYSIZE = ProtocolVersion_MAX + 1;

enum UnitType {
  UNITTYPE_ERROR = 0,
  UNITTYPE_CURRENCY = 1,
  UNITTYPE_SECURITY = 2,
  UNITTYPE_BASKET = 3
};
bool UnitType_IsValid(int value);
const UnitType UnitType_MIN = UNITTYPE_ERROR;
const UnitType UnitType_MAX = UNITTYPE_BASKET;
const int UnitType_ARRAYSIZE = UnitType_MAX + 1;

enum EquityType {
  EQUITYTYPE_ERROR = 0,
  EQUITYTYPE_SHARES = 1
};
bool EquityType_IsValid(int value);
const EquityType EquityType_MIN = EQUITYTYPE_ERROR;
const EquityType EquityType_MAX = EQUITYTYPE_SHARES;
const int EquityType_ARRAYSIZE = EquityType_MAX + 1;

// ===================================================================


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace opentxs

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::opentxs::proto::AddressType> : ::google::protobuf::internal::true_type {};
template <> struct is_proto_enum< ::opentxs::proto::ProtocolVersion> : ::google::protobuf::internal::true_type {};
template <> struct is_proto_enum< ::opentxs::proto::UnitType> : ::google::protobuf::internal::true_type {};
template <> struct is_proto_enum< ::opentxs::proto::EquityType> : ::google::protobuf::internal::true_type {};

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ContractEnums_2eproto__INCLUDED
