#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/InputHintData.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui
{
struct UpdateInputHintEvent : red::Event
{
    static constexpr const char* NAME = "gameuiUpdateInputHintEvent";
    static constexpr const char* ALIAS = "UpdateInputHintEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    game::ui::InputHintData data; // 40
    uint8_t unk_98[0x98 - (0x40 + sizeof(data))];
    bool show; // 98
    uint8_t unk_A0[0xA0 - (0x98 + sizeof(show))];
    CName targetHintContainer; // A0
#else
    game::ui::InputHintData data; // 40
    bool show; // 98
    uint8_t unk99[0xA0 - 0x99]; // 99
    CName targetHintContainer; // A0
#endif
};
RED4EXT_ASSERT_SIZE(UpdateInputHintEvent, 0xA8);
} // namespace game::ui
using gameuiUpdateInputHintEvent = game::ui::UpdateInputHintEvent;
using UpdateInputHintEvent = game::ui::UpdateInputHintEvent;
} // namespace RED4ext

// clang-format on
