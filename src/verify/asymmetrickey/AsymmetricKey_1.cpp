// Copyright (c) 2018 The Open-Transactions developers
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#include "opentxs-proto/Types.hpp"
#include "opentxs-proto/Check.hpp"

#define PROTO_NAME "asymmetric key"

namespace opentxs
{
namespace proto
{
bool CheckProto_1(
    const AsymmetricKey& input,
    const bool silent,
    const CredentialType type,
    const KeyMode mode,
    const KeyRole role)
{
    CHECK_MEMBERSHIP(type, AsymmetricKeyAllowedTypes);
    CHECK_VALUE(mode, mode);
    CHECK_VALUE(role, role);

    if (KEYMODE_PUBLIC == mode) {
        CHECK_KEY(key);
        CHECK_EXCLUDED(encryptedkey);
    } else {
        if (AKEYTYPE_LEGACY == input.type()) {
            CHECK_KEY(key);
            CHECK_EXCLUDED(encryptedkey);
        } else {
            CHECK_SUBOBJECT_VA(
                encryptedkey, AsymmetricKeyAllowedCiphertext, false);
        }
    }

    switch (type) {
        case CREDTYPE_LEGACY: {
            CHECK_EXCLUDED(chaincode);
            CHECK_EXCLUDED(path);
        } break;
        case CREDTYPE_HD: {
            if (KEYMODE_PUBLIC == mode) {
                CHECK_EXCLUDED(chaincode);
                CHECK_EXCLUDED(path);
            } else {
                CHECK_SUBOBJECT_VA(
                    chaincode, AsymmetricKeyAllowedCiphertext, false);
                CHECK_SUBOBJECT(path, AsymmetricKeyAllowedHDPath);
            }
        } break;
        default: {
            FAIL_2("incorrect or unknown type", type)
        }
    }

    CHECK_EXCLUDED(bip32_parent);

    return true;
}

bool CheckProto_2(
    const AsymmetricKey& input,
    const bool silent,
    const CredentialType type,
    const KeyMode mode,
    const KeyRole role)
{
    CHECK_MEMBERSHIP(type, AsymmetricKeyAllowedTypes);
    CHECK_VALUE(mode, mode);
    CHECK_VALUE(role, role);

    if (KEYMODE_PUBLIC == mode) {
        CHECK_KEY(key);
        CHECK_EXCLUDED(encryptedkey);
    } else {
        if (AKEYTYPE_LEGACY == input.type()) {
            CHECK_KEY(key);
            CHECK_EXCLUDED(encryptedkey);
        } else {
            CHECK_SUBOBJECT_VA(
                encryptedkey, AsymmetricKeyAllowedCiphertext, false);
        }
    }

    switch (type) {
        case CREDTYPE_LEGACY: {
            CHECK_EXCLUDED(chaincode);
            CHECK_EXCLUDED(path);
        } break;
        case CREDTYPE_HD: {
            if (KEYMODE_PUBLIC == mode) {
                CHECK_EXCLUDED(chaincode);
                CHECK_EXCLUDED(path);
            } else {
                CHECK_SUBOBJECT_VA(
                    chaincode, AsymmetricKeyAllowedCiphertext, false);
                CHECK_SUBOBJECT(path, AsymmetricKeyAllowedHDPath);
            }
        } break;
        default: {
            FAIL_2("incorrect or unknown type", type)
        }
    }

    return true;
}

bool CheckProto_3(
    const AsymmetricKey& input,
    const bool silent,
    const CredentialType,
    const KeyMode,
    const KeyRole)
{
    UNDEFINED_VERSION(3)
}

bool CheckProto_4(
    const AsymmetricKey& input,
    const bool silent,
    const CredentialType,
    const KeyMode,
    const KeyRole)
{
    UNDEFINED_VERSION(4)
}

bool CheckProto_5(
    const AsymmetricKey& input,
    const bool silent,
    const CredentialType,
    const KeyMode,
    const KeyRole)
{
    UNDEFINED_VERSION(5)
}

bool CheckProto_6(
    const AsymmetricKey& input,
    const bool silent,
    const CredentialType,
    const KeyMode,
    const KeyRole)
{
    UNDEFINED_VERSION(6)
}

bool CheckProto_7(
    const AsymmetricKey& input,
    const bool silent,
    const CredentialType,
    const KeyMode,
    const KeyRole)
{
    UNDEFINED_VERSION(7)
}

bool CheckProto_8(
    const AsymmetricKey& input,
    const bool silent,
    const CredentialType,
    const KeyMode,
    const KeyRole)
{
    UNDEFINED_VERSION(8)
}

bool CheckProto_9(
    const AsymmetricKey& input,
    const bool silent,
    const CredentialType,
    const KeyMode,
    const KeyRole)
{
    UNDEFINED_VERSION(9)
}

bool CheckProto_10(
    const AsymmetricKey& input,
    const bool silent,
    const CredentialType,
    const KeyMode,
    const KeyRole)
{
    UNDEFINED_VERSION(10)
}

bool CheckProto_11(
    const AsymmetricKey& input,
    const bool silent,
    const CredentialType,
    const KeyMode,
    const KeyRole)
{
    UNDEFINED_VERSION(11)
}

bool CheckProto_12(
    const AsymmetricKey& input,
    const bool silent,
    const CredentialType,
    const KeyMode,
    const KeyRole)
{
    UNDEFINED_VERSION(12)
}

bool CheckProto_13(
    const AsymmetricKey& input,
    const bool silent,
    const CredentialType,
    const KeyMode,
    const KeyRole)
{
    UNDEFINED_VERSION(13)
}

bool CheckProto_14(
    const AsymmetricKey& input,
    const bool silent,
    const CredentialType,
    const KeyMode,
    const KeyRole)
{
    UNDEFINED_VERSION(14)
}

bool CheckProto_15(
    const AsymmetricKey& input,
    const bool silent,
    const CredentialType,
    const KeyMode,
    const KeyRole)
{
    UNDEFINED_VERSION(15)
}

bool CheckProto_16(
    const AsymmetricKey& input,
    const bool silent,
    const CredentialType,
    const KeyMode,
    const KeyRole)
{
    UNDEFINED_VERSION(16)
}

bool CheckProto_17(
    const AsymmetricKey& input,
    const bool silent,
    const CredentialType,
    const KeyMode,
    const KeyRole)
{
    UNDEFINED_VERSION(17)
}

bool CheckProto_18(
    const AsymmetricKey& input,
    const bool silent,
    const CredentialType,
    const KeyMode,
    const KeyRole)
{
    UNDEFINED_VERSION(18)
}

bool CheckProto_19(
    const AsymmetricKey& input,
    const bool silent,
    const CredentialType,
    const KeyMode,
    const KeyRole)
{
    UNDEFINED_VERSION(19)
}

bool CheckProto_20(
    const AsymmetricKey& input,
    const bool silent,
    const CredentialType,
    const KeyMode,
    const KeyRole)
{
    UNDEFINED_VERSION(20)
}
}  // namespace proto
}  // namespace opentxs
