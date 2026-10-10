#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SignalStoppingNodeDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/UnequipItemParams.hpp>

namespace RED4ext
{
namespace quest
{
struct UnequipItemNodeDefinition : quest::SignalStoppingNodeDefinition
{
    static constexpr const char* NAME = "questUnequipItemNodeDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<quest::SignalStoppingNodeDefinition>];
    game::EntityReference entityReference; // 48
    uint8_t unk_80[0x80 - (0x48 + sizeof(entityReference))];
    quest::UnequipItemParams params; // 80
#else
    game::EntityReference entityReference; // 48
    quest::UnequipItemParams params; // 80
    uint8_t unk8C[0x90 - 0x8C]; // 8C
#endif
};
RED4EXT_ASSERT_SIZE(UnequipItemNodeDefinition, 0x90);
} // namespace quest
using questUnequipItemNodeDefinition = quest::UnequipItemNodeDefinition;
} // namespace RED4ext

// clang-format on
