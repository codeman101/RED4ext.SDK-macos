#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/TypedSignalStoppingNodeDefinition.hpp>

namespace RED4ext
{
namespace quest { struct IGameManagerNodeType; }

namespace quest
{
struct GameManagerNodeDefinition : quest::TypedSignalStoppingNodeDefinition
{
    static constexpr const char* NAME = "questGameManagerNodeDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<quest::TypedSignalStoppingNodeDefinition>];
    Handle<quest::IGameManagerNodeType> type; // 48
#else
    Handle<quest::IGameManagerNodeType> type; // 48
#endif
};
RED4EXT_ASSERT_SIZE(GameManagerNodeDefinition, 0x58);
} // namespace quest
using questGameManagerNodeDefinition = quest::GameManagerNodeDefinition;
} // namespace RED4ext

// clang-format on
