#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterManagerVisuals_NodeSubType.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterManagerVisuals_OverridePlayerHairstyleAppearance : quest::ICharacterManagerVisuals_NodeSubType
{
    static constexpr const char* NAME = "questCharacterManagerVisuals_OverridePlayerHairstyleAppearance";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_6C[0x6C - ::RED4ext::Detail::DataSize<quest::ICharacterManagerVisuals_NodeSubType>];
    uint32_t hairstyleIndex; // 6C
    uint8_t unk_70[0x70 - (0x6C + sizeof(hairstyleIndex))];
    CName hairstyleDefinitionName; // 70
    uint8_t unk_78[0x78 - (0x70 + sizeof(hairstyleDefinitionName))];
    uint32_t beardIndex; // 78
    uint8_t unk_7C[0x7C - (0x78 + sizeof(beardIndex))];
    uint32_t beardPartIndex; // 7C
    uint8_t unk_80[0x80 - (0x7C + sizeof(beardPartIndex))];
    CName beardDefinitionName; // 80
#else
    uint32_t hairstyleIndex; // 70
    uint8_t unk74[0x78 - 0x74]; // 74
    CName hairstyleDefinitionName; // 78
    uint32_t beardIndex; // 80
    uint32_t beardPartIndex; // 84
    CName beardDefinitionName; // 88
#endif
};
RED4EXT_ASSERT_SIZE(CharacterManagerVisuals_OverridePlayerHairstyleAppearance, 0x90);
} // namespace quest
using questCharacterManagerVisuals_OverridePlayerHairstyleAppearance = quest::CharacterManagerVisuals_OverridePlayerHairstyleAppearance;
} // namespace RED4ext

// clang-format on
