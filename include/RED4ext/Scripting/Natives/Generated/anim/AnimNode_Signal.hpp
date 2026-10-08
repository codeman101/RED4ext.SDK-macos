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
struct AnimNode_Signal : anim::AnimNode_FloatValue
{
    static constexpr const char* NAME = "animAnimNode_Signal";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_44[0x44 - ::RED4ext::Detail::DataSize<anim::AnimNode_FloatValue>];
    float blendIn; // 44
    uint8_t unk_48[0x48 - (0x44 + sizeof(blendIn))];
    float blendOut; // 48
    uint8_t unk_50[0x50 - (0x48 + sizeof(blendOut))];
    CName startEvent; // 50
    uint8_t unk_58[0x58 - (0x50 + sizeof(startEvent))];
    CName endEvent; // 58
    uint8_t unk_60[0x60 - (0x58 + sizeof(endEvent))];
    bool defaultState; // 60
    uint8_t unk_64[0x64 - (0x60 + sizeof(defaultState))];
    float cooldown; // 64
#else
    float blendIn; // 48
    float blendOut; // 4C
    CName startEvent; // 50
    CName endEvent; // 58
    bool defaultState; // 60
    uint8_t unk61[0x64 - 0x61]; // 61
    float cooldown; // 64
    uint8_t unk68[0x98 - 0x68]; // 68
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_Signal, 0x98);
} // namespace anim
using animAnimNode_Signal = anim::AnimNode_Signal;
} // namespace RED4ext

// clang-format on
