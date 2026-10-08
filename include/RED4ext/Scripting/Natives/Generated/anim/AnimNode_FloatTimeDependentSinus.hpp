#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_FloatValue.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_FloatTimeDependentSinus : anim::AnimNode_FloatValue
{
    static constexpr const char* NAME = "animAnimNode_FloatTimeDependentSinus";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_44[0x44 - ::RED4ext::Detail::DataSize<anim::AnimNode_FloatValue>];
    float min; // 44
    uint8_t unk_48[0x48 - (0x44 + sizeof(min))];
    float max; // 48
    uint8_t unk_4C[0x4C - (0x48 + sizeof(max))];
    float frequencyFactor; // 4C
    uint8_t unk_50[0x50 - (0x4C + sizeof(frequencyFactor))];
    float phaseFactor; // 50
#else
    float min; // 48
    float max; // 4C
    float frequencyFactor; // 50
    float phaseFactor; // 54
    uint8_t unk58[0x68 - 0x58]; // 58
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_FloatTimeDependentSinus, 0x68);
} // namespace anim
using animAnimNode_FloatTimeDependentSinus = anim::AnimNode_FloatTimeDependentSinus;
} // namespace RED4ext

// clang-format on
