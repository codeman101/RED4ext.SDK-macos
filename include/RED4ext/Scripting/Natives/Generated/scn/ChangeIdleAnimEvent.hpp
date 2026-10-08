#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FacialEmotionTransitionBaked.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PlayAnimEvent.hpp>

namespace RED4ext
{
namespace scn
{
struct ChangeIdleAnimEvent : scn::PlayAnimEvent
{
    static constexpr const char* NAME = "scnChangeIdleAnimEvent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_A0[0xA0 - ::RED4ext::Detail::DataSize<scn::PlayAnimEvent>];
    CName idleAnimName; // A0
    uint8_t unk_A8[0xA8 - (0xA0 + sizeof(idleAnimName))];
    CName addIdleAnimName; // A8
    uint8_t unk_B0[0xB0 - (0xA8 + sizeof(addIdleAnimName))];
    bool isEnabled; // B0
    uint8_t unk_B8[0xB8 - (0xB0 + sizeof(isEnabled))];
    CName animName; // B8
    uint8_t unk_C0[0xC0 - (0xB8 + sizeof(animName))];
    anim::FacialEmotionTransitionBaked bakedFacialTransition; // C0
    uint8_t unk_100[0x100 - (0xC0 + sizeof(bakedFacialTransition))];
    bool facialInstantTransition; // 100
#else
    CName idleAnimName; // A0
    CName addIdleAnimName; // A8
    bool isEnabled; // B0
    uint8_t unkB1[0xB8 - 0xB1]; // B1
    CName animName; // B8
    anim::FacialEmotionTransitionBaked bakedFacialTransition; // C0
    bool facialInstantTransition; // 100
    uint8_t unk101[0x108 - 0x101]; // 101
#endif
};
RED4EXT_ASSERT_SIZE(ChangeIdleAnimEvent, 0x108);
} // namespace scn
using scnChangeIdleAnimEvent = scn::ChangeIdleAnimEvent;
} // namespace RED4ext

// clang-format on
