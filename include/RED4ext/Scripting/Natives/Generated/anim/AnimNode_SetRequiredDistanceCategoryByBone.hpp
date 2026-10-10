#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_SetRequiredDistanceCategoryByBone : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_SetRequiredDistanceCategoryByBone";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<anim::AnimNode_OnePoseInput>];
    anim::TransformIndex bone; // 60
#else
    anim::TransformIndex bone; // 60
    uint8_t unk78[0x88 - 0x78]; // 78
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_SetRequiredDistanceCategoryByBone, 0x88);
} // namespace anim
using animAnimNode_SetRequiredDistanceCategoryByBone = anim::AnimNode_SetRequiredDistanceCategoryByBone;
} // namespace RED4ext

// clang-format on
