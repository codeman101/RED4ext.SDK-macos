#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/VehicleCommand.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace AI
{
struct VehicleChaseCommand : AI::VehicleCommand
{
    static constexpr const char* NAME = "AIVehicleChaseCommand";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_68[0x68 - ::RED4ext::Detail::DataSize<AI::VehicleCommand>];
    WeakHandle<game::Object> target; // 68
    uint8_t unk_78[0x78 - (0x68 + sizeof(target))];
    float distanceMin; // 78
    uint8_t unk_7C[0x7C - (0x78 + sizeof(distanceMin))];
    float distanceMax; // 7C
    uint8_t unk_80[0x80 - (0x7C + sizeof(distanceMax))];
    float forcedStartSpeed; // 80
    uint8_t unk_84[0x84 - (0x80 + sizeof(forcedStartSpeed))];
    bool aggressiveRamming; // 84
    uint8_t unk_85[0x85 - (0x84 + sizeof(aggressiveRamming))];
    bool ignoreChaseVehiclesLimit; // 85
    uint8_t unk_86[0x86 - (0x85 + sizeof(ignoreChaseVehiclesLimit))];
    bool boostDrivingStats; // 86
#else
    WeakHandle<game::Object> target; // 68
    float distanceMin; // 78
    float distanceMax; // 7C
    float forcedStartSpeed; // 80
    bool aggressiveRamming; // 84
    bool ignoreChaseVehiclesLimit; // 85
    bool boostDrivingStats; // 86
    uint8_t unk87[0x88 - 0x87]; // 87
#endif
};
RED4EXT_ASSERT_SIZE(VehicleChaseCommand, 0x88);
} // namespace AI
using AIVehicleChaseCommand = AI::VehicleChaseCommand;
} // namespace RED4ext

// clang-format on
