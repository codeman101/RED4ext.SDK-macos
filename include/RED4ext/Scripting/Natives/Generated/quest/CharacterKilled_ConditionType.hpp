#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterConditionType.hpp>

namespace RED4ext
{
namespace quest { struct ComparisonParam; }
namespace quest { struct UniversalRef; }

namespace quest
{
struct CharacterKilled_ConditionType : quest::ICharacterConditionType
{
    static constexpr const char* NAME = "questCharacterKilled_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_78[0x78 - ::RED4ext::Detail::DataSize<quest::ICharacterConditionType>];
    Handle<quest::ComparisonParam> comparisonParams; // 78
    uint8_t unk_88[0x88 - (0x78 + sizeof(comparisonParams))];
    Handle<quest::UniversalRef> source; // 88
    uint8_t unk_98[0x98 - (0x88 + sizeof(source))];
    bool killed; // 98
    uint8_t unk_99[0x99 - (0x98 + sizeof(killed))];
    bool unconscious; // 99
    uint8_t unk_9A[0x9A - (0x99 + sizeof(unconscious))];
    bool defeated; // 9A
#else
    Handle<quest::ComparisonParam> comparisonParams; // 78
    Handle<quest::UniversalRef> source; // 88
    bool killed; // 98
    bool unconscious; // 99
    bool defeated; // 9A
    uint8_t unk9B[0xA0 - 0x9B]; // 9B
#endif
};
RED4EXT_ASSERT_SIZE(CharacterKilled_ConditionType, 0xA0);
} // namespace quest
using questCharacterKilled_ConditionType = quest::CharacterKilled_ConditionType;
} // namespace RED4ext

// clang-format on
