#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/ConstraintWeightMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/NamedTrackIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim { struct AnimNodeSourceChannel_WeightedVector; }
namespace anim { struct IAnimNodeSourceChannel_Vector; }

namespace anim
{
struct AnimNode_AimConstraint : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_AimConstraint";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<anim::AnimNode_OnePoseInput>];
    bool areSourceChannelsResaved; // 60
    uint8_t unk_68[0x68 - (0x60 + sizeof(areSourceChannelsResaved))];
    DynArray<Handle<anim::AnimNodeSourceChannel_WeightedVector>> targetTransforms; // 68
    uint8_t unk_78[0x78 - (0x68 + sizeof(targetTransforms))];
    anim::TransformIndex targetTransform; // 78
    uint8_t unk_90[0x90 - (0x78 + sizeof(targetTransform))];
    Handle<anim::IAnimNodeSourceChannel_Vector> upTransform; // 90
    uint8_t unk_A0[0xA0 - (0x90 + sizeof(upTransform))];
    Vector3 forwardAxisLS; // A0
    uint8_t unk_AC[0xAC - (0xA0 + sizeof(forwardAxisLS))];
    Vector3 upAxisLS; // AC
    uint8_t unk_B8[0xB8 - (0xAC + sizeof(upAxisLS))];
    anim::TransformIndex transformIndex; // B8
    uint8_t unk_D0[0xD0 - (0xB8 + sizeof(transformIndex))];
    anim::ConstraintWeightMode weightMode; // D0
    uint8_t unk_D4[0xD4 - (0xD0 + sizeof(weightMode))];
    float weight; // D4
    uint8_t unk_D8[0xD8 - (0xD4 + sizeof(weight))];
    anim::NamedTrackIndex weightFloatTrack; // D8
#else
    bool areSourceChannelsResaved; // 60
    uint8_t unk61[0x68 - 0x61]; // 61
    DynArray<Handle<anim::AnimNodeSourceChannel_WeightedVector>> targetTransforms; // 68
    anim::TransformIndex targetTransform; // 78
    Handle<anim::IAnimNodeSourceChannel_Vector> upTransform; // 90
    Vector3 forwardAxisLS; // A0
    Vector3 upAxisLS; // AC
    anim::TransformIndex transformIndex; // B8
    anim::ConstraintWeightMode weightMode; // D0
    float weight; // D4
    anim::NamedTrackIndex weightFloatTrack; // D8
    uint8_t unkF0[0x118 - 0xF0]; // F0
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_AimConstraint, 0x118);
} // namespace anim
using animAnimNode_AimConstraint = anim::AnimNode_AimConstraint;
} // namespace RED4ext

// clang-format on
