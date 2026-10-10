#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_SkPhaseAnim.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_SkPhaseWithSpeedAnim : anim::AnimNode_SkPhaseAnim
{
    static constexpr const char* NAME = "animAnimNode_SkPhaseWithSpeedAnim";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_D8[0xD8 - ::RED4ext::Detail::DataSize<anim::AnimNode_SkPhaseAnim>];
    anim::FloatLink speedLink; // D8
#else
    anim::FloatLink speedLink; // D8
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_SkPhaseWithSpeedAnim, 0xF8);
} // namespace anim
using animAnimNode_SkPhaseWithSpeedAnim = anim::AnimNode_SkPhaseWithSpeedAnim;
} // namespace RED4ext

// clang-format on
