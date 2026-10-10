#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_FloatValue.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_EventValue : anim::AnimNode_FloatValue
{
    static constexpr const char* NAME = "animAnimNode_EventValue";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<anim::AnimNode_FloatValue>];
    CName eventName; // 48
    uint8_t unk_50[0x50 - (0x48 + sizeof(eventName))];
    float defaultValue; // 50
#else
    CName eventName; // 48
    float defaultValue; // 50
    uint8_t unk54[0x68 - 0x54]; // 54
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_EventValue, 0x68);
} // namespace anim
using animAnimNode_EventValue = anim::AnimNode_EventValue;
} // namespace RED4ext

// clang-format on
