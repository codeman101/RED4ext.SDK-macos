#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_Container.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_Stage : anim::AnimNode_Container
{
    static constexpr const char* NAME = "animAnimNode_Stage";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_58[0x58 - ::RED4ext::Detail::DataSize<anim::AnimNode_Container>];
    DynArray<anim::PoseLink> inputPoses; // 58
#else
    DynArray<anim::PoseLink> inputPoses; // 58
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_Stage, 0x68);
} // namespace anim
using animAnimNode_Stage = anim::AnimNode_Stage;
} // namespace RED4ext

// clang-format on
