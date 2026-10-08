#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui
{
struct TutorialOverlayHideEvent : red::Event
{
    static constexpr const char* NAME = "gameuiTutorialOverlayHideEvent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    CName itemName; // 40
#else
    CName itemName; // 40
    uint8_t unk48[0x70 - 0x48]; // 48
#endif
};
RED4EXT_ASSERT_SIZE(TutorialOverlayHideEvent, 0x70);
} // namespace game::ui
using gameuiTutorialOverlayHideEvent = game::ui::TutorialOverlayHideEvent;
} // namespace RED4ext

// clang-format on
