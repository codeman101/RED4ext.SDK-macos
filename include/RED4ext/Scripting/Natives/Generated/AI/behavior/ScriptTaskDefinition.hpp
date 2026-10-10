#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/TaskDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior::task { struct Script; }

namespace AI::behavior
{
struct ScriptTaskDefinition : AI::behavior::TaskDefinition
{
    static constexpr const char* NAME = "AIbehaviorScriptTaskDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<AI::behavior::TaskDefinition>];
    Handle<AI::behavior::task::Script> script; // 38
    uint8_t unk_48[0x48 - (0x38 + sizeof(script))];
    bool disableLazyInitialization; // 48
#else
    Handle<AI::behavior::task::Script> script; // 38
    bool disableLazyInitialization; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
#endif
};
RED4EXT_ASSERT_SIZE(ScriptTaskDefinition, 0x50);
} // namespace AI::behavior
using AIbehaviorScriptTaskDefinition = AI::behavior::ScriptTaskDefinition;
} // namespace RED4ext

// clang-format on
