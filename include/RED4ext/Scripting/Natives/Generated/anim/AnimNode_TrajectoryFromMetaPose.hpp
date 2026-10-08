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
struct AnimNode_TrajectoryFromMetaPose : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_TrajectoryFromMetaPose";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<anim::AnimNode_OnePoseInput>];
    anim::TransformIndex metaPoseTrajectoryLs; // 60
#else
    anim::TransformIndex metaPoseTrajectoryLs; // 60
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_TrajectoryFromMetaPose, 0x78);
} // namespace anim
using animAnimNode_TrajectoryFromMetaPose = anim::AnimNode_TrajectoryFromMetaPose;
} // namespace RED4ext

// clang-format on
