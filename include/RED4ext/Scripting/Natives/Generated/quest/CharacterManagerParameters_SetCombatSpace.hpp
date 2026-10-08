#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CombatSpaceSize.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterManagerCombat_NodeSubType.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterManagerParameters_SetCombatSpace : quest::ICharacterManagerCombat_NodeSubType
{
    static constexpr const char* NAME = "questCharacterManagerParameters_SetCombatSpace";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_6C[0x6C - ::RED4ext::Detail::DataSize<quest::ICharacterManagerCombat_NodeSubType>];
    AI::CombatSpaceSize combatSpaceSize; // 6C
#else
    AI::CombatSpaceSize combatSpaceSize; // 70
    uint8_t unk74[0x78 - 0x74]; // 74
#endif
};
RED4EXT_ASSERT_SIZE(CharacterManagerParameters_SetCombatSpace, 0x78);
} // namespace quest
using questCharacterManagerParameters_SetCombatSpace = quest::CharacterManagerParameters_SetCombatSpace;
} // namespace RED4ext

// clang-format on
