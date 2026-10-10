#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_VectorValue.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/VectorLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_VectorInterpolation : anim::AnimNode_VectorValue
{
    static constexpr const char* NAME = "animAnimNode_VectorInterpolation";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<anim::AnimNode_VectorValue>];
    anim::VectorLink firstInput; // 48
    uint8_t unk_68[0x68 - (0x48 + sizeof(firstInput))];
    anim::VectorLink secondInput; // 68
    uint8_t unk_88[0x88 - (0x68 + sizeof(secondInput))];
    anim::FloatLink weight; // 88
#else
    anim::VectorLink firstInput; // 48
    anim::VectorLink secondInput; // 68
    anim::FloatLink weight; // 88
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_VectorInterpolation, 0xA8);
} // namespace anim
using animAnimNode_VectorInterpolation = anim::AnimNode_VectorInterpolation;
} // namespace RED4ext

// clang-format on
