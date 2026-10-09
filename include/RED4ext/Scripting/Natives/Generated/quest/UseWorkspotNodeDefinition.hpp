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
namespace quest { struct UseWorkspotParamsV1; }

namespace quest
{
struct UseWorkspotNodeDefinition : quest::AICommandNodeBase
{
    static constexpr const char* NAME = "questUseWorkspotNodeDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<quest::AICommandNodeBase>];
    game::EntityReference entityReference; // 48
    uint8_t unk_80[0x80 - (0x48 + sizeof(entityReference))];
    Handle<quest::UseWorkspotParamsV1> paramsV1; // 80
#else
    game::EntityReference entityReference; // 48
    Handle<quest::UseWorkspotParamsV1> paramsV1; // 80
#endif
};
RED4EXT_ASSERT_SIZE(UseWorkspotNodeDefinition, 0x90);
} // namespace quest
using questUseWorkspotNodeDefinition = quest::UseWorkspotNodeDefinition;
} // namespace RED4ext

// clang-format on
