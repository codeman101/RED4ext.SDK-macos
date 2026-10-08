#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_SkAnim.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_SkDurationAnim : anim::AnimNode_SkAnim
{
    static constexpr const char* NAME = "animAnimNode_SkDurationAnim";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_D0[0xD0 - ::RED4ext::Detail::DataSize<anim::AnimNode_SkAnim>];
    anim::FloatLink Duration; // D0
#else
    anim::FloatLink Duration; // D0
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_SkDurationAnim, 0xF0);
} // namespace anim
using animAnimNode_SkDurationAnim = anim::AnimNode_SkDurationAnim;
} // namespace RED4ext

// clang-format on
