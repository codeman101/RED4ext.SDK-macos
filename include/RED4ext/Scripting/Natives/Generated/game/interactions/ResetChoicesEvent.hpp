#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::interactions
{
struct ResetChoicesEvent : red::Event
{
    static constexpr const char* NAME = "gameinteractionsResetChoicesEvent";
    static constexpr const char* ALIAS = "InteractionResetChoicesEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    CName layer; // 40
#else
    CName layer; // 40
    uint8_t unk48[0x50 - 0x48]; // 48
#endif
};
RED4EXT_ASSERT_SIZE(ResetChoicesEvent, 0x50);
} // namespace game::interactions
using gameinteractionsResetChoicesEvent = game::interactions::ResetChoicesEvent;
using InteractionResetChoicesEvent = game::interactions::ResetChoicesEvent;
} // namespace RED4ext

// clang-format on
