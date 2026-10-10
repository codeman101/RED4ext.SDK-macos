#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace vehicle
{
struct QuestNodeSetVehicleRemoteControlled : red::Event
{
    static constexpr const char* NAME = "vehicleQuestNodeSetVehicleRemoteControlled";
    static constexpr const char* ALIAS = "VehicleQuestNodeSetVehicleRemoteControlled";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    bool enable; // 40
    uint8_t unk_41[0x41 - (0x40 + sizeof(enable))];
    bool shouldUnseatPassengers; // 41
    uint8_t unk_42[0x42 - (0x41 + sizeof(shouldUnseatPassengers))];
    bool shouldModifyInteractionState; // 42
#else
    bool enable; // 40
    bool shouldUnseatPassengers; // 41
    bool shouldModifyInteractionState; // 42
    uint8_t unk43[0x48 - 0x43]; // 43
#endif
};
RED4EXT_ASSERT_SIZE(QuestNodeSetVehicleRemoteControlled, 0x48);
} // namespace vehicle
using vehicleQuestNodeSetVehicleRemoteControlled = vehicle::QuestNodeSetVehicleRemoteControlled;
using VehicleQuestNodeSetVehicleRemoteControlled = vehicle::QuestNodeSetVehicleRemoteControlled;
} // namespace RED4ext

// clang-format on
