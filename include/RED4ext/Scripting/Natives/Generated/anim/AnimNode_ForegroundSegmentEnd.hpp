#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_ForegroundSegmentEnd : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_ForegroundSegmentEnd";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<anim::AnimNode_OnePoseInput>];
    bool isAlwaysEnabledForHighEndHardware; // 60
#else
    bool isAlwaysEnabledForHighEndHardware; // 60
    uint8_t unk61[0x80 - 0x61]; // 61
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_ForegroundSegmentEnd, 0x80);
} // namespace anim
using animAnimNode_ForegroundSegmentEnd = anim::AnimNode_ForegroundSegmentEnd;
} // namespace RED4ext

// clang-format on
