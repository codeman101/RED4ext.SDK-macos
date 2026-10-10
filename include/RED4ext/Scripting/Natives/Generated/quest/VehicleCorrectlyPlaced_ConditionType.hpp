#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IVehicleConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct VehicleCorrectlyPlaced_ConditionType : quest::IVehicleConditionType
{
    static constexpr const char* NAME = "questVehicleCorrectlyPlaced_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::IVehicleConditionType>];
    game::EntityReference vehicleRef; // 38
    uint8_t unk_70[0x70 - (0x38 + sizeof(vehicleRef))];
    float timeInterval; // 70
    uint8_t unk_74[0x74 - (0x70 + sizeof(timeInterval))];
    bool checkIsUpsideDown; // 74
    uint8_t unk_75[0x75 - (0x74 + sizeof(checkIsUpsideDown))];
    bool checkIsOnTheSide; // 75
    uint8_t unk_76[0x76 - (0x75 + sizeof(checkIsOnTheSide))];
    bool checkAreAllWheelsOnGround; // 76
    uint8_t unk_77[0x77 - (0x76 + sizeof(checkAreAllWheelsOnGround))];
    bool inverted; // 77
#else
    game::EntityReference vehicleRef; // 38
    float timeInterval; // 70
    bool checkIsUpsideDown; // 74
    bool checkIsOnTheSide; // 75
    bool checkAreAllWheelsOnGround; // 76
    bool inverted; // 77
#endif
};
RED4EXT_ASSERT_SIZE(VehicleCorrectlyPlaced_ConditionType, 0x78);
} // namespace quest
using questVehicleCorrectlyPlaced_ConditionType = quest::VehicleCorrectlyPlaced_ConditionType;
} // namespace RED4ext

// clang-format on
