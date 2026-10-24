#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TEMP_IKTargetsControllerBodyType.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) AnimNode_HumanIk : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_HumanIk";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<anim::AnimNode_OnePoseInput>];
    DynArray<anim::TEMP_IKTargetsControllerBodyType> ikTargetsControllers; // 60
#else
    DynArray<anim::TEMP_IKTargetsControllerBodyType> ikTargetsControllers; // 60
    uint8_t unk70[0x330 - 0x70]; // 70
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_HumanIk, 0x330);
} // namespace anim
using animAnimNode_HumanIk = anim::AnimNode_HumanIk;
} // namespace RED4ext

// clang-format on
