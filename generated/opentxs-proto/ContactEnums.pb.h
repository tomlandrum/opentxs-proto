// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ContactEnums.proto

#ifndef PROTOBUF_ContactEnums_2eproto__INCLUDED
#define PROTOBUF_ContactEnums_2eproto__INCLUDED

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
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_util.h>
// @@protoc_insertion_point(includes)

namespace protobuf_ContactEnums_2eproto {
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
}  // namespace protobuf_ContactEnums_2eproto
namespace opentxs {
namespace proto {
}  // namespace proto
}  // namespace opentxs
namespace opentxs {
namespace proto {

enum ContactSectionName {
  CONTACTSECTION_ERROR = 0,
  CONTACTSECTION_SCOPE = 1,
  CONTACTSECTION_IDENTIFIER = 2,
  CONTACTSECTION_ADDRESS = 3,
  CONTACTSECTION_COMMUNICATION = 4,
  CONTACTSECTION_PROFILE = 5,
  CONTACTSECTION_RELATIONSHIP = 6,
  CONTACTSECTION_DESCRIPTOR = 7,
  CONTACTSECTION_EVENT = 8,
  CONTACTSECTION_CONTRACT = 9,
  CONTACTSECTION_PROCEDURE = 10
};
bool ContactSectionName_IsValid(int value);
const ContactSectionName ContactSectionName_MIN = CONTACTSECTION_ERROR;
const ContactSectionName ContactSectionName_MAX = CONTACTSECTION_PROCEDURE;
const int ContactSectionName_ARRAYSIZE = ContactSectionName_MAX + 1;

enum ContactItemType {
  CITEMTYPE_ERROR = 0,
  CITEMTYPE_INDIVIDUAL = 1,
  CITEMTYPE_ORGANIZATION = 2,
  CITEMTYPE_BUSINESS = 3,
  CITEMTYPE_GOVERNMENT = 4,
  CITEMTYPE_SERVER = 5,
  CITEMTYPE_PREFIX = 6,
  CITEMTYPE_FORENAME = 7,
  CITEMTYPE_MIDDLENAME = 8,
  CITEMTYPE_SURNAME = 9,
  CITEMTYPE_PEDIGREE = 10,
  CITEMTYPE_SUFFIX = 11,
  CITEMTYPE_NICKNAME = 12,
  CITEMTYPE_COMMONNAME = 13,
  CITEMTYPE_PASSPORT = 14,
  CITEMTYPE_NATIONAL = 15,
  CITEMTYPE_PROVINCIAL = 16,
  CITEMTYPE_MILITARY = 17,
  CITEMTYPE_PGP = 18,
  CITEMTYPE_OTR = 19,
  CITEMTYPE_SSL = 20,
  CITEMTYPE_PHYSICAL = 21,
  CITEMTYPE_OFFICIAL = 22,
  CITEMTYPE_BIRTHPLACE = 23,
  CITEMTYPE_HOME = 24,
  CITEMTYPE_WEBSITE = 25,
  CITEMTYPE_OPENTXS = 26,
  CITEMTYPE_PHONE = 27,
  CITEMTYPE_EMAIL = 28,
  CITEMTYPE_SKYPE = 29,
  CITEMTYPE_WIRE = 30,
  CITEMTYPE_QQ = 31,
  CITEMTYPE_BITMESSAGE = 32,
  CITEMTYPE_WHATSAPP = 33,
  CITEMTYPE_TELEGRAM = 34,
  CITEMTYPE_KIK = 35,
  CITEMTYPE_BBM = 36,
  CITEMTYPE_WECHAT = 37,
  CITEMTYPE_KAKAOTALK = 38,
  CITEMTYPE_FACEBOOK = 39,
  CITEMTYPE_GOOGLE = 40,
  CITEMTYPE_LINKEDIN = 41,
  CITEMTYPE_VK = 42,
  CITEMTYPE_ABOUTME = 43,
  CITEMTYPE_ONENAME = 44,
  CITEMTYPE_TWITTER = 45,
  CITEMTYPE_MEDIUM = 46,
  CITEMTYPE_TUMBLR = 47,
  CITEMTYPE_YAHOO = 48,
  CITEMTYPE_MYSPACE = 49,
  CITEMTYPE_MEETUP = 50,
  CITEMTYPE_REDDIT = 51,
  CITEMTYPE_HACKERNEWS = 52,
  CITEMTYPE_WIKIPEDIA = 53,
  CITEMTYPE_ANGELLIST = 54,
  CITEMTYPE_GITHUB = 55,
  CITEMTYPE_BITBUCKET = 56,
  CITEMTYPE_YOUTUBE = 57,
  CITEMTYPE_VIMEO = 58,
  CITEMTYPE_TWITCH = 59,
  CITEMTYPE_SNAPCHAT = 60,
  CITEMTYPE_VINE = 61,
  CITEMTYPE_INSTAGRAM = 62,
  CITEMTYPE_PINTEREST = 63,
  CITEMTYPE_IMGUR = 64,
  CITEMTYPE_FLICKR = 65,
  CITEMTYPE_DRIBBLE = 66,
  CITEMTYPE_BEHANCE = 67,
  CITEMTYPE_DEVIANTART = 68,
  CITEMTYPE_SPOTIFY = 69,
  CITEMTYPE_ITUNES = 70,
  CITEMTYPE_SOUNDCLOUD = 71,
  CITEMTYPE_ASKFM = 72,
  CITEMTYPE_EBAY = 73,
  CITEMTYPE_ETSY = 74,
  CITEMTYPE_OPENBAZAAR = 75,
  CITEMTYPE_XBOXLIVE = 76,
  CITEMTYPE_PLAYSTATION = 77,
  CITEMTYPE_SECONDLIFE = 78,
  CITEMTYPE_WARCRAFT = 79,
  CITEMTYPE_ALIAS = 80,
  CITEMTYPE_ACQUAINTANCE = 81,
  CITEMTYPE_FRIEND = 82,
  CITEMTYPE_SPOUSE = 83,
  CITEMTYPE_SIBLING = 84,
  CITEMTYPE_MEMBER = 85,
  CITEMTYPE_COLLEAGUE = 86,
  CITEMTYPE_PARENT = 87,
  CITEMTYPE_CHILD = 88,
  CITEMTYPE_EMPLOYER = 89,
  CITEMTYPE_EMPLOYEE = 90,
  CITEMTYPE_CITIZEN = 91,
  CITEMTYPE_PHOTO = 92,
  CITEMTYPE_GENDER = 93,
  CITEMTYPE_HEIGHT = 94,
  CITEMTYPE_WEIGHT = 95,
  CITEMTYPE_HAIR = 96,
  CITEMTYPE_EYE = 97,
  CITEMTYPE_SKIN = 98,
  CITEMTYPE_ETHNICITY = 99,
  CITEMTYPE_LANGUAGE = 100,
  CITEMTYPE_DEGREE = 101,
  CITEMTYPE_CERTIFICATION = 102,
  CITEMTYPE_TITLE = 103,
  CITEMTYPE_SKILL = 104,
  CITEMTYPE_AWARD = 105,
  CITEMTYPE_LIKES = 106,
  CITEMTYPE_SEXUAL = 107,
  CITEMTYPE_POLITICAL = 108,
  CITEMTYPE_RELIGIOUS = 109,
  CITEMTYPE_BIRTH = 110,
  CITEMTYPE_SECONDARYGRADUATION = 111,
  CITEMTYPE_UNIVERSITYGRADUATION = 112,
  CITEMTYPE_WEDDING = 113,
  CITEMTYPE_ACCOMPLISHMENT = 114,
  CITEMTYPE_BTC = 115,
  CITEMTYPE_ETH = 116,
  CITEMTYPE_XRP = 117,
  CITEMTYPE_LTC = 118,
  CITEMTYPE_DAO = 119,
  CITEMTYPE_XEM = 120,
  CITEMTYPE_DASH = 121,
  CITEMTYPE_MAID = 122,
  CITEMTYPE_LSK = 123,
  CITEMTYPE_DOGE = 124,
  CITEMTYPE_DGD = 125,
  CITEMTYPE_XMR = 126,
  CITEMTYPE_WAVES = 127,
  CITEMTYPE_NXT = 128,
  CITEMTYPE_SC = 129,
  CITEMTYPE_STEEM = 130,
  CITEMTYPE_AMP = 131,
  CITEMTYPE_XLM = 132,
  CITEMTYPE_FCT = 133,
  CITEMTYPE_BTS = 134,
  CITEMTYPE_USD = 135,
  CITEMTYPE_EUR = 136,
  CITEMTYPE_GBP = 137,
  CITEMTYPE_INR = 138,
  CITEMTYPE_AUD = 139,
  CITEMTYPE_CAD = 140,
  CITEMTYPE_SGD = 141,
  CITEMTYPE_CHF = 142,
  CITEMTYPE_MYR = 143,
  CITEMTYPE_JPY = 144,
  CITEMTYPE_CNY = 145,
  CITEMTYPE_NZD = 146,
  CITEMTYPE_THB = 147,
  CITEMTYPE_HUF = 148,
  CITEMTYPE_AED = 149,
  CITEMTYPE_HKD = 150,
  CITEMTYPE_MXN = 151,
  CITEMTYPE_ZAR = 152,
  CITEMTYPE_PHP = 153,
  CITEMTYPE_SEK = 154,
  CITEMTYPE_TNBTC = 155,
  CITEMTYPE_TNXRP = 156,
  CITEMTYPE_TNLTC = 157,
  CITEMTYPE_TNXEM = 158,
  CITEMTYPE_TNDASH = 159,
  CITEMTYPE_TNMAID = 160,
  CITEMTYPE_TNLSK = 161,
  CITEMTYPE_TNDOGE = 162,
  CITEMTYPE_TNXMR = 163,
  CITEMTYPE_TNWAVES = 164,
  CITEMTYPE_TNNXT = 165,
  CITEMTYPE_TNSC = 166,
  CITEMTYPE_TNSTEEM = 167,
  CITEMTYPE_PHILOSOPHY = 168,
  CITEMTYPE_MET = 169,
  CITEMTYPE_FAN = 170,
  CITEMTYPE_SUPERVISOR = 171,
  CITEMTYPE_SUBORDINATE = 172,
  CITEMTYPE_CONTACT = 173,
  CITEMTYPE_REFRESHED = 174,
  CITEMTYPE_BOT = 175,
  CITEMTYPE_BCH = 176,
  CITEMTYPE_TNBCH = 177,
  CITEMTYPE_OWNER = 178,
  CITEMTYPE_PROPERTY = 179,
  CITEMTYPE_UNKNOWN = 180,
  CITEMTYPE_ETHEREUM_OLYMPIC = 181,
  CITEMTYPE_ETHEREUM_CLASSIC = 182,
  CITEMTYPE_ETHEREUM_EXPANSE = 183,
  CITEMTYPE_ETHEREUM_MORDEN = 184,
  CITEMTYPE_ETHEREUM_ROPSTEN = 185,
  CITEMTYPE_ETHEREUM_RINKEBY = 186,
  CITEMTYPE_ETHEREUM_KOVAN = 187,
  CITEMTYPE_ETHEREUM_SOKOL = 188,
  CITEMTYPE_ETHEREUM_POA = 189
};
bool ContactItemType_IsValid(int value);
const ContactItemType ContactItemType_MIN = CITEMTYPE_ERROR;
const ContactItemType ContactItemType_MAX = CITEMTYPE_ETHEREUM_POA;
const int ContactItemType_ARRAYSIZE = ContactItemType_MAX + 1;

enum ContactItemAttribute {
  CITEMATTR_ERROR = 0,
  CITEMATTR_ACTIVE = 1,
  CITEMATTR_PRIMARY = 2,
  CITEMATTR_LOCAL = 3
};
bool ContactItemAttribute_IsValid(int value);
const ContactItemAttribute ContactItemAttribute_MIN = CITEMATTR_ERROR;
const ContactItemAttribute ContactItemAttribute_MAX = CITEMATTR_LOCAL;
const int ContactItemAttribute_ARRAYSIZE = ContactItemAttribute_MAX + 1;

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

template <> struct is_proto_enum< ::opentxs::proto::ContactSectionName> : ::google::protobuf::internal::true_type {};
template <> struct is_proto_enum< ::opentxs::proto::ContactItemType> : ::google::protobuf::internal::true_type {};
template <> struct is_proto_enum< ::opentxs::proto::ContactItemAttribute> : ::google::protobuf::internal::true_type {};

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ContactEnums_2eproto__INCLUDED
