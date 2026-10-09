#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ConfigurableAICommandNode.hpp>

namespace RED4ext
{
namespace quest { struct AICommandParams; }

namespace quest
{
struct MovePuppetNodeDefinition : quest::ConfigurableAICommandNode
{
    static constexpr const char* NAME = "questMovePuppetNodeDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<quest::ConfigurableAICommandNode>];
    game::EntityReference entityReference; // 48
    uint8_t unk_80[0x80 - (0x48 + sizeof(entityReference))];
    CName moveType; // 80
    uint8_t unk_88[0x88 - (0x80 + sizeof(moveType))];
    Handle<quest::AICommandParams> nodeParams; // 88
#else
    game::EntityReference entityReference; // 48
    CName moveType; // 80
    Handle<quest::AICommandParams> nodeParams; // 88
#endif
};
RED4EXT_ASSERT_SIZE(MovePuppetNodeDefinition, 0x98);
} // namespace quest
using questMovePuppetNodeDefinition = quest::MovePuppetNodeDefinition;
} // namespace RED4ext

// clang-format on
