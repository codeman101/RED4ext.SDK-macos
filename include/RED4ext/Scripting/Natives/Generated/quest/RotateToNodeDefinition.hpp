#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SignalStoppingNodeDefinition.hpp>

namespace RED4ext
{
namespace quest { struct RotateToParams; }

namespace quest
{
struct RotateToNodeDefinition : quest::SignalStoppingNodeDefinition
{
    static constexpr const char* NAME = "questRotateToNodeDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<quest::SignalStoppingNodeDefinition>];
    game::EntityReference entityReference; // 48
    uint8_t unk_80[0x80 - (0x48 + sizeof(entityReference))];
    Handle<quest::RotateToParams> params; // 80
#else
    game::EntityReference entityReference; // 48
    Handle<quest::RotateToParams> params; // 80
#endif
};
RED4EXT_ASSERT_SIZE(RotateToNodeDefinition, 0x90);
} // namespace quest
using questRotateToNodeDefinition = quest::RotateToNodeDefinition;
} // namespace RED4ext

// clang-format on
