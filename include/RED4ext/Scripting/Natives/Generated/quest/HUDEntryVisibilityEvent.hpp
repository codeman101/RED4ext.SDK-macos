#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/HUDEntryVisibilityData.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace quest
{
struct HUDEntryVisibilityEvent : red::Event
{
    static constexpr const char* NAME = "questHUDEntryVisibilityEvent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    DynArray<quest::HUDEntryVisibilityData> dataEntries; // 40
#else
    DynArray<quest::HUDEntryVisibilityData> dataEntries; // 40
    uint8_t unk50[0x58 - 0x50]; // 50
#endif
};
RED4EXT_ASSERT_SIZE(HUDEntryVisibilityEvent, 0x58);
} // namespace quest
using questHUDEntryVisibilityEvent = quest::HUDEntryVisibilityEvent;
} // namespace RED4ext

// clang-format on
