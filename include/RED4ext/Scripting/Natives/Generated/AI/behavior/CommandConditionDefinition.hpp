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
struct CommandConditionDefinition : AI::behavior::ConditionDefinition
{
    static constexpr const char* NAME = "AIbehaviorCommandConditionDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<AI::behavior::ConditionDefinition>];
    Handle<AI::ArgumentMapping> commandName; // 38
    uint8_t unk_48[0x48 - (0x38 + sizeof(commandName))];
    Handle<AI::ArgumentMapping> commandOut; // 48
    uint8_t unk_58[0x58 - (0x48 + sizeof(commandOut))];
    bool useInheritance; // 58
    uint8_t unk_59[0x59 - (0x58 + sizeof(useInheritance))];
    bool isWaiting; // 59
    uint8_t unk_5A[0x5A - (0x59 + sizeof(isWaiting))];
    bool isExecuting; // 5A
#else
    Handle<AI::ArgumentMapping> commandName; // 38
    Handle<AI::ArgumentMapping> commandOut; // 48
    bool useInheritance; // 58
    bool isWaiting; // 59
    bool isExecuting; // 5A
    uint8_t unk5B[0x60 - 0x5B]; // 5B
#endif
};
RED4EXT_ASSERT_SIZE(CommandConditionDefinition, 0x60);
} // namespace AI::behavior
using AIbehaviorCommandConditionDefinition = AI::behavior::CommandConditionDefinition;
} // namespace RED4ext

// clang-format on
