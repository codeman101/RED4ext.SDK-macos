#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_TransformValue.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/QuaternionInterpolationType.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_TransformInterpolation : anim::AnimNode_TransformValue
{
    static constexpr const char* NAME = "animAnimNode_TransformInterpolation";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_44[0x44 - ::RED4ext::Detail::DataSize<anim::AnimNode_TransformValue>];
    anim::QuaternionInterpolationType interpolationType; // 44
    uint8_t unk_48[0x48 - (0x44 + sizeof(interpolationType))];
    anim::TransformLink firstInput; // 48
    uint8_t unk_68[0x68 - (0x48 + sizeof(firstInput))];
    anim::TransformLink secondInput; // 68
    uint8_t unk_88[0x88 - (0x68 + sizeof(secondInput))];
    anim::FloatLink weight; // 88
#else
    anim::QuaternionInterpolationType interpolationType; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
    anim::TransformLink firstInput; // 50
    anim::TransformLink secondInput; // 70
    anim::FloatLink weight; // 90
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_TransformInterpolation, 0xB0);
} // namespace anim
using animAnimNode_TransformInterpolation = anim::AnimNode_TransformInterpolation;
} // namespace RED4ext

// clang-format on
