#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/DisableableNodeDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/TeleportPuppetParams.hpp>

namespace RED4ext
{
namespace quest
{
struct TeleportVehicleNodeDefinition : quest::DisableableNodeDefinition
{
    static constexpr const char* NAME = "questTeleportVehicleNodeDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<quest::DisableableNodeDefinition>];
    game::EntityReference entityReference; // 48
    uint8_t unk_80[0x80 - (0x48 + sizeof(entityReference))];
    quest::TeleportPuppetParams params; // 80
    uint8_t unk_A0[0xA0 - (0x80 + sizeof(params))];
    bool resetVelocities; // A0
#else
    game::EntityReference entityReference; // 48
    quest::TeleportPuppetParams params; // 80
    bool resetVelocities; // A0
    uint8_t unkA1[0xA8 - 0xA1]; // A1
#endif
};
RED4EXT_ASSERT_SIZE(TeleportVehicleNodeDefinition, 0xA8);
} // namespace quest
using questTeleportVehicleNodeDefinition = quest::TeleportVehicleNodeDefinition;
} // namespace RED4ext

// clang-format on
