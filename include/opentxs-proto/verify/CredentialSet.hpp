// Copyright (c) 2018 The Open-Transactions developers
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#ifndef OPENTXS_PROTO_CREDENTIALSET_HPP
#define OPENTXS_PROTO_CREDENTIALSET_HPP

#include "VerifyCredentials.hpp"

namespace opentxs
{
namespace proto
{
bool CheckProto_1(
    const CredentialSet& credSet,
    const bool silent,
    const std::string& nymID,
    const KeyMode& key,
    bool& haveHD,
    const CredentialSetMode& mode = CREDSETMODE_ERROR);
bool CheckProto_2(
    const CredentialSet& credSet,
    const bool silent,
    const std::string& nymID,
    const KeyMode& key,
    bool& haveHD,
    const CredentialSetMode& mode = CREDSETMODE_ERROR);
bool CheckProto_3(
    const CredentialSet& credSet,
    const bool silent,
    const std::string& nymID,
    const KeyMode& key,
    bool& haveHD,
    const CredentialSetMode& mode = CREDSETMODE_ERROR);
bool CheckProto_4(
    const CredentialSet& credSet,
    const bool silent,
    const std::string& nymID,
    const KeyMode& key,
    bool& haveHD,
    const CredentialSetMode& mode = CREDSETMODE_ERROR);
bool CheckProto_5(
    const CredentialSet&,
    const bool,
    const std::string&,
    const KeyMode&,
    bool&,
    const CredentialSetMode& mode = CREDSETMODE_ERROR);
bool CheckProto_6(
    const CredentialSet&,
    const bool,
    const std::string&,
    const KeyMode&,
    bool&,
    const CredentialSetMode& mode = CREDSETMODE_ERROR);
bool CheckProto_7(
    const CredentialSet&,
    const bool,
    const std::string&,
    const KeyMode&,
    bool&,
    const CredentialSetMode& mode = CREDSETMODE_ERROR);
bool CheckProto_8(
    const CredentialSet&,
    const bool,
    const std::string&,
    const KeyMode&,
    bool&,
    const CredentialSetMode& mode = CREDSETMODE_ERROR);
bool CheckProto_9(
    const CredentialSet&,
    const bool,
    const std::string&,
    const KeyMode&,
    bool&,
    const CredentialSetMode& mode = CREDSETMODE_ERROR);
bool CheckProto_10(
    const CredentialSet&,
    const bool,
    const std::string&,
    const KeyMode&,
    bool&,
    const CredentialSetMode& mode = CREDSETMODE_ERROR);
bool CheckProto_11(
    const CredentialSet&,
    const bool,
    const std::string&,
    const KeyMode&,
    bool&,
    const CredentialSetMode& mode = CREDSETMODE_ERROR);
bool CheckProto_12(
    const CredentialSet&,
    const bool,
    const std::string&,
    const KeyMode&,
    bool&,
    const CredentialSetMode& mode = CREDSETMODE_ERROR);
bool CheckProto_13(
    const CredentialSet&,
    const bool,
    const std::string&,
    const KeyMode&,
    bool&,
    const CredentialSetMode& mode = CREDSETMODE_ERROR);
bool CheckProto_14(
    const CredentialSet&,
    const bool,
    const std::string&,
    const KeyMode&,
    bool&,
    const CredentialSetMode& mode = CREDSETMODE_ERROR);
bool CheckProto_15(
    const CredentialSet&,
    const bool,
    const std::string&,
    const KeyMode&,
    bool&,
    const CredentialSetMode& mode = CREDSETMODE_ERROR);
bool CheckProto_16(
    const CredentialSet&,
    const bool,
    const std::string&,
    const KeyMode&,
    bool&,
    const CredentialSetMode& mode = CREDSETMODE_ERROR);
bool CheckProto_17(
    const CredentialSet&,
    const bool,
    const std::string&,
    const KeyMode&,
    bool&,
    const CredentialSetMode& mode = CREDSETMODE_ERROR);
bool CheckProto_18(
    const CredentialSet&,
    const bool,
    const std::string&,
    const KeyMode&,
    bool&,
    const CredentialSetMode& mode = CREDSETMODE_ERROR);
bool CheckProto_19(
    const CredentialSet&,
    const bool,
    const std::string&,
    const KeyMode&,
    bool&,
    const CredentialSetMode& mode = CREDSETMODE_ERROR);
bool CheckProto_20(
    const CredentialSet&,
    const bool,
    const std::string&,
    const KeyMode&,
    bool&,
    const CredentialSetMode& mode = CREDSETMODE_ERROR);
}  // namespace proto
}  // namespace opentxs

#endif  // OPENTXS_PROTO_CREDENTIALSET_HPP
