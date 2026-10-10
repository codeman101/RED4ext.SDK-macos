#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/Context.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui
{
struct ContextChangedEvent : red::Event
{
    static constexpr const char* NAME = "gameuiContextChangedEvent";
    static constexpr const char* ALIAS = "UIGameContextChangedEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    game::ui::Context oldContext; // 40
    uint8_t unk_44[0x44 - (0x40 + sizeof(oldContext))];
    game::ui::Context newContext; // 44
#else
    game::ui::Context oldContext; // 40
    game::ui::Context newContext; // 44
#endif
};
RED4EXT_ASSERT_SIZE(ContextChangedEvent, 0x48);
} // namespace game::ui
using gameuiContextChangedEvent = game::ui::ContextChangedEvent;
using UIGameContextChangedEvent = game::ui::ContextChangedEvent;
} // namespace RED4ext

// clang-format on
