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
struct AnimNode_SpringDamp : anim::AnimNode_FloatValue
{
    static constexpr const char* NAME = "animAnimNode_SpringDamp";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_44[0x44 - ::RED4ext::Detail::DataSize<anim::AnimNode_FloatValue>];
    float massFactor; // 44
    uint8_t unk_48[0x48 - (0x44 + sizeof(massFactor))];
    float springFactor; // 48
    uint8_t unk_4C[0x4C - (0x48 + sizeof(springFactor))];
    float dampFactor; // 4C
    uint8_t unk_50[0x50 - (0x4C + sizeof(dampFactor))];
    bool startFromDefaultValue; // 50
    uint8_t unk_54[0x54 - (0x50 + sizeof(startFromDefaultValue))];
    float defaultInitialValue; // 54
    uint8_t unk_58[0x58 - (0x54 + sizeof(defaultInitialValue))];
    bool wrapAroundRange; // 58
    uint8_t unk_5C[0x5C - (0x58 + sizeof(wrapAroundRange))];
    float rangeMin; // 5C
    uint8_t unk_60[0x60 - (0x5C + sizeof(rangeMin))];
    float rangeMax; // 60
    uint8_t unk_64[0x64 - (0x60 + sizeof(rangeMax))];
    float timeStep; // 64
    uint8_t unk_68[0x68 - (0x64 + sizeof(timeStep))];
    anim::FloatLink inputNode; // 68
#else
    float massFactor; // 48
    float springFactor; // 4C
    float dampFactor; // 50
    bool startFromDefaultValue; // 54
    uint8_t unk55[0x58 - 0x55]; // 55
    float defaultInitialValue; // 58
    bool wrapAroundRange; // 5C
    uint8_t unk5D[0x60 - 0x5D]; // 5D
    float rangeMin; // 60
    float rangeMax; // 64
    float timeStep; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
    anim::FloatLink inputNode; // 70
    uint8_t unk90[0xB0 - 0x90]; // 90
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_SpringDamp, 0xB0);
} // namespace anim
using animAnimNode_SpringDamp = anim::AnimNode_SpringDamp;
} // namespace RED4ext

// clang-format on
