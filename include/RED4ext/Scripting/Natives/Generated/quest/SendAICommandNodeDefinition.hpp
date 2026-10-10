#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/AICommandNodeBase.hpp>

namespace RED4ext
{
namespace quest { struct AICommandParams; }

namespace quest
{
struct SendAICommandNodeDefinition : quest::AICommandNodeBase
{
    static constexpr const char* NAME = "questSendAICommandNodeDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<quest::AICommandNodeBase>];
    game::EntityReference puppet; // 48
    uint8_t unk_80[0x80 - (0x48 + sizeof(puppet))];
    Handle<quest::AICommandParams> commandParams; // 80
#else
    game::EntityReference puppet; // 48
    Handle<quest::AICommandParams> commandParams; // 80
#endif
};
RED4EXT_ASSERT_SIZE(SendAICommandNodeDefinition, 0x90);
} // namespace quest
using questSendAICommandNodeDefinition = quest::SendAICommandNodeDefinition;
} // namespace RED4ext

// clang-format on
