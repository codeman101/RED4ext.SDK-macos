#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IAnimBreakpoint.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimBreakpointSimple : anim::IAnimBreakpoint
{
    static constexpr const char* NAME = "animAnimBreakpointSimple";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_C[0xC - ::RED4ext::Detail::DataSize<anim::IAnimBreakpoint>];
    uint32_t hitCount; // C
#else
    uint32_t hitCount; // 10
    uint8_t unk14[0x28 - 0x14]; // 14
#endif
};
RED4EXT_ASSERT_SIZE(AnimBreakpointSimple, 0x28);
} // namespace anim
using animAnimBreakpointSimple = anim::AnimBreakpointSimple;
} // namespace RED4ext

// clang-format on
