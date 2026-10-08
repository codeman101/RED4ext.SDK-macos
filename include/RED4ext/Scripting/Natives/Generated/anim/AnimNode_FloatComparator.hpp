#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_FloatValue.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/EAnimGraphCompareFunc.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_FloatComparator : anim::AnimNode_FloatValue
{
    static constexpr const char* NAME = "animAnimNode_FloatComparator";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_44[0x44 - ::RED4ext::Detail::DataSize<anim::AnimNode_FloatValue>];
    float firstValue; // 44
    uint8_t unk_48[0x48 - (0x44 + sizeof(firstValue))];
    float secondValue; // 48
    uint8_t unk_4C[0x4C - (0x48 + sizeof(secondValue))];
    float trueValue; // 4C
    uint8_t unk_50[0x50 - (0x4C + sizeof(trueValue))];
    float falseValue; // 50
    uint8_t unk_54[0x54 - (0x50 + sizeof(falseValue))];
    anim::EAnimGraphCompareFunc operation; // 54
    uint8_t unk_58[0x58 - (0x54 + sizeof(operation))];
    anim::FloatLink firstInputLink; // 58
    uint8_t unk_78[0x78 - (0x58 + sizeof(firstInputLink))];
    anim::FloatLink secondInputLink; // 78
    uint8_t unk_98[0x98 - (0x78 + sizeof(secondInputLink))];
    anim::FloatLink trueInputLink; // 98
    uint8_t unk_B8[0xB8 - (0x98 + sizeof(trueInputLink))];
    anim::FloatLink falseInputLink; // B8
#else
    float firstValue; // 48
    float secondValue; // 4C
    float trueValue; // 50
    float falseValue; // 54
    anim::EAnimGraphCompareFunc operation; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
    anim::FloatLink firstInputLink; // 60
    anim::FloatLink secondInputLink; // 80
    anim::FloatLink trueInputLink; // A0
    anim::FloatLink falseInputLink; // C0
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_FloatComparator, 0xE0);
} // namespace anim
using animAnimNode_FloatComparator = anim::AnimNode_FloatComparator;
} // namespace RED4ext

// clang-format on
