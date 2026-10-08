#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/NamedTrackIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_SetTrackRange : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_SetTrackRange";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<anim::AnimNode_OnePoseInput>];
    anim::FloatLink minLink; // 60
    uint8_t unk_80[0x80 - (0x60 + sizeof(minLink))];
    anim::FloatLink maxLink; // 80
    uint8_t unk_A0[0xA0 - (0x80 + sizeof(maxLink))];
    anim::FloatLink oldMinLink; // A0
    uint8_t unk_C0[0xC0 - (0xA0 + sizeof(oldMinLink))];
    anim::FloatLink oldMaxLink; // C0
    uint8_t unk_E0[0xE0 - (0xC0 + sizeof(oldMaxLink))];
    float min; // E0
    uint8_t unk_E4[0xE4 - (0xE0 + sizeof(min))];
    float max; // E4
    uint8_t unk_E8[0xE8 - (0xE4 + sizeof(max))];
    float oldMin; // E8
    uint8_t unk_EC[0xEC - (0xE8 + sizeof(oldMin))];
    float oldMax; // EC
    uint8_t unk_F0[0xF0 - (0xEC + sizeof(oldMax))];
    anim::NamedTrackIndex track; // F0
    uint8_t unk_108[0x108 - (0xF0 + sizeof(track))];
    bool debug; // 108
#else
    anim::FloatLink minLink; // 60
    anim::FloatLink maxLink; // 80
    anim::FloatLink oldMinLink; // A0
    anim::FloatLink oldMaxLink; // C0
    float min; // E0
    float max; // E4
    float oldMin; // E8
    float oldMax; // EC
    anim::NamedTrackIndex track; // F0
    bool debug; // 108
    uint8_t unk109[0x110 - 0x109]; // 109
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_SetTrackRange, 0x110);
} // namespace anim
using animAnimNode_SetTrackRange = anim::AnimNode_SetTrackRange;
} // namespace RED4ext

// clang-format on
