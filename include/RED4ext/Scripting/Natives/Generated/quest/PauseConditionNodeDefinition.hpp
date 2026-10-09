#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SignalStoppingNodeDefinition.hpp>

namespace RED4ext
{
namespace quest { struct IBaseCondition; }

namespace quest
{
struct PauseConditionNodeDefinition : quest::SignalStoppingNodeDefinition
{
    static constexpr const char* NAME = "questPauseConditionNodeDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<quest::SignalStoppingNodeDefinition>];
    Handle<quest::IBaseCondition> condition; // 48
#else
    Handle<quest::IBaseCondition> condition; // 48
#endif
};
RED4EXT_ASSERT_SIZE(PauseConditionNodeDefinition, 0x58);
} // namespace quest
using questPauseConditionNodeDefinition = quest::PauseConditionNodeDefinition;
} // namespace RED4ext

// clang-format on
