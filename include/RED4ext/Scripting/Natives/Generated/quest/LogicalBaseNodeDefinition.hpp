#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SignalStoppingNodeDefinition.hpp>

namespace RED4ext
{
namespace quest
{
struct LogicalBaseNodeDefinition : quest::SignalStoppingNodeDefinition
{
    static constexpr const char* NAME = "questLogicalBaseNodeDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_44[0x44 - ::RED4ext::Detail::DataSize<quest::SignalStoppingNodeDefinition>];
    uint32_t inputSocketCount; // 44
    uint8_t unk_48[0x48 - (0x44 + sizeof(inputSocketCount))];
    uint32_t outputSocketCount; // 48
#else
    uint32_t inputSocketCount; // 48
    uint32_t outputSocketCount; // 4C
#endif
};
RED4EXT_ASSERT_SIZE(LogicalBaseNodeDefinition, 0x50);
} // namespace quest
using questLogicalBaseNodeDefinition = quest::LogicalBaseNodeDefinition;
} // namespace RED4ext

// clang-format on
