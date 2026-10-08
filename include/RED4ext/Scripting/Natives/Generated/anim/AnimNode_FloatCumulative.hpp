#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_FloatValue.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/BoolLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_FloatCumulative : anim::AnimNode_FloatValue
{
    static constexpr const char* NAME = "animAnimNode_FloatCumulative";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_58[0x58 - ::RED4ext::Detail::DataSize<anim::AnimNode_FloatValue>];
    bool clamp; // 58
    uint8_t unk_59[0x59 - (0x58 + sizeof(clamp))];
    bool resetOnActivation; // 59
    uint8_t unk_5A[0x5A - (0x59 + sizeof(resetOnActivation))];
    bool normalize180; // 5A
    uint8_t unk_5C[0x5C - (0x5A + sizeof(normalize180))];
    float defaultValue; // 5C
    uint8_t unk_60[0x60 - (0x5C + sizeof(defaultValue))];
    CName resetExternalEventName; // 60
    uint8_t unk_68[0x68 - (0x60 + sizeof(resetExternalEventName))];
    anim::FloatLink inputNode; // 68
    uint8_t unk_88[0x88 - (0x68 + sizeof(inputNode))];
    anim::FloatLink minValue; // 88
    uint8_t unk_A8[0xA8 - (0x88 + sizeof(minValue))];
    anim::FloatLink maxValue; // A8
    uint8_t unk_C8[0xC8 - (0xA8 + sizeof(maxValue))];
    anim::FloatLink resetSpeed; // C8
    uint8_t unk_E8[0xE8 - (0xC8 + sizeof(resetSpeed))];
    anim::BoolLink normalize180Input; // E8
    uint8_t unk_108[0x108 - (0xE8 + sizeof(normalize180Input))];
    anim::BoolLink override; // 108
    uint8_t unk_128[0x128 - (0x108 + sizeof(override))];
    anim::FloatLink curValue; // 128
#else
    uint8_t unk48[0x58 - 0x48]; // 48
    bool clamp; // 58
    bool resetOnActivation; // 59
    bool normalize180; // 5A
    uint8_t unk5B[0x5C - 0x5B]; // 5B
    float defaultValue; // 5C
    CName resetExternalEventName; // 60
    anim::FloatLink inputNode; // 68
    anim::FloatLink minValue; // 88
    anim::FloatLink maxValue; // A8
    anim::FloatLink resetSpeed; // C8
    anim::BoolLink normalize180Input; // E8
    anim::BoolLink override; // 108
    anim::FloatLink curValue; // 128
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_FloatCumulative, 0x148);
} // namespace anim
using animAnimNode_FloatCumulative = anim::AnimNode_FloatCumulative;
} // namespace RED4ext

// clang-format on
