#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterAppearancePrefetched_ConditionType : quest::ICharacterConditionType
{
    static constexpr const char* NAME = "questCharacterAppearancePrefetched_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_78[0x78 - ::RED4ext::Detail::DataSize<quest::ICharacterConditionType>];
    CName appearanceName; // 78
#else
    CName appearanceName; // 78
    uint8_t unk80[0x88 - 0x80]; // 80
#endif
};
RED4EXT_ASSERT_SIZE(CharacterAppearancePrefetched_ConditionType, 0x88);
} // namespace quest
using questCharacterAppearancePrefetched_ConditionType = quest::CharacterAppearancePrefetched_ConditionType;
} // namespace RED4ext

// clang-format on
