#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterStatusEffect_CondtionType : quest::ICharacterConditionType
{
    static constexpr const char* NAME = "questCharacterStatusEffect_CondtionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_78[0x78 - ::RED4ext::Detail::DataSize<quest::ICharacterConditionType>];
    CString statusEffectID; // 78
    uint8_t unk_98[0x98 - (0x78 + sizeof(statusEffectID))];
    bool inverted; // 98
#else
    CString statusEffectID; // 78
    bool inverted; // 98
    uint8_t unk99[0xA0 - 0x99]; // 99
#endif
};
RED4EXT_ASSERT_SIZE(CharacterStatusEffect_CondtionType, 0xA0);
} // namespace quest
using questCharacterStatusEffect_CondtionType = quest::CharacterStatusEffect_CondtionType;
} // namespace RED4ext

// clang-format on
