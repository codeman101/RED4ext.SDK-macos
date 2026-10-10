#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/WidgetGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct SideScrollerMiniGameController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiSideScrollerMiniGameController";
    static constexpr const char* ALIAS = "MinigameController";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_E0[0xE0 - ::RED4ext::Detail::DataSize<game::ui::WidgetGameController>];
    CName gameName; // E0
    uint8_t unk_100[0x100 - (0xE0 + sizeof(gameName))];
    ink::WidgetReference gameplayCanvas; // 100
#else
    CName gameName; // E0
    uint8_t unkE8[0x100 - 0xE8]; // E8
    ink::WidgetReference gameplayCanvas; // 100
#endif
};
RED4EXT_ASSERT_SIZE(SideScrollerMiniGameController, 0x118);
} // namespace game::ui
using gameuiSideScrollerMiniGameController = game::ui::SideScrollerMiniGameController;
using MinigameController = game::ui::SideScrollerMiniGameController;
} // namespace RED4ext

// clang-format on
