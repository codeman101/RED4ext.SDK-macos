#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/Choice.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::interactions
{
struct SetChoicesEvent : red::Event
{
    static constexpr const char* NAME = "gameinteractionsSetChoicesEvent";
    static constexpr const char* ALIAS = "InteractionSetChoicesEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    DynArray<game::interactions::Choice> choices; // 40
    uint8_t unk_50[0x50 - (0x40 + sizeof(choices))];
    CName layer; // 50
#else
    DynArray<game::interactions::Choice> choices; // 40
    CName layer; // 50
#endif
};
RED4EXT_ASSERT_SIZE(SetChoicesEvent, 0x58);
} // namespace game::interactions
using gameinteractionsSetChoicesEvent = game::interactions::SetChoicesEvent;
using InteractionSetChoicesEvent = game::interactions::SetChoicesEvent;
} // namespace RED4ext

// clang-format on
