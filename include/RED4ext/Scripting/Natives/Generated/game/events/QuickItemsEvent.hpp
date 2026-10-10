#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::events
{
struct QuickItemsEvent : red::Event
{
    static constexpr const char* NAME = "gameeventsQuickItemsEvent";
    static constexpr const char* ALIAS = "gameQuickItemsEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    CName questName; // 40
#else
    CName questName; // 40
#endif
};
RED4EXT_ASSERT_SIZE(QuickItemsEvent, 0x48);
} // namespace game::events
using gameeventsQuickItemsEvent = game::events::QuickItemsEvent;
using gameQuickItemsEvent = game::events::QuickItemsEvent;
} // namespace RED4ext

// clang-format on
