#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterManagerParameters_NodeSubType.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterManagerParameters_SetLowGravity : quest::ICharacterManagerParameters_NodeSubType
{
    static constexpr const char* NAME = "questCharacterManagerParameters_SetLowGravity";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_69[0x69 - ::RED4ext::Detail::DataSize<quest::ICharacterManagerParameters_NodeSubType>];
    bool enable; // 69
#else
    bool enable; // 70
    uint8_t unk71[0x78 - 0x71]; // 71
#endif
};
RED4EXT_ASSERT_SIZE(CharacterManagerParameters_SetLowGravity, 0x78);
} // namespace quest
using questCharacterManagerParameters_SetLowGravity = quest::CharacterManagerParameters_SetLowGravity;
} // namespace RED4ext

// clang-format on
