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
struct AnimNode_FloatRandom : anim::AnimNode_FloatValue
{
    static constexpr const char* NAME = "animAnimNode_FloatRandom";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_44[0x44 - ::RED4ext::Detail::DataSize<anim::AnimNode_FloatValue>];
    float cooldown; // 44
    uint8_t unk_48[0x48 - (0x44 + sizeof(cooldown))];
    float min; // 48
    uint8_t unk_4C[0x4C - (0x48 + sizeof(min))];
    float max; // 4C
    uint8_t unk_50[0x50 - (0x4C + sizeof(max))];
    bool rand; // 50
#else
    float cooldown; // 48
    float min; // 4C
    float max; // 50
    bool rand; // 54
    uint8_t unk55[0x78 - 0x55]; // 55
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_FloatRandom, 0x78);
} // namespace anim
using animAnimNode_FloatRandom = anim::AnimNode_FloatRandom;
} // namespace RED4ext

// clang-format on
