#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_FloatValue.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_CriticalSpringDamp : anim::AnimNode_FloatValue
{
    static constexpr const char* NAME = "animAnimNode_CriticalSpringDamp";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_44[0x44 - ::RED4ext::Detail::DataSize<anim::AnimNode_FloatValue>];
    float smoothTime; // 44
    uint8_t unk_48[0x48 - (0x44 + sizeof(smoothTime))];
    bool useRange; // 48
    uint8_t unk_4C[0x4C - (0x48 + sizeof(useRange))];
    float rangeMin; // 4C
    uint8_t unk_50[0x50 - (0x4C + sizeof(rangeMin))];
    float rangeMax; // 50
    uint8_t unk_54[0x54 - (0x50 + sizeof(rangeMax))];
    bool useRawTime; // 54
    uint8_t unk_58[0x58 - (0x54 + sizeof(useRawTime))];
    anim::FloatLink inputNode; // 58
#else
    float smoothTime; // 48
    bool useRange; // 4C
    uint8_t unk4D[0x50 - 0x4D]; // 4D
    float rangeMin; // 50
    float rangeMax; // 54
    bool useRawTime; // 58
    uint8_t unk59[0x60 - 0x59]; // 59
    anim::FloatLink inputNode; // 60
    uint8_t unk80[0xA0 - 0x80]; // 80
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_CriticalSpringDamp, 0xA0);
} // namespace anim
using animAnimNode_CriticalSpringDamp = anim::AnimNode_CriticalSpringDamp;
} // namespace RED4ext

// clang-format on
