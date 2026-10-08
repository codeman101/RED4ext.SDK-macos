#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterManagerParameters_NodeSubType.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterManagerParameters_SetLifePath : quest::ICharacterManagerParameters_NodeSubType
{
    static constexpr const char* NAME = "questCharacterManagerParameters_SetLifePath";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_6C[0x6C - ::RED4ext::Detail::DataSize<quest::ICharacterManagerParameters_NodeSubType>];
    TweakDBID lifePathID; // 6C
#else
    TweakDBID lifePathID; // 70
#endif
};
RED4EXT_ASSERT_SIZE(CharacterManagerParameters_SetLifePath, 0x78);
} // namespace quest
using questCharacterManagerParameters_SetLifePath = quest::CharacterManagerParameters_SetLifePath;
} // namespace RED4ext

// clang-format on
