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
struct TutorialBracketHideEvent : red::Event
{
    static constexpr const char* NAME = "gameuiTutorialBracketHideEvent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    CName bracketID; // 40
#else
    CName bracketID; // 40
#endif
};
RED4EXT_ASSERT_SIZE(TutorialBracketHideEvent, 0x48);
} // namespace game::ui
using gameuiTutorialBracketHideEvent = game::ui::TutorialBracketHideEvent;
} // namespace RED4ext

// clang-format on
