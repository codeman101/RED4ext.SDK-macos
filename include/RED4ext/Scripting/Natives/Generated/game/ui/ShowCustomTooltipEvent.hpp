#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui
{
struct ShowCustomTooltipEvent : red::Event
{
    static constexpr const char* NAME = "gameuiShowCustomTooltipEvent";
    static constexpr const char* ALIAS = "ShowCustomTooltipEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    CString text; // 40
    uint8_t unk_60[0x60 - (0x40 + sizeof(text))];
    CString inputAction; // 60
#else
    CString text; // 40
    CString inputAction; // 60
#endif
};
RED4EXT_ASSERT_SIZE(ShowCustomTooltipEvent, 0x80);
} // namespace game::ui
using gameuiShowCustomTooltipEvent = game::ui::ShowCustomTooltipEvent;
using ShowCustomTooltipEvent = game::ui::ShowCustomTooltipEvent;
} // namespace RED4ext

// clang-format on
