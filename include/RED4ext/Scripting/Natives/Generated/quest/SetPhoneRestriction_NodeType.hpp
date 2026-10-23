#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IPhoneManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct SetPhoneRestriction_NodeType : quest::IPhoneManagerNodeType
{
    static constexpr const char* NAME = "questSetPhoneRestriction_NodeType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<quest::IPhoneManagerNodeType>];
    bool applyPhoneRestriction; // 34
    uint8_t unk_35[0x35 - (0x34 + sizeof(applyPhoneRestriction))];
    bool forcedApply; // 35
    uint8_t unk_38[0x38 - (0x35 + sizeof(forcedApply))];
    CName forcedApplySource; // 38
#else
    bool applyPhoneRestriction; // 38
    bool blockSkipByLine; // 39
    bool forcedApply; // 3A
    uint8_t unk3B[0x40 - 0x3B]; // 3B
    CName forcedApplySource; // 40
#endif
};
RED4EXT_ASSERT_SIZE(SetPhoneRestriction_NodeType, 0x48);
} // namespace quest
using questSetPhoneRestriction_NodeType = quest::SetPhoneRestriction_NodeType;
} // namespace RED4ext

// clang-format on
