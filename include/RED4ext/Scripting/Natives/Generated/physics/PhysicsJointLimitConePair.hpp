#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/PhysicsJointLimitBase.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/PhysicsJointMotion.hpp>

namespace RED4ext
{
namespace physics
{
struct PhysicsJointLimitConePair : physics::PhysicsJointLimitBase
{
    static constexpr const char* NAME = "physicsPhysicsJointLimitConePair";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_1C[0x1C - ::RED4ext::Detail::DataSize<physics::PhysicsJointLimitBase>];
    float yAngle; // 1C
    uint8_t unk_20[0x20 - (0x1C + sizeof(yAngle))];
    float zAngle; // 20
    uint8_t unk_24[0x24 - (0x20 + sizeof(zAngle))];
    physics::PhysicsJointMotion swingY; // 24
    uint8_t unk_25[0x25 - (0x24 + sizeof(swingY))];
    physics::PhysicsJointMotion swingZ; // 25
#else
    float yAngle; // 20
    float zAngle; // 24
    physics::PhysicsJointMotion swingY; // 28
    physics::PhysicsJointMotion swingZ; // 29
    uint8_t unk2A[0x30 - 0x2A]; // 2A
#endif
};
RED4EXT_ASSERT_SIZE(PhysicsJointLimitConePair, 0x30);
} // namespace physics
using physicsPhysicsJointLimitConePair = physics::PhysicsJointLimitConePair;
} // namespace RED4ext

// clang-format on
