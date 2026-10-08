#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/LookAtRef.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent
{
struct LookAtRemoveEvent : red::Event
{
    static constexpr const char* NAME = "entLookAtRemoveEvent";
    static constexpr const char* ALIAS = "LookAtRemoveEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    anim::LookAtRef lookAtRef; // 40
    uint8_t unk_50[0x50 - (0x40 + sizeof(lookAtRef))];
    bool hasOutTransition; // 50
    uint8_t unk_54[0x54 - (0x50 + sizeof(hasOutTransition))];
    float outTransitionSpeed; // 54
#else
    anim::LookAtRef lookAtRef; // 40
    bool hasOutTransition; // 50
    uint8_t unk51[0x54 - 0x51]; // 51
    float outTransitionSpeed; // 54
#endif
};
RED4EXT_ASSERT_SIZE(LookAtRemoveEvent, 0x58);
} // namespace ent
using entLookAtRemoveEvent = ent::LookAtRemoveEvent;
using LookAtRemoveEvent = ent::LookAtRemoveEvent;
} // namespace RED4ext

// clang-format on
