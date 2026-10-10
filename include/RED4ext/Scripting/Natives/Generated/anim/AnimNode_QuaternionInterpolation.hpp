#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_QuaternionValue.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/QuaternionInterpolationType.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/QuaternionLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_QuaternionInterpolation : anim::AnimNode_QuaternionValue
{
    static constexpr const char* NAME = "animAnimNode_QuaternionInterpolation";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_44[0x44 - ::RED4ext::Detail::DataSize<anim::AnimNode_QuaternionValue>];
    anim::QuaternionInterpolationType interpolationType; // 44
    uint8_t unk_48[0x48 - (0x44 + sizeof(interpolationType))];
    anim::QuaternionLink firstInput; // 48
    uint8_t unk_68[0x68 - (0x48 + sizeof(firstInput))];
    anim::QuaternionLink secondInput; // 68
    uint8_t unk_88[0x88 - (0x68 + sizeof(secondInput))];
    anim::FloatLink weight; // 88
#else
    anim::QuaternionInterpolationType interpolationType; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
    anim::QuaternionLink firstInput; // 50
    anim::QuaternionLink secondInput; // 70
    anim::FloatLink weight; // 90
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_QuaternionInterpolation, 0xB0);
} // namespace anim
using animAnimNode_QuaternionInterpolation = anim::AnimNode_QuaternionInterpolation;
} // namespace RED4ext

// clang-format on
