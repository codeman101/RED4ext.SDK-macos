#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterQuickHacked_ConditionType : quest::ICharacterConditionType
{
    static constexpr const char* NAME = "questCharacterQuickHacked_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_71[0x71 - ::RED4ext::Detail::DataSize<quest::ICharacterConditionType>];
    bool quickHacked; // 71
#else
    bool quickHacked; // 78
    uint8_t unk79[0x80 - 0x79]; // 79
#endif
};
RED4EXT_ASSERT_SIZE(CharacterQuickHacked_ConditionType, 0x80);
} // namespace quest
using questCharacterQuickHacked_ConditionType = quest::CharacterQuickHacked_ConditionType;
} // namespace RED4ext

// clang-format on
