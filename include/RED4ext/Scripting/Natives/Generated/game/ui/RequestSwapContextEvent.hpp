#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/UIGameContext.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui
{
struct RequestSwapContextEvent : red::Event
{
    static constexpr const char* NAME = "gameuiRequestSwapContextEvent";
    static constexpr const char* ALIAS = "SwapUIGameContextEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    UIGameContext oldContext; // 40
    uint8_t unk_44[0x44 - (0x40 + sizeof(oldContext))];
    UIGameContext newContext; // 44
#else
    UIGameContext oldContext; // 40
    UIGameContext newContext; // 44
#endif
};
RED4EXT_ASSERT_SIZE(RequestSwapContextEvent, 0x48);
} // namespace game::ui
using gameuiRequestSwapContextEvent = game::ui::RequestSwapContextEvent;
using SwapUIGameContextEvent = game::ui::RequestSwapContextEvent;
} // namespace RED4ext

// clang-format on
