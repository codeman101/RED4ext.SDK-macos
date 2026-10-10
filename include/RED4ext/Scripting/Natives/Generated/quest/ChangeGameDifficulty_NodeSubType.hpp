#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Difficulty.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IGameManagerNonSignalStoppingNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct ChangeGameDifficulty_NodeSubType : quest::IGameManagerNonSignalStoppingNodeType
{
    static constexpr const char* NAME = "questChangeGameDifficulty_NodeSubType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<quest::IGameManagerNonSignalStoppingNodeType>];
    game::Difficulty difficulty; // 34
#else
    game::Difficulty difficulty; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
#endif
};
RED4EXT_ASSERT_SIZE(ChangeGameDifficulty_NodeSubType, 0x40);
} // namespace quest
using questChangeGameDifficulty_NodeSubType = quest::ChangeGameDifficulty_NodeSubType;
} // namespace RED4ext

// clang-format on
