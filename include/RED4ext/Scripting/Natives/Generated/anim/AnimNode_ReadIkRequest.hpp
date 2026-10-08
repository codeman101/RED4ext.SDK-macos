#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_ReadIkRequest : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_ReadIkRequest";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<anim::AnimNode_OnePoseInput>];
    CName ikChain; // 60
    uint8_t unk_68[0x68 - (0x60 + sizeof(ikChain))];
    anim::TransformIndex outTransform; // 68
#else
    CName ikChain; // 60
    anim::TransformIndex outTransform; // 68
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_ReadIkRequest, 0x80);
} // namespace anim
using animAnimNode_ReadIkRequest = anim::AnimNode_ReadIkRequest;
} // namespace RED4ext

// clang-format on
