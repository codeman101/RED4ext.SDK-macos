#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterManagerCombat_NodeSubType.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterManagerCombat_EquipWeapon : quest::ICharacterManagerCombat_NodeSubType
{
    static constexpr const char* NAME = "questCharacterManagerCombat_EquipWeapon";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_69[0x69 - ::RED4ext::Detail::DataSize<quest::ICharacterManagerCombat_NodeSubType>];
    bool equip; // 69
    uint8_t unk_6C[0x6C - (0x69 + sizeof(equip))];
    TweakDBID weaponID; // 6C
    uint8_t unk_74[0x74 - (0x6C + sizeof(weaponID))];
    TweakDBID slotID; // 74
    uint8_t unk_7C[0x7C - (0x74 + sizeof(slotID))];
    bool forceFirstEquip; // 7C
    uint8_t unk_7D[0x7D - (0x7C + sizeof(forceFirstEquip))];
    bool equipLastWeapon; // 7D
    uint8_t unk_7E[0x7E - (0x7D + sizeof(equipLastWeapon))];
    bool instant; // 7E
    uint8_t unk_7F[0x7F - (0x7E + sizeof(instant))];
    bool ignoreStateMachine; // 7F
#else
    bool equip; // 70
    uint8_t unk71[0x74 - 0x71]; // 71
    TweakDBID weaponID; // 74
    TweakDBID slotID; // 7C
    bool forceFirstEquip; // 84
    bool equipLastWeapon; // 85
    bool instant; // 86
    bool ignoreStateMachine; // 87
#endif
};
RED4EXT_ASSERT_SIZE(CharacterManagerCombat_EquipWeapon, 0x88);
} // namespace quest
using questCharacterManagerCombat_EquipWeapon = quest::CharacterManagerCombat_EquipWeapon;
} // namespace RED4ext

// clang-format on
