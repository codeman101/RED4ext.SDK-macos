#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Matrix.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/ISystemObject.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/PhysicsJointAngularLimitPair.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/PhysicsJointDrive.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/PhysicsJointDriveVelocity.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/PhysicsJointLimitConePair.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/PhysicsJointLinearLimit.hpp>

namespace RED4ext
{
namespace physics { struct PhysicalJointPin; }

namespace physics
{
struct __declspec(align(0x10)) SystemJoint : physics::ISystemObject
{
    static constexpr const char* NAME = "physicsSystemJoint";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<physics::ISystemObject>];
    physics::PhysicsJointLinearLimit linearLimit; // 38
    uint8_t unk_60[0x60 - (0x38 + sizeof(linearLimit))];
    physics::PhysicsJointAngularLimitPair twistLimit; // 60
    uint8_t unk_88[0x88 - (0x60 + sizeof(twistLimit))];
    physics::PhysicsJointLimitConePair swingLimit; // 88
    uint8_t unk_B0[0xB0 - (0x88 + sizeof(swingLimit))];
    physics::PhysicsJointDrive driveX; // B0
    uint8_t unk_C0[0xC0 - (0xB0 + sizeof(driveX))];
    physics::PhysicsJointDrive driveY; // C0
    uint8_t unk_D0[0xD0 - (0xC0 + sizeof(driveY))];
    physics::PhysicsJointDrive driveZ; // D0
    uint8_t unk_E0[0xE0 - (0xD0 + sizeof(driveZ))];
    physics::PhysicsJointDrive driveSwing; // E0
    uint8_t unk_F0[0xF0 - (0xE0 + sizeof(driveSwing))];
    physics::PhysicsJointDrive driveTwist; // F0
    uint8_t unk_100[0x100 - (0xF0 + sizeof(driveTwist))];
    physics::PhysicsJointDrive driveSLERP; // 100
    uint8_t unk_110[0x110 - (0x100 + sizeof(driveSLERP))];
    physics::PhysicsJointDriveVelocity driveVelocity; // 110
    uint8_t unk_130[0x130 - (0x110 + sizeof(driveVelocity))];
    Matrix drivePosition; // 130
    uint8_t unk_170[0x170 - (0x130 + sizeof(drivePosition))];
    Handle<physics::PhysicalJointPin> pinA; // 170
    uint8_t unk_180[0x180 - (0x170 + sizeof(pinA))];
    Handle<physics::PhysicalJointPin> pinB; // 180
    uint8_t unk_190[0x190 - (0x180 + sizeof(pinB))];
    Matrix localToWorld; // 190
    uint8_t unk_1D0[0x1D0 - (0x190 + sizeof(localToWorld))];
    float breakingForce; // 1D0
    uint8_t unk_1D4[0x1D4 - (0x1D0 + sizeof(breakingForce))];
    float breakingTorque; // 1D4
    uint8_t unk_1D8[0x1D8 - (0x1D4 + sizeof(breakingTorque))];
    float linearTolerance; // 1D8
    uint8_t unk_1DC[0x1DC - (0x1D8 + sizeof(linearTolerance))];
    float angularTolerance; // 1DC
    uint8_t unk_1E0[0x1E0 - (0x1DC + sizeof(angularTolerance))];
    bool projectionEnabled; // 1E0
    uint8_t unk_1E1[0x1E1 - (0x1E0 + sizeof(projectionEnabled))];
    bool isBreakable; // 1E1
#else
    physics::PhysicsJointLinearLimit linearLimit; // 38
    physics::PhysicsJointAngularLimitPair twistLimit; // 60
    physics::PhysicsJointLimitConePair swingLimit; // 90
    physics::PhysicsJointDrive driveX; // C0
    physics::PhysicsJointDrive driveY; // D0
    physics::PhysicsJointDrive driveZ; // E0
    physics::PhysicsJointDrive driveSwing; // F0
    physics::PhysicsJointDrive driveTwist; // 100
    physics::PhysicsJointDrive driveSLERP; // 110
    physics::PhysicsJointDriveVelocity driveVelocity; // 120
    Matrix drivePosition; // 140
    Handle<physics::PhysicalJointPin> pinA; // 180
    Handle<physics::PhysicalJointPin> pinB; // 190
    Matrix localToWorld; // 1A0
    float breakingForce; // 1E0
    float breakingTorque; // 1E4
    float linearTolerance; // 1E8
    float angularTolerance; // 1EC
    bool projectionEnabled; // 1F0
    bool isBreakable; // 1F1
    uint8_t unk1F2[0x200 - 0x1F2]; // 1F2
#endif
};
RED4EXT_ASSERT_SIZE(SystemJoint, 0x200);
} // namespace physics
using physicsSystemJoint = physics::SystemJoint;
} // namespace RED4ext

// clang-format on
