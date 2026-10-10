#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterManagerCombat_NodeSubType.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterManagerCombat_ModifyHealth : quest::ICharacterManagerCombat_NodeSubType
{
    static constexpr const char* NAME = "questCharacterManagerCombat_ModifyHealth";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_6C[0x6C - ::RED4ext::Detail::DataSize<quest::ICharacterManagerCombat_NodeSubType>];
    float percent; // 6C
    uint8_t unk_70[0x70 - (0x6C + sizeof(percent))];
    bool setExactValue; // 70
    uint8_t unk_71[0x71 - (0x70 + sizeof(setExactValue))];
    bool noDamageIndicator; // 71
    uint8_t unk_78[0x78 - (0x71 + sizeof(noDamageIndicator))];
    game::EntityReference damageSourceRef; // 78
#else
    float percent; // 70
    bool setExactValue; // 74
    bool noDamageIndicator; // 75
    uint8_t unk76[0x78 - 0x76]; // 76
    game::EntityReference damageSourceRef; // 78
#endif
};
RED4EXT_ASSERT_SIZE(CharacterManagerCombat_ModifyHealth, 0xB0);
} // namespace quest
using questCharacterManagerCombat_ModifyHealth = quest::CharacterManagerCombat_ModifyHealth;
} // namespace RED4ext

// clang-format on
