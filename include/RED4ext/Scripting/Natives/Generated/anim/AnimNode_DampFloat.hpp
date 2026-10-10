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
struct AnimNode_DampFloat : anim::AnimNode_FloatValue
{
    static constexpr const char* NAME = "animAnimNode_DampFloat";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_44[0x44 - ::RED4ext::Detail::DataSize<anim::AnimNode_FloatValue>];
    float defaultIncreaseSpeed; // 44
    uint8_t unk_48[0x48 - (0x44 + sizeof(defaultIncreaseSpeed))];
    float defaultDecreaseSpeed; // 48
    uint8_t unk_4C[0x4C - (0x48 + sizeof(defaultDecreaseSpeed))];
    bool startFromDefaultValue; // 4C
    uint8_t unk_50[0x50 - (0x4C + sizeof(startFromDefaultValue))];
    float defaultInitialValue; // 50
    uint8_t unk_54[0x54 - (0x50 + sizeof(defaultInitialValue))];
    bool wrapAroundRange; // 54
    uint8_t unk_58[0x58 - (0x54 + sizeof(wrapAroundRange))];
    float rangeMin; // 58
    uint8_t unk_5C[0x5C - (0x58 + sizeof(rangeMin))];
    float rangeMax; // 5C
    uint8_t unk_60[0x60 - (0x5C + sizeof(rangeMax))];
    anim::FloatLink inputNode; // 60
    uint8_t unk_80[0x80 - (0x60 + sizeof(inputNode))];
    anim::FloatLink increaseSpeedNode; // 80
    uint8_t unk_A0[0xA0 - (0x80 + sizeof(increaseSpeedNode))];
    anim::FloatLink decreaseSpeedNode; // A0
#else
    float defaultIncreaseSpeed; // 48
    float defaultDecreaseSpeed; // 4C
    bool startFromDefaultValue; // 50
    uint8_t unk51[0x54 - 0x51]; // 51
    float defaultInitialValue; // 54
    bool wrapAroundRange; // 58
    uint8_t unk59[0x5C - 0x59]; // 59
    float rangeMin; // 5C
    float rangeMax; // 60
    uint8_t unk64[0x68 - 0x64]; // 64
    anim::FloatLink inputNode; // 68
    anim::FloatLink increaseSpeedNode; // 88
    anim::FloatLink decreaseSpeedNode; // A8
    uint8_t unkC8[0xD8 - 0xC8]; // C8
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_DampFloat, 0xD8);
} // namespace anim
using animAnimNode_DampFloat = anim::AnimNode_DampFloat;
} // namespace RED4ext

// clang-format on
