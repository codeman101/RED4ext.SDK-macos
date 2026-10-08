#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_FloatValue.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/EAnimGraphMathInterpolation.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_FloatInterpolation : anim::AnimNode_FloatValue
{
    static constexpr const char* NAME = "animAnimNode_FloatInterpolation";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_44[0x44 - ::RED4ext::Detail::DataSize<anim::AnimNode_FloatValue>];
    float x1; // 44
    uint8_t unk_48[0x48 - (0x44 + sizeof(x1))];
    float y1; // 48
    uint8_t unk_4C[0x4C - (0x48 + sizeof(y1))];
    float x2; // 4C
    uint8_t unk_50[0x50 - (0x4C + sizeof(x2))];
    float y2; // 50
    uint8_t unk_54[0x54 - (0x50 + sizeof(y2))];
    anim::EAnimGraphMathInterpolation interpolationType; // 54
    uint8_t unk_58[0x58 - (0x54 + sizeof(interpolationType))];
    anim::FloatLink inputNode; // 58
#else
    float x1; // 48
    float y1; // 4C
    float x2; // 50
    float y2; // 54
    anim::EAnimGraphMathInterpolation interpolationType; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
    anim::FloatLink inputNode; // 60
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_FloatInterpolation, 0x80);
} // namespace anim
using animAnimNode_FloatInterpolation = anim::AnimNode_FloatInterpolation;
} // namespace RED4ext

// clang-format on
