#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/ConditionDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/SignalConditionModes.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct SignalConditionDefinition : AI::behavior::ConditionDefinition
{
    static constexpr const char* NAME = "AIbehaviorSignalConditionDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<AI::behavior::ConditionDefinition>];
    CName signalName; // 38
    uint8_t unk_40[0x40 - (0x38 + sizeof(signalName))];
    AI::behavior::SignalConditionModes mode; // 40
    uint8_t unk_44[0x44 - (0x40 + sizeof(mode))];
    bool tagSignal; // 44
#else
    CName signalName; // 38
    AI::behavior::SignalConditionModes mode; // 40
    bool tagSignal; // 44
    uint8_t unk45[0x48 - 0x45]; // 45
#endif
};
RED4EXT_ASSERT_SIZE(SignalConditionDefinition, 0x48);
} // namespace AI::behavior
using AIbehaviorSignalConditionDefinition = AI::behavior::SignalConditionDefinition;
} // namespace RED4ext

// clang-format on
