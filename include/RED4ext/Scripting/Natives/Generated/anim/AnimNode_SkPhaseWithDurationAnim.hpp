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
struct AnimNode_SkPhaseWithDurationAnim : anim::AnimNode_SkPhaseAnim
{
    static constexpr const char* NAME = "animAnimNode_SkPhaseWithDurationAnim";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_D8[0xD8 - ::RED4ext::Detail::DataSize<anim::AnimNode_SkPhaseAnim>];
    anim::FloatLink durationLink; // D8
#else
    anim::FloatLink durationLink; // D8
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_SkPhaseWithDurationAnim, 0xF8);
} // namespace anim
using animAnimNode_SkPhaseWithDurationAnim = anim::AnimNode_SkPhaseWithDurationAnim;
} // namespace RED4ext

// clang-format on
