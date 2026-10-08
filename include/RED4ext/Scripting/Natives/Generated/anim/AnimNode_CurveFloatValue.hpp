#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_FloatValue.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_CurveFloatValue : anim::AnimNode_FloatValue
{
    static constexpr const char* NAME = "animAnimNode_CurveFloatValue";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<anim::AnimNode_FloatValue>];
    CurveData<float> curveData; // 48
    uint8_t unk_80[0x80 - (0x48 + sizeof(curveData))];
    anim::FloatLink argument; // 80
#else
    CurveData<float> curveData; // 48
    anim::FloatLink argument; // 80
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_CurveFloatValue, 0xA0);
} // namespace anim
using animAnimNode_CurveFloatValue = anim::AnimNode_CurveFloatValue;
} // namespace RED4ext

// clang-format on
