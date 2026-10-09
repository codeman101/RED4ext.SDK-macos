#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterManagerParameters_NodeSubType.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterManagerParameters_SetAnimset : quest::ICharacterManagerParameters_NodeSubType
{
    static constexpr const char* NAME = "questCharacterManagerParameters_SetAnimset";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_70[0x70 - ::RED4ext::Detail::DataSize<quest::ICharacterManagerParameters_NodeSubType>];
    CName variableName; // 70
    uint8_t unk_78[0x78 - (0x70 + sizeof(variableName))];
    float value; // 78
#else
    CName variableName; // 70
    float value; // 78
    uint8_t unk7C[0x80 - 0x7C]; // 7C
#endif
};
RED4EXT_ASSERT_SIZE(CharacterManagerParameters_SetAnimset, 0x80);
} // namespace quest
using questCharacterManagerParameters_SetAnimset = quest::CharacterManagerParameters_SetAnimset;
} // namespace RED4ext

// clang-format on
