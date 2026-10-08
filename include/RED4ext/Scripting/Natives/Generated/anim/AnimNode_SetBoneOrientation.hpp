#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/QuaternionLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_SetBoneOrientation : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_SetBoneOrientation";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<anim::AnimNode_OnePoseInput>];
    anim::TransformIndex bone; // 60
    uint8_t unk_78[0x78 - (0x60 + sizeof(bone))];
    anim::QuaternionLink orientationMs; // 78
#else
    anim::TransformIndex bone; // 60
    anim::QuaternionLink orientationMs; // 78
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_SetBoneOrientation, 0x98);
} // namespace anim
using animAnimNode_SetBoneOrientation = anim::AnimNode_SetBoneOrientation;
} // namespace RED4ext

// clang-format on
