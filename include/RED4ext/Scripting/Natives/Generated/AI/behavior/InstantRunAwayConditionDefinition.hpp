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
struct InstantRunAwayConditionDefinition : AI::behavior::ConditionDefinition
{
    static constexpr const char* NAME = "AIbehaviorInstantRunAwayConditionDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<AI::behavior::ConditionDefinition>];
    Handle<AI::ArgumentMapping> destination; // 38
    uint8_t unk_48[0x48 - (0x38 + sizeof(destination))];
    Handle<AI::ArgumentMapping> runOnNavmesh; // 48
#else
    Handle<AI::ArgumentMapping> destination; // 38
    Handle<AI::ArgumentMapping> runOnNavmesh; // 48
#endif
};
RED4EXT_ASSERT_SIZE(InstantRunAwayConditionDefinition, 0x58);
} // namespace AI::behavior
using AIbehaviorInstantRunAwayConditionDefinition = AI::behavior::InstantRunAwayConditionDefinition;
} // namespace RED4ext

// clang-format on
