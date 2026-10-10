#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_PointConstraint_WeightedTransform.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/ConstraintWeightMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/NamedTrackIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim { struct AnimNodeSourceChannel_WeightedVector; }

namespace anim
{
struct AnimNode_PointConstraint : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_PointConstraint";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<anim::AnimNode_OnePoseInput>];
    bool areSourceChannelsResaved; // 60
    uint8_t unk_68[0x68 - (0x60 + sizeof(areSourceChannelsResaved))];
    DynArray<Handle<anim::AnimNodeSourceChannel_WeightedVector>> inputTransforms; // 68
    uint8_t unk_78[0x78 - (0x68 + sizeof(inputTransforms))];
    DynArray<anim::AnimNode_PointConstraint_WeightedTransform> inputWeightedTransforms; // 78
    uint8_t unk_88[0x88 - (0x78 + sizeof(inputWeightedTransforms))];
    DynArray<float> preprocessedWeights; // 88
    uint8_t unk_98[0x98 - (0x88 + sizeof(preprocessedWeights))];
    anim::TransformIndex transformIndex; // 98
    uint8_t unk_B0[0xB0 - (0x98 + sizeof(transformIndex))];
    anim::ConstraintWeightMode weightMode; // B0
    uint8_t unk_B4[0xB4 - (0xB0 + sizeof(weightMode))];
    float weight; // B4
    uint8_t unk_B8[0xB8 - (0xB4 + sizeof(weight))];
    anim::NamedTrackIndex weightFloatTrack; // B8
#else
    bool areSourceChannelsResaved; // 60
    uint8_t unk61[0x68 - 0x61]; // 61
    DynArray<Handle<anim::AnimNodeSourceChannel_WeightedVector>> inputTransforms; // 68
    DynArray<anim::AnimNode_PointConstraint_WeightedTransform> inputWeightedTransforms; // 78
    DynArray<float> preprocessedWeights; // 88
    anim::TransformIndex transformIndex; // 98
    anim::ConstraintWeightMode weightMode; // B0
    float weight; // B4
    anim::NamedTrackIndex weightFloatTrack; // B8
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_PointConstraint, 0xD0);
} // namespace anim
using animAnimNode_PointConstraint = anim::AnimNode_PointConstraint;
} // namespace RED4ext

// clang-format on
