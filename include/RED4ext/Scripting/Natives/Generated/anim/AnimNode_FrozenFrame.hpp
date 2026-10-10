#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_FrozenFrame : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_FrozenFrame";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_80[0x80 - ::RED4ext::Detail::DataSize<anim::AnimNode_OnePoseInput>];
    int32_t maxFramesFrozen; // 80
    uint8_t unk_88[0x88 - (0x80 + sizeof(maxFramesFrozen))];
    CName triggerEventName; // 88
    uint8_t unk_90[0x90 - (0x88 + sizeof(triggerEventName))];
    CName clearEventName; // 90
#else
    uint8_t unk60[0x80 - 0x60]; // 60
    int32_t maxFramesFrozen; // 80
    uint8_t unk84[0x88 - 0x84]; // 84
    CName triggerEventName; // 88
    CName clearEventName; // 90
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_FrozenFrame, 0x98);
} // namespace anim
using animAnimNode_FrozenFrame = anim::AnimNode_FrozenFrame;
} // namespace RED4ext

// clang-format on
