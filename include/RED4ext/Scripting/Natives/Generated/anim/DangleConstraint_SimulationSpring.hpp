#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/DangleConstraint_SimulationSingleBone.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/SpringProjectionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/VectorLink.hpp>

namespace RED4ext
{
namespace anim
{
struct DangleConstraint_SimulationSpring : anim::DangleConstraint_SimulationSingleBone
{
    static constexpr const char* NAME = "animDangleConstraint_SimulationSpring";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_90[0x90 - ::RED4ext::Detail::DataSize<anim::DangleConstraint_SimulationSingleBone>];
    float simulationFps; // 90
    uint8_t unk_94[0x94 - (0x90 + sizeof(simulationFps))];
    float constraintSphereRadius; // 94
    uint8_t unk_98[0x98 - (0x94 + sizeof(constraintSphereRadius))];
    float constraintScale1; // 98
    uint8_t unk_9C[0x9C - (0x98 + sizeof(constraintScale1))];
    float constraintScale2; // 9C
    uint8_t unk_A0[0xA0 - (0x9C + sizeof(constraintScale2))];
    Vector2 constraintOrientation; // A0
    uint8_t unk_A8[0xA8 - (0xA0 + sizeof(constraintOrientation))];
    float mass; // A8
    uint8_t unk_AC[0xAC - (0xA8 + sizeof(mass))];
    float gravityWS; // AC
    uint8_t unk_B0[0xB0 - (0xAC + sizeof(gravityWS))];
    float damping; // B0
    uint8_t unk_B4[0xB4 - (0xB0 + sizeof(damping))];
    float pullForceFactor; // B4
    uint8_t unk_B8[0xB8 - (0xB4 + sizeof(pullForceFactor))];
    Vector3 pullForceOriginLS; // B8
    uint8_t unk_C4[0xC4 - (0xB8 + sizeof(pullForceOriginLS))];
    Vector3 externalForceWS; // C4
    uint8_t unk_D0[0xD0 - (0xC4 + sizeof(externalForceWS))];
    anim::VectorLink externalForceWsLink; // D0
    uint8_t unk_F0[0xF0 - (0xD0 + sizeof(externalForceWsLink))];
    anim::SpringProjectionType projectionType; // F0
    uint8_t unk_F4[0xF4 - (0xF0 + sizeof(projectionType))];
    float collisionSphereRadius; // F4
    uint8_t unk_F8[0xF8 - (0xF4 + sizeof(collisionSphereRadius))];
    float cosOfHalfXAngle; // F8
    uint8_t unk_FC[0xFC - (0xF8 + sizeof(cosOfHalfXAngle))];
    float cosOfHalfYAngle; // FC
    uint8_t unk_100[0x100 - (0xFC + sizeof(cosOfHalfYAngle))];
    float sinOfHalfXAngle; // 100
    uint8_t unk_104[0x104 - (0x100 + sizeof(sinOfHalfXAngle))];
    float sinOfHalfYAngle; // 104
    uint8_t unk_108[0x108 - (0x104 + sizeof(sinOfHalfYAngle))];
    float invertedMass; // 108
#else
    float simulationFps; // 90
    float constraintSphereRadius; // 94
    float constraintScale1; // 98
    float constraintScale2; // 9C
    Vector2 constraintOrientation; // A0
    float mass; // A8
    float gravityWS; // AC
    float damping; // B0
    float pullForceFactor; // B4
    Vector3 pullForceOriginLS; // B8
    Vector3 externalForceWS; // C4
    anim::VectorLink externalForceWsLink; // D0
    anim::SpringProjectionType projectionType; // F0
    float collisionSphereRadius; // F4
    float cosOfHalfXAngle; // F8
    float cosOfHalfYAngle; // FC
    float sinOfHalfXAngle; // 100
    float sinOfHalfYAngle; // 104
    float invertedMass; // 108
    uint8_t unk10C[0x170 - 0x10C]; // 10C
#endif
};
RED4EXT_ASSERT_SIZE(DangleConstraint_SimulationSpring, 0x170);
} // namespace anim
using animDangleConstraint_SimulationSpring = anim::DangleConstraint_SimulationSpring;
} // namespace RED4ext

// clang-format on
