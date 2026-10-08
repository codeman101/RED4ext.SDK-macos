#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SignalStoppingNodeDefinition.hpp>

namespace RED4ext
{
namespace quest
{
struct MinigameNodeDefinition : quest::SignalStoppingNodeDefinition
{
    static constexpr const char* NAME = "questMinigameNodeDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_42[0x42 - ::RED4ext::Detail::DataSize<quest::SignalStoppingNodeDefinition>];
    bool start; // 42
    uint8_t unk_43[0x43 - (0x42 + sizeof(start))];
    bool skipSummaryScreen; // 43
    uint8_t unk_48[0x48 - (0x43 + sizeof(skipSummaryScreen))];
    game::EntityReference networkRef; // 48
#else
    bool start; // 48
    bool skipSummaryScreen; // 49
    uint8_t unk4A[0x50 - 0x4A]; // 4A
    game::EntityReference networkRef; // 50
#endif
};
RED4EXT_ASSERT_SIZE(MinigameNodeDefinition, 0x88);
} // namespace quest
using questMinigameNodeDefinition = quest::MinigameNodeDefinition;
} // namespace RED4ext

// clang-format on
