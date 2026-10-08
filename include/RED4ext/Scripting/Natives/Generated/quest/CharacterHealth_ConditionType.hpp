#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/EComparisonType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterHealth_ConditionType : quest::ICharacterConditionType
{
    static constexpr const char* NAME = "questCharacterHealth_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_74[0x74 - ::RED4ext::Detail::DataSize<quest::ICharacterConditionType>];
    float percent; // 74
    uint8_t unk_78[0x78 - (0x74 + sizeof(percent))];
    EComparisonType comparisonType; // 78
#else
    float percent; // 78
    EComparisonType comparisonType; // 7C
#endif
};
RED4EXT_ASSERT_SIZE(CharacterHealth_ConditionType, 0x80);
} // namespace quest
using questCharacterHealth_ConditionType = quest::CharacterHealth_ConditionType;
} // namespace RED4ext

// clang-format on
