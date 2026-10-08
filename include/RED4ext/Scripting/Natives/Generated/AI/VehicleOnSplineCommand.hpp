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
namespace vehicle { struct AudioCurvesParam; }

namespace AI
{
struct VehicleOnSplineCommand : AI::VehicleCommand
{
    static constexpr const char* NAME = "AIVehicleOnSplineCommand";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_68[0x68 - ::RED4ext::Detail::DataSize<AI::VehicleCommand>];
    NodeRef splineRef; // 68
    uint8_t unk_70[0x70 - (0x68 + sizeof(splineRef))];
    float secureTimeOut; // 70
    uint8_t unk_74[0x74 - (0x70 + sizeof(secureTimeOut))];
    bool driveBackwards; // 74
    uint8_t unk_75[0x75 - (0x74 + sizeof(driveBackwards))];
    bool reverseSpline; // 75
    uint8_t unk_76[0x76 - (0x75 + sizeof(reverseSpline))];
    bool startFromClosest; // 76
    uint8_t unk_78[0x78 - (0x76 + sizeof(startFromClosest))];
    float forcedStartSpeed; // 78
    uint8_t unk_7C[0x7C - (0x78 + sizeof(forcedStartSpeed))];
    bool stopAtPathEnd; // 7C
    uint8_t unk_7D[0x7D - (0x7C + sizeof(stopAtPathEnd))];
    bool keepDistanceBool; // 7D
    uint8_t unk_80[0x80 - (0x7D + sizeof(keepDistanceBool))];
    WeakHandle<game::Object> keepDistanceCompanion; // 80
    uint8_t unk_90[0x90 - (0x80 + sizeof(keepDistanceCompanion))];
    float keepDistanceDistance; // 90
    uint8_t unk_94[0x94 - (0x90 + sizeof(keepDistanceDistance))];
    bool rubberBandingBool; // 94
    uint8_t unk_98[0x98 - (0x94 + sizeof(rubberBandingBool))];
    WeakHandle<game::Object> rubberBandingTargetRef; // 98
    uint8_t unk_A8[0xA8 - (0x98 + sizeof(rubberBandingTargetRef))];
    float rubberBandingTargetForwardOffset; // A8
    uint8_t unk_AC[0xAC - (0xA8 + sizeof(rubberBandingTargetForwardOffset))];
    float rubberBandingMinDistance; // AC
    uint8_t unk_B0[0xB0 - (0xAC + sizeof(rubberBandingMinDistance))];
    float rubberBandingMaxDistance; // B0
    uint8_t unk_B4[0xB4 - (0xB0 + sizeof(rubberBandingMaxDistance))];
    bool rubberBandingStopAndWait; // B4
    uint8_t unk_B5[0xB5 - (0xB4 + sizeof(rubberBandingStopAndWait))];
    bool rubberBandingTeleportToCatchUp; // B5
    uint8_t unk_B6[0xB6 - (0xB5 + sizeof(rubberBandingTeleportToCatchUp))];
    bool rubberBandingStayInFront; // B6
    uint8_t unk_B8[0xB8 - (0xB6 + sizeof(rubberBandingStayInFront))];
    WeakHandle<vehicle::AudioCurvesParam> audioCurvesParam; // B8
#else
    NodeRef splineRef; // 68
    float secureTimeOut; // 70
    bool driveBackwards; // 74
    bool reverseSpline; // 75
    bool startFromClosest; // 76
    uint8_t unk77[0x78 - 0x77]; // 77
    float forcedStartSpeed; // 78
    bool stopAtPathEnd; // 7C
    bool keepDistanceBool; // 7D
    uint8_t unk7E[0x80 - 0x7E]; // 7E
    WeakHandle<game::Object> keepDistanceCompanion; // 80
    float keepDistanceDistance; // 90
    bool rubberBandingBool; // 94
    uint8_t unk95[0x98 - 0x95]; // 95
    WeakHandle<game::Object> rubberBandingTargetRef; // 98
    float rubberBandingTargetForwardOffset; // A8
    float rubberBandingMinDistance; // AC
    float rubberBandingMaxDistance; // B0
    bool rubberBandingStopAndWait; // B4
    bool rubberBandingTeleportToCatchUp; // B5
    bool rubberBandingStayInFront; // B6
    uint8_t unkB7[0xB8 - 0xB7]; // B7
    WeakHandle<vehicle::AudioCurvesParam> audioCurvesParam; // B8
#endif
};
RED4EXT_ASSERT_SIZE(VehicleOnSplineCommand, 0xC8);
} // namespace AI
using AIVehicleOnSplineCommand = AI::VehicleOnSplineCommand;
} // namespace RED4ext

// clang-format on
