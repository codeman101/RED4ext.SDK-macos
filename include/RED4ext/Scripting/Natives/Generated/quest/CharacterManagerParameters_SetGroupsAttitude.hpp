#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/EAIAttitude.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterManagerParameters_NodeSubType.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterManagerParameters_SetGroupsAttitude : quest::ICharacterManagerParameters_NodeSubType
{
    static constexpr const char* NAME = "questCharacterManagerParameters_SetGroupsAttitude";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_70[0x70 - ::RED4ext::Detail::DataSize<quest::ICharacterManagerParameters_NodeSubType>];
    CName group1Name; // 70
    uint8_t unk_78[0x78 - (0x70 + sizeof(group1Name))];
    CName group2Name; // 78
    uint8_t unk_80[0x80 - (0x78 + sizeof(group2Name))];
    EAIAttitude attitude; // 80
    uint8_t unk_84[0x84 - (0x80 + sizeof(attitude))];
    bool set; // 84
#else
    CName group1Name; // 70
    CName group2Name; // 78
    EAIAttitude attitude; // 80
    bool set; // 84
    uint8_t unk85[0x88 - 0x85]; // 85
#endif
};
RED4EXT_ASSERT_SIZE(CharacterManagerParameters_SetGroupsAttitude, 0x88);
} // namespace quest
using questCharacterManagerParameters_SetGroupsAttitude = quest::CharacterManagerParameters_SetGroupsAttitude;
} // namespace RED4ext

// clang-format on
