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
struct VehicleFollowCommand : AI::VehicleCommand
{
    static constexpr const char* NAME = "AIVehicleFollowCommand";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_68[0x68 - ::RED4ext::Detail::DataSize<AI::VehicleCommand>];
    WeakHandle<game::Object> target; // 68
    uint8_t unk_78[0x78 - (0x68 + sizeof(target))];
    float secureTimeOut; // 78
    uint8_t unk_7C[0x7C - (0x78 + sizeof(secureTimeOut))];
    float distanceMin; // 7C
    uint8_t unk_80[0x80 - (0x7C + sizeof(distanceMin))];
    float distanceMax; // 80
    uint8_t unk_84[0x84 - (0x80 + sizeof(distanceMax))];
    bool stopWhenTargetReached; // 84
    uint8_t unk_85[0x85 - (0x84 + sizeof(stopWhenTargetReached))];
    bool useTraffic; // 85
    uint8_t unk_86[0x86 - (0x85 + sizeof(useTraffic))];
    bool trafficTryNeighborsForStart; // 86
    uint8_t unk_87[0x87 - (0x86 + sizeof(trafficTryNeighborsForStart))];
    bool trafficTryNeighborsForEnd; // 87
#else
    WeakHandle<game::Object> target; // 68
    float secureTimeOut; // 78
    float distanceMin; // 7C
    float distanceMax; // 80
    bool stopWhenTargetReached; // 84
    bool useTraffic; // 85
    bool trafficTryNeighborsForStart; // 86
    bool trafficTryNeighborsForEnd; // 87
#endif
};
RED4EXT_ASSERT_SIZE(VehicleFollowCommand, 0x88);
} // namespace AI
using AIVehicleFollowCommand = AI::VehicleFollowCommand;
} // namespace RED4ext

// clang-format on
