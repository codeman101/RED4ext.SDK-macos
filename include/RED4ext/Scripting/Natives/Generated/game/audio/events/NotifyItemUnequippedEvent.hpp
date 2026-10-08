#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::audio::events
{
struct NotifyItemUnequippedEvent : red::Event
{
    static constexpr const char* NAME = "gameaudioeventsNotifyItemUnequippedEvent";
    static constexpr const char* ALIAS = "AudioNotifyItemUnequippedEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    CName itemName; // 40
#else
    CName itemName; // 40
#endif
};
RED4EXT_ASSERT_SIZE(NotifyItemUnequippedEvent, 0x48);
} // namespace game::audio::events
using gameaudioeventsNotifyItemUnequippedEvent = game::audio::events::NotifyItemUnequippedEvent;
using AudioNotifyItemUnequippedEvent = game::audio::events::NotifyItemUnequippedEvent;
} // namespace RED4ext

// clang-format on
