#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterManagerParameters_NodeSubType.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterManagerParameters_HealPlayer : quest::ICharacterManagerParameters_NodeSubType
{
    static constexpr const char* NAME = "questCharacterManagerParameters_HealPlayer";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_69[0x69 - ::RED4ext::Detail::DataSize<quest::ICharacterManagerParameters_NodeSubType>];
    bool heal; // 69
    uint8_t unk_6A[0x6A - (0x69 + sizeof(heal))];
    bool removeStatusEffects; // 6A
    uint8_t unk_6B[0x6B - (0x6A + sizeof(removeStatusEffects))];
    bool removeBuffs; // 6B
    uint8_t unk_6C[0x6C - (0x6B + sizeof(removeBuffs))];
    bool removeDebuffs; // 6C
    uint8_t unk_6D[0x6D - (0x6C + sizeof(removeDebuffs))];
    bool resetCyberdeckRAM; // 6D
#else
    bool heal; // 70
    bool removeStatusEffects; // 71
    bool removeBuffs; // 72
    bool removeDebuffs; // 73
    bool resetCyberdeckRAM; // 74
    uint8_t unk75[0x78 - 0x75]; // 75
#endif
};
RED4EXT_ASSERT_SIZE(CharacterManagerParameters_HealPlayer, 0x78);
} // namespace quest
using questCharacterManagerParameters_HealPlayer = quest::CharacterManagerParameters_HealPlayer;
} // namespace RED4ext

// clang-format on
