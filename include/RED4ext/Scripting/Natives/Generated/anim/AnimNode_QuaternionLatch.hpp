#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_QuaternionValue.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/QuaternionLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_QuaternionLatch : anim::AnimNode_QuaternionValue
{
    static constexpr const char* NAME = "animAnimNode_QuaternionLatch";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<anim::AnimNode_QuaternionValue>];
    anim::QuaternionLink input; // 48
#else
    anim::QuaternionLink input; // 48
    uint8_t unk68[0x78 - 0x68]; // 68
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_QuaternionLatch, 0x78);
} // namespace anim
using animAnimNode_QuaternionLatch = anim::AnimNode_QuaternionLatch;
} // namespace RED4ext

// clang-format on
