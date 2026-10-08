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
struct AnimNode_MixerSlot : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_MixerSlot";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<anim::AnimNode_OnePoseInput>];
    uint16_t maxNormalAnimEntriesCount; // 60
    uint8_t unk_62[0x62 - (0x60 + sizeof(maxNormalAnimEntriesCount))];
    uint16_t maxAdditiveAnimEntriesCount; // 62
    uint8_t unk_64[0x64 - (0x62 + sizeof(maxAdditiveAnimEntriesCount))];
    uint16_t maxOverrideAnimEntriesCount; // 64
#else
    uint16_t maxNormalAnimEntriesCount; // 60
    uint16_t maxAdditiveAnimEntriesCount; // 62
    uint16_t maxOverrideAnimEntriesCount; // 64
    uint8_t unk66[0x150 - 0x66]; // 66
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_MixerSlot, 0x150);
} // namespace anim
using animAnimNode_MixerSlot = anim::AnimNode_MixerSlot;
} // namespace RED4ext

// clang-format on
