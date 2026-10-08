#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/WidgetGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/BriefingPlayerType.hpp>

namespace RED4ext
{
namespace game::ui
{
struct BriefingGameController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiBriefingGameController";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_1D0[0x1D0 - ::RED4ext::Detail::DataSize<game::ui::WidgetGameController>];
    quest::BriefingPlayerType briefingPlayerType; // 1D0
#else
    uint8_t unkE0[0x1D8 - 0xE0]; // E0
    quest::BriefingPlayerType briefingPlayerType; // 1D8
    uint8_t unk1DC[0x1F0 - 0x1DC]; // 1DC
#endif
};
RED4EXT_ASSERT_SIZE(BriefingGameController, 0x1F0);
} // namespace game::ui
using gameuiBriefingGameController = game::ui::BriefingGameController;
} // namespace RED4ext

// clang-format on
