#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_FloatValue.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/ClampType.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_ValueBySpeed : anim::AnimNode_FloatValue
{
    static constexpr const char* NAME = "animAnimNode_ValueBySpeed";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_44[0x44 - ::RED4ext::Detail::DataSize<anim::AnimNode_FloatValue>];
    float defaultValue; // 44
    uint8_t unk_48[0x48 - (0x44 + sizeof(defaultValue))];
    anim::ClampType clampType; // 48
    uint8_t unk_4C[0x4C - (0x48 + sizeof(clampType))];
    float rangeMin; // 4C
    uint8_t unk_50[0x50 - (0x4C + sizeof(rangeMin))];
    float rangeMax; // 50
    uint8_t unk_54[0x54 - (0x50 + sizeof(rangeMax))];
    bool resetOnActivation; // 54
    uint8_t unk_58[0x58 - (0x54 + sizeof(resetOnActivation))];
    anim::FloatLink speed; // 58
#else
    float defaultValue; // 48
    anim::ClampType clampType; // 4C
    float rangeMin; // 50
    float rangeMax; // 54
    bool resetOnActivation; // 58
    uint8_t unk59[0x60 - 0x59]; // 59
    anim::FloatLink speed; // 60
    uint8_t unk80[0x90 - 0x80]; // 80
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_ValueBySpeed, 0x90);
} // namespace anim
using animAnimNode_ValueBySpeed = anim::AnimNode_ValueBySpeed;
} // namespace RED4ext

// clang-format on
