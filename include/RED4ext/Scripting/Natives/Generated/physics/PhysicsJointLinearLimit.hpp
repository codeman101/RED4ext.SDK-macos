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
struct PhysicsJointLinearLimit : physics::PhysicsJointLimitBase
{
    static constexpr const char* NAME = "physicsPhysicsJointLinearLimit";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_1C[0x1C - ::RED4ext::Detail::DataSize<physics::PhysicsJointLimitBase>];
    float value; // 1C
    uint8_t unk_20[0x20 - (0x1C + sizeof(value))];
    physics::PhysicsJointMotion x; // 20
    uint8_t unk_21[0x21 - (0x20 + sizeof(x))];
    physics::PhysicsJointMotion y; // 21
    uint8_t unk_22[0x22 - (0x21 + sizeof(y))];
    physics::PhysicsJointMotion z; // 22
#else
    float value; // 20
    physics::PhysicsJointMotion x; // 24
    physics::PhysicsJointMotion y; // 25
    physics::PhysicsJointMotion z; // 26
    uint8_t unk27[0x28 - 0x27]; // 27
#endif
};
RED4EXT_ASSERT_SIZE(PhysicsJointLinearLimit, 0x28);
} // namespace physics
using physicsPhysicsJointLinearLimit = physics::PhysicsJointLinearLimit;
} // namespace RED4ext

// clang-format on
