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
struct CharacterWorkspot_ConditionType : quest::ICharacterConditionType
{
    static constexpr const char* NAME = "questCharacterWorkspot_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_78[0x78 - ::RED4ext::Detail::DataSize<quest::ICharacterConditionType>];
    NodeRef spotRef; // 78
    uint8_t unk_80[0x80 - (0x78 + sizeof(spotRef))];
    CName animationName; // 80
    uint8_t unk_88[0x88 - (0x80 + sizeof(animationName))];
    bool waitForAnimEnd; // 88
#else
    NodeRef spotRef; // 78
    CName animationName; // 80
    bool waitForAnimEnd; // 88
    uint8_t unk89[0x90 - 0x89]; // 89
#endif
};
RED4EXT_ASSERT_SIZE(CharacterWorkspot_ConditionType, 0x90);
} // namespace quest
using questCharacterWorkspot_ConditionType = quest::CharacterWorkspot_ConditionType;
} // namespace RED4ext

// clang-format on
