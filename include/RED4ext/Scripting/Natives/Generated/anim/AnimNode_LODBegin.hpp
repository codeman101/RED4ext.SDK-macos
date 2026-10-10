#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_LODBegin : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_LODBegin";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<anim::AnimNode_OnePoseInput>];
    uint32_t levelOfDetail; // 60
#else
    uint32_t levelOfDetail; // 60
    uint8_t unk64[0x68 - 0x64]; // 64
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_LODBegin, 0x68);
} // namespace anim
using animAnimNode_LODBegin = anim::AnimNode_LODBegin;
} // namespace RED4ext

// clang-format on
