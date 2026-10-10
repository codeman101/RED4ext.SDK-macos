#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_FloatValue.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/MathExpressionNodeData.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_MathExpressionFloat : anim::AnimNode_FloatValue
{
    static constexpr const char* NAME = "animAnimNode_MathExpressionFloat";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<anim::AnimNode_FloatValue>];
    anim::MathExpressionNodeData expressionData; // 48
#else
    anim::MathExpressionNodeData expressionData; // 48
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_MathExpressionFloat, 0x88);
} // namespace anim
using animAnimNode_MathExpressionFloat = anim::AnimNode_MathExpressionFloat;
} // namespace RED4ext

// clang-format on
