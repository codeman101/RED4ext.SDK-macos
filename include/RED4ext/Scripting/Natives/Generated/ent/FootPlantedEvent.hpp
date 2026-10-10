#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/EventSide.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent
{
struct FootPlantedEvent : red::Event
{
    static constexpr const char* NAME = "entFootPlantedEvent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    CName customAction; // 40
    uint8_t unk_48[0x48 - (0x40 + sizeof(customAction))];
    anim::EventSide footSide; // 48
#else
    CName customAction; // 40
    anim::EventSide footSide; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
#endif
};
RED4EXT_ASSERT_SIZE(FootPlantedEvent, 0x50);
} // namespace ent
using entFootPlantedEvent = ent::FootPlantedEvent;
} // namespace RED4ext

// clang-format on
