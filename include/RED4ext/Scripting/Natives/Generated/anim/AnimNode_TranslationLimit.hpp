#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatClamp.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_TranslationLimit : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_TranslationLimit";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<anim::AnimNode_OnePoseInput>];
    anim::TransformIndex constrainedTransform; // 60
    uint8_t unk_78[0x78 - (0x60 + sizeof(constrainedTransform))];
    anim::TransformIndex parentTransform; // 78
    uint8_t unk_90[0x90 - (0x78 + sizeof(parentTransform))];
    anim::FloatClamp limitOnXAxis; // 90
    uint8_t unk_9C[0x9C - (0x90 + sizeof(limitOnXAxis))];
    anim::FloatClamp limitOnYAxis; // 9C
    uint8_t unk_A8[0xA8 - (0x9C + sizeof(limitOnYAxis))];
    anim::FloatClamp limitOnZAxis; // A8
#else
    anim::TransformIndex constrainedTransform; // 60
    anim::TransformIndex parentTransform; // 78
    anim::FloatClamp limitOnXAxis; // 90
    anim::FloatClamp limitOnYAxis; // 9C
    anim::FloatClamp limitOnZAxis; // A8
    uint8_t unkB4[0xB8 - 0xB4]; // B4
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_TranslationLimit, 0xB8);
} // namespace anim
using animAnimNode_TranslationLimit = anim::AnimNode_TranslationLimit;
} // namespace RED4ext

// clang-format on
