#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/input/ActionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/Choice.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/InteractionBaseEvent.hpp>

namespace RED4ext
{
namespace game::interactions
{
struct ChoiceEvent : game::interactions::InteractionBaseEvent
{
    static constexpr const char* NAME = "gameinteractionsChoiceEvent";
    static constexpr const char* ALIAS = "InteractionChoiceEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_68[0x68 - ::RED4ext::Detail::DataSize<game::interactions::InteractionBaseEvent>];
    game::interactions::Choice choice; // 68
    uint8_t unk_108[0x108 - (0x68 + sizeof(choice))];
    game::input::ActionType actionType; // 108
#else
    game::interactions::Choice choice; // 68
    game::input::ActionType actionType; // 108
    uint8_t unk10C[0x110 - 0x10C]; // 10C
#endif
};
RED4EXT_ASSERT_SIZE(ChoiceEvent, 0x110);
} // namespace game::interactions
using gameinteractionsChoiceEvent = game::interactions::ChoiceEvent;
using InteractionChoiceEvent = game::interactions::ChoiceEvent;
} // namespace RED4ext

// clang-format on
