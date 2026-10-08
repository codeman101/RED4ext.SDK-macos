#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/DangleConstraint_SimulationSingleBone.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PendulumConstraintType.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PendulumProjectionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/VectorLink.hpp>

namespace RED4ext
{
namespace anim
{
struct DangleConstraint_SimulationPendulum : anim::DangleConstraint_SimulationSingleBone
{
    static constexpr const char* NAME = "animDangleConstraint_SimulationPendulum";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_90[0x90 - ::RED4ext::Detail::DataSize<anim::DangleConstraint_SimulationSingleBone>];
    float simulationFps; // 90
    uint8_t unk_94[0x94 - (0x90 + sizeof(simulationFps))];
    anim::PendulumConstraintType constraintType; // 94
    uint8_t unk_98[0x98 - (0x94 + sizeof(constraintType))];
    float halfOfMaxApertureAngle; // 98
    uint8_t unk_9C[0x9C - (0x98 + sizeof(halfOfMaxApertureAngle))];
    Vector3 constraintOrientation; // 9C
    uint8_t unk_A8[0xA8 - (0x9C + sizeof(constraintOrientation))];
    float mass; // A8
    uint8_t unk_AC[0xAC - (0xA8 + sizeof(mass))];
    float gravityWS; // AC
    uint8_t unk_B0[0xB0 - (0xAC + sizeof(gravityWS))];
    float damping; // B0
    uint8_t unk_B4[0xB4 - (0xB0 + sizeof(damping))];
    float pullForceFactor; // B4
    uint8_t unk_B8[0xB8 - (0xB4 + sizeof(pullForceFactor))];
    Vector3 pullForceDirectionLS; // B8
    uint8_t unk_C4[0xC4 - (0xB8 + sizeof(pullForceDirectionLS))];
    Vector3 externalForceWS; // C4
    uint8_t unk_D0[0xD0 - (0xC4 + sizeof(externalForceWS))];
    anim::VectorLink externalForceWsLink; // D0
    uint8_t unk_F0[0xF0 - (0xD0 + sizeof(externalForceWsLink))];
    anim::PendulumProjectionType projectionType; // F0
    uint8_t unk_F4[0xF4 - (0xF0 + sizeof(projectionType))];
    float collisionCapsuleRadius; // F4
    uint8_t unk_F8[0xF8 - (0xF4 + sizeof(collisionCapsuleRadius))];
    float collisionCapsuleHeightExtent; // F8
    uint8_t unk_FC[0xFC - (0xF8 + sizeof(collisionCapsuleHeightExtent))];
    float cosOfHalfXAngle; // FC
    uint8_t unk_100[0x100 - (0xFC + sizeof(cosOfHalfXAngle))];
    float cosOfHalfYAngle; // 100
    uint8_t unk_104[0x104 - (0x100 + sizeof(cosOfHalfYAngle))];
    float cosOfHalfZAngle; // 104
    uint8_t unk_108[0x108 - (0x104 + sizeof(cosOfHalfZAngle))];
    float sinOfHalfXAngle; // 108
    uint8_t unk_10C[0x10C - (0x108 + sizeof(sinOfHalfXAngle))];
    float sinOfHalfYAngle; // 10C
    uint8_t unk_110[0x110 - (0x10C + sizeof(sinOfHalfYAngle))];
    float sinOfHalfZAngle; // 110
    uint8_t unk_114[0x114 - (0x110 + sizeof(sinOfHalfZAngle))];
    float cosOfHalfMaxApertureAngle; // 114
    uint8_t unk_118[0x118 - (0x114 + sizeof(cosOfHalfMaxApertureAngle))];
    float cosOfHalfOfHalfMaxApertureAngle; // 118
    uint8_t unk_11C[0x11C - (0x118 + sizeof(cosOfHalfOfHalfMaxApertureAngle))];
    float sinOfHalfOfHalfMaxApertureAngle; // 11C
    uint8_t unk_120[0x120 - (0x11C + sizeof(sinOfHalfOfHalfMaxApertureAngle))];
    float invertedMass; // 120
#else
    float simulationFps; // 90
    anim::PendulumConstraintType constraintType; // 94
    float halfOfMaxApertureAngle; // 98
    Vector3 constraintOrientation; // 9C
    float mass; // A8
    float gravityWS; // AC
    float damping; // B0
    float pullForceFactor; // B4
    Vector3 pullForceDirectionLS; // B8
    Vector3 externalForceWS; // C4
    anim::VectorLink externalForceWsLink; // D0
    anim::PendulumProjectionType projectionType; // F0
    float collisionCapsuleRadius; // F4
    float collisionCapsuleHeightExtent; // F8
    float cosOfHalfXAngle; // FC
    float cosOfHalfYAngle; // 100
    float cosOfHalfZAngle; // 104
    float sinOfHalfXAngle; // 108
    float sinOfHalfYAngle; // 10C
    float sinOfHalfZAngle; // 110
    float cosOfHalfMaxApertureAngle; // 114
    float cosOfHalfOfHalfMaxApertureAngle; // 118
    float sinOfHalfOfHalfMaxApertureAngle; // 11C
    float invertedMass; // 120
    uint8_t unk124[0x188 - 0x124]; // 124
#endif
};
RED4EXT_ASSERT_SIZE(DangleConstraint_SimulationPendulum, 0x188);
} // namespace anim
using animDangleConstraint_SimulationPendulum = anim::DangleConstraint_SimulationPendulum;
} // namespace RED4ext

// clang-format on
