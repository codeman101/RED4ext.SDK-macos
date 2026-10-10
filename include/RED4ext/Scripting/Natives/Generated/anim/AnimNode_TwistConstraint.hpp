#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/Axis.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TwistOutput.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_TwistConstraint : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_TwistConstraint";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<anim::AnimNode_OnePoseInput>];
    anim::Axis frontAxis; // 60
    uint8_t unk_68[0x68 - (0x60 + sizeof(frontAxis))];
    anim::TransformIndex transformA; // 68
    uint8_t unk_80[0x80 - (0x68 + sizeof(transformA))];
    anim::TransformIndex transformB; // 80
    uint8_t unk_98[0x98 - (0x80 + sizeof(transformB))];
    DynArray<anim::TwistOutput> outputs; // 98
    uint8_t unk_A8[0xA8 - (0x98 + sizeof(outputs))];
    bool debug; // A8
#else
    anim::Axis frontAxis; // 60
    uint8_t unk64[0x68 - 0x64]; // 64
    anim::TransformIndex transformA; // 68
    anim::TransformIndex transformB; // 80
    DynArray<anim::TwistOutput> outputs; // 98
    bool debug; // A8
    uint8_t unkA9[0xB0 - 0xA9]; // A9
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_TwistConstraint, 0xB0);
} // namespace anim
using animAnimNode_TwistConstraint = anim::AnimNode_TwistConstraint;
} // namespace RED4ext

// clang-format on
