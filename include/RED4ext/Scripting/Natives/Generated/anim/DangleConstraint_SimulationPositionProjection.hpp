#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/DangleConstraint_SimulationSingleBone.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PositionProjectionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct DangleConstraint_SimulationPositionProjection : anim::DangleConstraint_SimulationSingleBone
{
    static constexpr const char* NAME = "animDangleConstraint_SimulationPositionProjection";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_90[0x90 - ::RED4ext::Detail::DataSize<anim::DangleConstraint_SimulationSingleBone>];
    anim::PositionProjectionType projectionType; // 90
    uint8_t unk_94[0x94 - (0x90 + sizeof(projectionType))];
    float collisionCapsuleRadius; // 94
    uint8_t unk_98[0x98 - (0x94 + sizeof(collisionCapsuleRadius))];
    float collisionCapsuleHeightExtent; // 98
    uint8_t unk_9C[0x9C - (0x98 + sizeof(collisionCapsuleHeightExtent))];
    Vector3 collisionCapsuleAxisLS; // 9C
    uint8_t unk_A8[0xA8 - (0x9C + sizeof(collisionCapsuleAxisLS))];
    anim::TransformIndex directionReferenceBone; // A8
#else
    anim::PositionProjectionType projectionType; // 90
    float collisionCapsuleRadius; // 94
    float collisionCapsuleHeightExtent; // 98
    Vector3 collisionCapsuleAxisLS; // 9C
    anim::TransformIndex directionReferenceBone; // A8
    uint8_t unkC0[0xD0 - 0xC0]; // C0
#endif
};
RED4EXT_ASSERT_SIZE(DangleConstraint_SimulationPositionProjection, 0xD0);
} // namespace anim
using animDangleConstraint_SimulationPositionProjection = anim::DangleConstraint_SimulationPositionProjection;
} // namespace RED4ext

// clang-format on
