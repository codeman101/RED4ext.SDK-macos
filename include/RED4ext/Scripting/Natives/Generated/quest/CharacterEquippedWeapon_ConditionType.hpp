#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterEquippedWeapon_ConditionType : quest::ICharacterConditionType
{
    static constexpr const char* NAME = "questCharacterEquippedWeapon_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_71[0x71 - ::RED4ext::Detail::DataSize<quest::ICharacterConditionType>];
    bool anyWeaponEquipped; // 71
    uint8_t unk_78[0x78 - (0x71 + sizeof(anyWeaponEquipped))];
    CString weaponID; // 78
    uint8_t unk_98[0x98 - (0x78 + sizeof(weaponID))];
    CName weaponTag; // 98
    uint8_t unk_A0[0xA0 - (0x98 + sizeof(weaponTag))];
    bool inverted; // A0
#else
    bool anyWeaponEquipped; // 78
    uint8_t unk79[0x80 - 0x79]; // 79
    CString weaponID; // 80
    CName weaponTag; // A0
    bool inverted; // A8
    uint8_t unkA9[0xB0 - 0xA9]; // A9
#endif
};
RED4EXT_ASSERT_SIZE(CharacterEquippedWeapon_ConditionType, 0xB0);
} // namespace quest
using questCharacterEquippedWeapon_ConditionType = quest::CharacterEquippedWeapon_ConditionType;
} // namespace RED4ext

// clang-format on
