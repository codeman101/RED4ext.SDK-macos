#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/TaskDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }
namespace AI::behavior { struct MovementPolicyTaskItemDefinition; }

namespace AI::behavior
{
struct MovementPolicyTaskDefinition : AI::behavior::TaskDefinition
{
    static constexpr const char* NAME = "AIbehaviorMovementPolicyTaskDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_31[0x31 - ::RED4ext::Detail::DataSize<AI::behavior::TaskDefinition>];
    bool useCurrentPolicy; // 31
    uint8_t unk_32[0x32 - (0x31 + sizeof(useCurrentPolicy))];
    bool waitForPolicy; // 32
    uint8_t unk_38[0x38 - (0x32 + sizeof(waitForPolicy))];
    Handle<AI::ArgumentMapping> stopWhenDestinationReached; // 38
    uint8_t unk_48[0x48 - (0x38 + sizeof(stopWhenDestinationReached))];
    DynArray<Handle<AI::behavior::MovementPolicyTaskItemDefinition>> policies; // 48
#else
    bool useCurrentPolicy; // 38
    bool waitForPolicy; // 39
    uint8_t unk3A[0x40 - 0x3A]; // 3A
    Handle<AI::ArgumentMapping> stopWhenDestinationReached; // 40
    DynArray<Handle<AI::behavior::MovementPolicyTaskItemDefinition>> policies; // 50
#endif
};
RED4EXT_ASSERT_SIZE(MovementPolicyTaskDefinition, 0x60);
} // namespace AI::behavior
using AIbehaviorMovementPolicyTaskDefinition = AI::behavior::MovementPolicyTaskDefinition;
} // namespace RED4ext

// clang-format on
