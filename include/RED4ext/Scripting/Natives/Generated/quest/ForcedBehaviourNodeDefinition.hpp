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
namespace AI::behavior { struct ParameterizedBehavior; }
namespace quest { struct ForcedBehaviorReference; }

namespace quest
{
struct ForcedBehaviourNodeDefinition : quest::SignalStoppingNodeDefinition
{
    static constexpr const char* NAME = "questForcedBehaviourNodeDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<quest::SignalStoppingNodeDefinition>];
    Handle<quest::ForcedBehaviorReference> tree; // 48
    uint8_t unk_58[0x58 - (0x48 + sizeof(tree))];
    game::EntityReference puppet; // 58
    uint8_t unk_90[0x90 - (0x58 + sizeof(puppet))];
    Handle<AI::behavior::ParameterizedBehavior> behavior; // 90
#else
    Handle<quest::ForcedBehaviorReference> tree; // 48
    game::EntityReference puppet; // 58
    Handle<AI::behavior::ParameterizedBehavior> behavior; // 90
#endif
};
RED4EXT_ASSERT_SIZE(ForcedBehaviourNodeDefinition, 0xA0);
} // namespace quest
using questForcedBehaviourNodeDefinition = quest::ForcedBehaviourNodeDefinition;
} // namespace RED4ext

// clang-format on
