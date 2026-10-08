#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/DelegateTaskRef.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/TaskDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct DelegateTaskDefinition : AI::behavior::TaskDefinition
{
    static constexpr const char* NAME = "AIbehaviorDelegateTaskDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<AI::behavior::TaskDefinition>];
    AI::behavior::DelegateTaskRef onActivate; // 38
    uint8_t unk_40[0x40 - (0x38 + sizeof(onActivate))];
    AI::behavior::DelegateTaskRef onUpdate; // 40
    uint8_t unk_48[0x48 - (0x40 + sizeof(onUpdate))];
    AI::behavior::DelegateTaskRef onDeactivate; // 48
#else
    AI::behavior::DelegateTaskRef onActivate; // 38
    AI::behavior::DelegateTaskRef onUpdate; // 40
    AI::behavior::DelegateTaskRef onDeactivate; // 48
#endif
};
RED4EXT_ASSERT_SIZE(DelegateTaskDefinition, 0x50);
} // namespace AI::behavior
using AIbehaviorDelegateTaskDefinition = AI::behavior::DelegateTaskDefinition;
} // namespace RED4ext

// clang-format on
