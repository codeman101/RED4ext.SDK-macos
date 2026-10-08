#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IVehicleConditionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/EVehicleDoor.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/VehicleDoorState.hpp>

namespace RED4ext
{
namespace quest
{
struct VehicleDoor_ConditionType : quest::IVehicleConditionType
{
    static constexpr const char* NAME = "questVehicleDoor_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::IVehicleConditionType>];
    game::EntityReference vehicleRef; // 38
    uint8_t unk_70[0x70 - (0x38 + sizeof(vehicleRef))];
    vehicle::EVehicleDoor door; // 70
    uint8_t unk_74[0x74 - (0x70 + sizeof(door))];
    vehicle::VehicleDoorState state; // 74
#else
    game::EntityReference vehicleRef; // 38
    vehicle::EVehicleDoor door; // 70
    vehicle::VehicleDoorState state; // 74
#endif
};
RED4EXT_ASSERT_SIZE(VehicleDoor_ConditionType, 0x78);
} // namespace quest
using questVehicleDoor_ConditionType = quest::VehicleDoor_ConditionType;
} // namespace RED4ext

// clang-format on
