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
struct CharacterLifePath_ConditionType : quest::ICharacterConditionType
{
    static constexpr const char* NAME = "questCharacterLifePath_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_74[0x74 - ::RED4ext::Detail::DataSize<quest::ICharacterConditionType>];
    TweakDBID lifePathID; // 74
#else
    TweakDBID lifePathID; // 78
#endif
};
RED4EXT_ASSERT_SIZE(CharacterLifePath_ConditionType, 0x80);
} // namespace quest
using questCharacterLifePath_ConditionType = quest::CharacterLifePath_ConditionType;
} // namespace RED4ext

// clang-format on
