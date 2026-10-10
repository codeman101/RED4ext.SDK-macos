#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/VehicleCommand.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace AI
{
struct VehicleDriveToPointAutonomousCommand : AI::VehicleCommand
{
    static constexpr const char* NAME = "AIVehicleDriveToPointAutonomousCommand";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_64[0x64 - ::RED4ext::Detail::DataSize<AI::VehicleCommand>];
    Vector3 targetPosition; // 64
    uint8_t unk_70[0x70 - (0x64 + sizeof(targetPosition))];
    float maxSpeed; // 70
    uint8_t unk_74[0x74 - (0x70 + sizeof(maxSpeed))];
    float minSpeed; // 74
    uint8_t unk_78[0x78 - (0x74 + sizeof(minSpeed))];
    bool clearTrafficOnPath; // 78
    uint8_t unk_7C[0x7C - (0x78 + sizeof(clearTrafficOnPath))];
    float minimumDistanceToTarget; // 7C
    uint8_t unk_80[0x80 - (0x7C + sizeof(minimumDistanceToTarget))];
    float forcedStartSpeed; // 80
    uint8_t unk_84[0x84 - (0x80 + sizeof(forcedStartSpeed))];
    bool driveDownTheRoadIndefinitely; // 84
#else
    Vector3 targetPosition; // 68
    float maxSpeed; // 74
    float minSpeed; // 78
    bool clearTrafficOnPath; // 7C
    uint8_t unk7D[0x80 - 0x7D]; // 7D
    float minimumDistanceToTarget; // 80
    float forcedStartSpeed; // 84
    bool driveDownTheRoadIndefinitely; // 88
    uint8_t unk89[0x90 - 0x89]; // 89
#endif
};
RED4EXT_ASSERT_SIZE(VehicleDriveToPointAutonomousCommand, 0x90);
} // namespace AI
using AIVehicleDriveToPointAutonomousCommand = AI::VehicleDriveToPointAutonomousCommand;
} // namespace RED4ext

// clang-format on
