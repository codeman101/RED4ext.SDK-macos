#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/InputHintGroupData.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui
{
struct AddInputGroupEvent : red::Event
{
    static constexpr const char* NAME = "gameuiAddInputGroupEvent";
    static constexpr const char* ALIAS = "AddInputGroupEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    game::ui::InputHintGroupData data; // 40
    uint8_t unk_90[0x90 - (0x40 + sizeof(data))];
    CName groupId; // 90
    uint8_t unk_98[0x98 - (0x90 + sizeof(groupId))];
    CName targetHintContainer; // 98
#else
    game::ui::InputHintGroupData data; // 40
    CName groupId; // 90
    CName targetHintContainer; // 98
#endif
};
RED4EXT_ASSERT_SIZE(AddInputGroupEvent, 0xA0);
} // namespace game::ui
using gameuiAddInputGroupEvent = game::ui::AddInputGroupEvent;
using AddInputGroupEvent = game::ui::AddInputGroupEvent;
} // namespace RED4ext

// clang-format on
