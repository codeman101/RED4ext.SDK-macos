#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/DisableableNodeDefinition.hpp>

namespace RED4ext
{
namespace quest { struct PuppetsEffector; }

namespace quest
{
struct PuppeteerNodeDefinition : quest::DisableableNodeDefinition
{
    static constexpr const char* NAME = "questPuppeteerNodeDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<quest::DisableableNodeDefinition>];
    Handle<quest::PuppetsEffector> effector; // 48
    uint8_t unk_58[0x58 - (0x48 + sizeof(effector))];
    game::EntityReference reference; // 58
#else
    Handle<quest::PuppetsEffector> effector; // 48
    game::EntityReference reference; // 58
#endif
};
RED4EXT_ASSERT_SIZE(PuppeteerNodeDefinition, 0x90);
} // namespace quest
using questPuppeteerNodeDefinition = quest::PuppeteerNodeDefinition;
} // namespace RED4ext

// clang-format on
