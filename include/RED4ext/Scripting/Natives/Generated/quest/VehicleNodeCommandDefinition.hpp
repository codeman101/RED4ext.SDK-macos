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
namespace quest { struct VehicleCommandParams; }

namespace quest
{
struct VehicleNodeCommandDefinition : quest::AICommandNodeBase
{
    static constexpr const char* NAME = "questVehicleNodeCommandDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<quest::AICommandNodeBase>];
    game::EntityReference vehicle; // 48
    uint8_t unk_80[0x80 - (0x48 + sizeof(vehicle))];
    Handle<quest::VehicleCommandParams> commandParams; // 80
#else
    game::EntityReference vehicle; // 48
    Handle<quest::VehicleCommandParams> commandParams; // 80
#endif
};
RED4EXT_ASSERT_SIZE(VehicleNodeCommandDefinition, 0x90);
} // namespace quest
using questVehicleNodeCommandDefinition = quest::VehicleNodeCommandDefinition;
} // namespace RED4ext

// clang-format on
