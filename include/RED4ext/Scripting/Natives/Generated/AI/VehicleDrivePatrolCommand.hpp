#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/VehicleCommand.hpp>

namespace RED4ext
{
namespace AI
{
struct VehicleDrivePatrolCommand : AI::VehicleCommand
{
    static constexpr const char* NAME = "AIVehicleDrivePatrolCommand";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_64[0x64 - ::RED4ext::Detail::DataSize<AI::VehicleCommand>];
    float maxSpeed; // 64
    uint8_t unk_68[0x68 - (0x64 + sizeof(maxSpeed))];
    float minSpeed; // 68
    uint8_t unk_6C[0x6C - (0x68 + sizeof(minSpeed))];
    bool clearTrafficOnPath; // 6C
    uint8_t unk_6D[0x6D - (0x6C + sizeof(clearTrafficOnPath))];
    bool emergencyPatrol; // 6D
    uint8_t unk_70[0x70 - (0x6D + sizeof(emergencyPatrol))];
    uint32_t numPatrolLoops; // 70
    uint8_t unk_74[0x74 - (0x70 + sizeof(numPatrolLoops))];
    float forcedStartSpeed; // 74
#else
    float maxSpeed; // 68
    float minSpeed; // 6C
    bool clearTrafficOnPath; // 70
    bool emergencyPatrol; // 71
    uint8_t unk72[0x74 - 0x72]; // 72
    uint32_t numPatrolLoops; // 74
    float forcedStartSpeed; // 78
    uint8_t unk7C[0x80 - 0x7C]; // 7C
#endif
};
RED4EXT_ASSERT_SIZE(VehicleDrivePatrolCommand, 0x80);
} // namespace AI
using AIVehicleDrivePatrolCommand = AI::VehicleDrivePatrolCommand;
} // namespace RED4ext

// clang-format on
