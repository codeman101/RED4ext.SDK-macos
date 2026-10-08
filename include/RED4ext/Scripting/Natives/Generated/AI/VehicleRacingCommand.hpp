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
namespace game { struct Object; }

namespace AI
{
struct VehicleRacingCommand : AI::VehicleCommand
{
    static constexpr const char* NAME = "AIVehicleRacingCommand";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_68[0x68 - ::RED4ext::Detail::DataSize<AI::VehicleCommand>];
    NodeRef splineRef; // 68
    uint8_t unk_70[0x70 - (0x68 + sizeof(splineRef))];
    float secureTimeOut; // 70
    uint8_t unk_74[0x74 - (0x70 + sizeof(secureTimeOut))];
    bool reverseSpline; // 74
    uint8_t unk_75[0x75 - (0x74 + sizeof(reverseSpline))];
    bool driveBackwards; // 75
    uint8_t unk_76[0x76 - (0x75 + sizeof(driveBackwards))];
    bool startFromClosest; // 76
    uint8_t unk_77[0x77 - (0x76 + sizeof(startFromClosest))];
    bool rubberBandingBool; // 77
    uint8_t unk_78[0x78 - (0x77 + sizeof(rubberBandingBool))];
    WeakHandle<game::Object> rubberBandingTargetRef; // 78
    uint8_t unk_88[0x88 - (0x78 + sizeof(rubberBandingTargetRef))];
    float rubberBandingTargetForwardOffset; // 88
    uint8_t unk_8C[0x8C - (0x88 + sizeof(rubberBandingTargetForwardOffset))];
    float rubberBandingMinDistance; // 8C
    uint8_t unk_90[0x90 - (0x8C + sizeof(rubberBandingMinDistance))];
    float rubberBandingMaxDistance; // 90
    uint8_t unk_94[0x94 - (0x90 + sizeof(rubberBandingMaxDistance))];
    bool rubberBandingStopAndWait; // 94
    uint8_t unk_95[0x95 - (0x94 + sizeof(rubberBandingStopAndWait))];
    bool rubberBandingTeleportToCatchUp; // 95
    uint8_t unk_96[0x96 - (0x95 + sizeof(rubberBandingTeleportToCatchUp))];
    bool rubberBandingStayInFront; // 96
#else
    NodeRef splineRef; // 68
    float secureTimeOut; // 70
    bool reverseSpline; // 74
    bool driveBackwards; // 75
    bool startFromClosest; // 76
    bool rubberBandingBool; // 77
    WeakHandle<game::Object> rubberBandingTargetRef; // 78
    float rubberBandingTargetForwardOffset; // 88
    float rubberBandingMinDistance; // 8C
    float rubberBandingMaxDistance; // 90
    bool rubberBandingStopAndWait; // 94
    bool rubberBandingTeleportToCatchUp; // 95
    bool rubberBandingStayInFront; // 96
    uint8_t unk97[0x98 - 0x97]; // 97
#endif
};
RED4EXT_ASSERT_SIZE(VehicleRacingCommand, 0x98);
} // namespace AI
using AIVehicleRacingCommand = AI::VehicleRacingCommand;
} // namespace RED4ext

// clang-format on
