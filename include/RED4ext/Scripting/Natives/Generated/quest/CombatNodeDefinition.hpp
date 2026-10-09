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
struct CombatNodeDefinition : quest::ConfigurableAICommandNode
{
    static constexpr const char* NAME = "questCombatNodeDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<quest::ConfigurableAICommandNode>];
    game::EntityReference entityReference; // 48
    uint8_t unk_80[0x80 - (0x48 + sizeof(entityReference))];
    CName function; // 80
    uint8_t unk_88[0x88 - (0x80 + sizeof(function))];
    Handle<quest::AICommandParams> params; // 88
#else
    game::EntityReference entityReference; // 48
    CName function; // 80
    Handle<quest::AICommandParams> params; // 88
#endif
};
RED4EXT_ASSERT_SIZE(CombatNodeDefinition, 0x98);
} // namespace quest
using questCombatNodeDefinition = quest::CombatNodeDefinition;
} // namespace RED4ext

// clang-format on
