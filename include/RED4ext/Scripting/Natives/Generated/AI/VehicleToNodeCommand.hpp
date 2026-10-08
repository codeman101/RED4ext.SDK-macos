#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/VehicleCommand.hpp>

namespace RED4ext
{
namespace vehicle { struct PortalsList; }

namespace AI
{
struct VehicleToNodeCommand : AI::VehicleCommand
{
    static constexpr const char* NAME = "AIVehicleToNodeCommand";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_68[0x68 - ::RED4ext::Detail::DataSize<AI::VehicleCommand>];
    NodeRef nodeRef; // 68
    uint8_t unk_70[0x70 - (0x68 + sizeof(nodeRef))];
    bool stopAtPathEnd; // 70
    uint8_t unk_74[0x74 - (0x70 + sizeof(stopAtPathEnd))];
    float secureTimeOut; // 74
    uint8_t unk_78[0x78 - (0x74 + sizeof(secureTimeOut))];
    bool isPlayer; // 78
    uint8_t unk_79[0x79 - (0x78 + sizeof(isPlayer))];
    bool useTraffic; // 79
    uint8_t unk_7C[0x7C - (0x79 + sizeof(useTraffic))];
    float speedInTraffic; // 7C
    uint8_t unk_80[0x80 - (0x7C + sizeof(speedInTraffic))];
    bool forceGreenLights; // 80
    uint8_t unk_88[0x88 - (0x80 + sizeof(forceGreenLights))];
    Handle<vehicle::PortalsList> portals; // 88
    uint8_t unk_98[0x98 - (0x88 + sizeof(portals))];
    bool trafficTryNeighborsForStart; // 98
    uint8_t unk_99[0x99 - (0x98 + sizeof(trafficTryNeighborsForStart))];
    bool trafficTryNeighborsForEnd; // 99
    uint8_t unk_9A[0x9A - (0x99 + sizeof(trafficTryNeighborsForEnd))];
    bool ignoreNoAIDrivingLanes; // 9A
#else
    NodeRef nodeRef; // 68
    bool stopAtPathEnd; // 70
    uint8_t unk71[0x74 - 0x71]; // 71
    float secureTimeOut; // 74
    bool isPlayer; // 78
    bool useTraffic; // 79
    uint8_t unk7A[0x7C - 0x7A]; // 7A
    float speedInTraffic; // 7C
    bool forceGreenLights; // 80
    uint8_t unk81[0x88 - 0x81]; // 81
    Handle<vehicle::PortalsList> portals; // 88
    bool trafficTryNeighborsForStart; // 98
    bool trafficTryNeighborsForEnd; // 99
    bool ignoreNoAIDrivingLanes; // 9A
    uint8_t unk9B[0xA0 - 0x9B]; // 9B
#endif
};
RED4EXT_ASSERT_SIZE(VehicleToNodeCommand, 0xA0);
} // namespace AI
using AIVehicleToNodeCommand = AI::VehicleToNodeCommand;
} // namespace RED4ext

// clang-format on
