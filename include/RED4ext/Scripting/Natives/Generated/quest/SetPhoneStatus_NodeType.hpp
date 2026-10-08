#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IPhoneManagerNodeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/PhoneStatus.hpp>

namespace RED4ext
{
namespace quest
{
struct SetPhoneStatus_NodeType : quest::IPhoneManagerNodeType
{
    static constexpr const char* NAME = "questSetPhoneStatus_NodeType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<quest::IPhoneManagerNodeType>];
    quest::PhoneStatus status; // 34
    uint8_t unk_38[0x38 - (0x34 + sizeof(status))];
    CName customStatus; // 38
#else
    quest::PhoneStatus status; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
    CName customStatus; // 40
#endif
};
RED4EXT_ASSERT_SIZE(SetPhoneStatus_NodeType, 0x48);
} // namespace quest
using questSetPhoneStatus_NodeType = quest::SetPhoneStatus_NodeType;
} // namespace RED4ext

// clang-format on
