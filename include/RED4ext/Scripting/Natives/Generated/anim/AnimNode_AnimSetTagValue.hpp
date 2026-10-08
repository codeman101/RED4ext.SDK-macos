#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_FloatValue.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/TagList.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_AnimSetTagValue : anim::AnimNode_FloatValue
{
    static constexpr const char* NAME = "animAnimNode_AnimSetTagValue";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<anim::AnimNode_FloatValue>];
    red::TagList tags; // 48
#else
    red::TagList tags; // 48
    uint8_t unk58[0x68 - 0x58]; // 58
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_AnimSetTagValue, 0x68);
} // namespace anim
using animAnimNode_AnimSetTagValue = anim::AnimNode_AnimSetTagValue;
} // namespace RED4ext

// clang-format on
