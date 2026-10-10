#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>

namespace RED4ext
{
namespace anim { struct DangleConstraint_Simulation; }

namespace anim
{
struct AnimNode_Dangle : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_Dangle";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<anim::AnimNode_OnePoseInput>];
    Handle<anim::DangleConstraint_Simulation> dangleConstraint; // 60
#else
    Handle<anim::DangleConstraint_Simulation> dangleConstraint; // 60
    uint8_t unk70[0x80 - 0x70]; // 70
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_Dangle, 0x80);
} // namespace anim
using animAnimNode_Dangle = anim::AnimNode_Dangle;
} // namespace RED4ext

// clang-format on
