#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/ConditionDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct InstantJoinTrafficConditionDefinition : AI::behavior::ConditionDefinition
{
    static constexpr const char* NAME = "AIbehaviorInstantJoinTrafficConditionDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<AI::behavior::ConditionDefinition>];
    Handle<AI::ArgumentMapping> joinTrafficSettings; // 38
    uint8_t unk_48[0x48 - (0x38 + sizeof(joinTrafficSettings))];
    Handle<AI::ArgumentMapping> closestPointOnPath; // 48
    uint8_t unk_58[0x58 - (0x48 + sizeof(closestPointOnPath))];
    Handle<AI::ArgumentMapping> pathDirection; // 58
    uint8_t unk_68[0x68 - (0x58 + sizeof(pathDirection))];
    Handle<AI::ArgumentMapping> runOnTraffic; // 68
#else
    Handle<AI::ArgumentMapping> joinTrafficSettings; // 38
    Handle<AI::ArgumentMapping> closestPointOnPath; // 48
    Handle<AI::ArgumentMapping> pathDirection; // 58
    Handle<AI::ArgumentMapping> runOnTraffic; // 68
#endif
};
RED4EXT_ASSERT_SIZE(InstantJoinTrafficConditionDefinition, 0x78);
} // namespace AI::behavior
using AIbehaviorInstantJoinTrafficConditionDefinition = AI::behavior::InstantJoinTrafficConditionDefinition;
} // namespace RED4ext

// clang-format on
