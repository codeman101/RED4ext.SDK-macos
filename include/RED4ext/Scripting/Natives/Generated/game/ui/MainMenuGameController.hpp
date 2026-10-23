#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MenuItemListGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/SendModInfoToUpdateCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct MainMenuGameController : game::ui::MenuItemListGameController
{
    static constexpr const char* NAME = "gameuiMainMenuGameController";
    static constexpr const char* ALIAS = "MainMenuGameController";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_228[0x228 - ::RED4ext::Detail::DataSize<game::ui::MenuItemListGameController>];
    game::ui::SendModInfoToUpdateCallback NeedToDisplayStartupUpdateModsPopup; // 228
    uint8_t unk_268[0x268 - (0x228 + sizeof(NeedToDisplayStartupUpdateModsPopup))];
    ink::CompoundWidgetReference backgroundContainer; // 268
#else
    game::ui::SendModInfoToUpdateCallback NeedToDisplayStartupUpdateModsPopup; // 228
    uint8_t unk260[0x268 - 0x260]; // 260
    ink::CompoundWidgetReference backgroundContainer; // 268
    uint8_t unk280[0x2C0 - 0x280]; // 280
#endif

};
RED4EXT_ASSERT_SIZE(MainMenuGameController, 0x2C0);
} // namespace game::ui
using gameuiMainMenuGameController = game::ui::MainMenuGameController;
using MainMenuGameController = game::ui::MainMenuGameController;
} // namespace RED4ext

// clang-format on
