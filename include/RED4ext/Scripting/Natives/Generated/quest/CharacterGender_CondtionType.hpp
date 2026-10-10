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
struct CharacterGender_CondtionType : quest::ICharacterConditionType
{
    static constexpr const char* NAME = "questCharacterGender_CondtionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_78[0x78 - ::RED4ext::Detail::DataSize<quest::ICharacterConditionType>];
    CName gender; // 78
#else
    CName gender; // 78
#endif
};
RED4EXT_ASSERT_SIZE(CharacterGender_CondtionType, 0x80);
} // namespace quest
using questCharacterGender_CondtionType = quest::CharacterGender_CondtionType;
} // namespace RED4ext

// clang-format on
