#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IVehicleConditionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/EVehicleSpeedConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct VehicleSpeed_ConditionType : quest::IVehicleConditionType
{
    static constexpr const char* NAME = "questVehicleSpeed_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::IVehicleConditionType>];
    game::EntityReference vehicleRef; // 38
    uint8_t unk_70[0x70 - (0x38 + sizeof(vehicleRef))];
    vehicle::EVehicleSpeedConditionType comparisonType; // 70
    uint8_t unk_74[0x74 - (0x70 + sizeof(comparisonType))];
    float speed; // 74
#else
    game::EntityReference vehicleRef; // 38
    vehicle::EVehicleSpeedConditionType comparisonType; // 70
    float speed; // 74
#endif
};
RED4EXT_ASSERT_SIZE(VehicleSpeed_ConditionType, 0x78);
} // namespace quest
using questVehicleSpeed_ConditionType = quest::VehicleSpeed_ConditionType;
} // namespace RED4ext

// clang-format on
