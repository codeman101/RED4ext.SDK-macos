#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/EdgeConditionAction.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/UnaryConditionDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct EdgeConditionDefinition : AI::behavior::UnaryConditionDefinition
{
    static constexpr const char* NAME = "AIbehaviorEdgeConditionDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<AI::behavior::UnaryConditionDefinition>];
    AI::behavior::EdgeConditionAction risingEdgeAction; // 48
    uint8_t unk_4C[0x4C - (0x48 + sizeof(risingEdgeAction))];
    AI::behavior::EdgeConditionAction fallingEdgeAction; // 4C
    uint8_t unk_50[0x50 - (0x4C + sizeof(fallingEdgeAction))];
    bool initialValue; // 50
#else
    AI::behavior::EdgeConditionAction risingEdgeAction; // 48
    AI::behavior::EdgeConditionAction fallingEdgeAction; // 4C
    bool initialValue; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
#endif
};
RED4EXT_ASSERT_SIZE(EdgeConditionDefinition, 0x58);
} // namespace AI::behavior
using AIbehaviorEdgeConditionDefinition = AI::behavior::EdgeConditionDefinition;
} // namespace RED4ext

// clang-format on
