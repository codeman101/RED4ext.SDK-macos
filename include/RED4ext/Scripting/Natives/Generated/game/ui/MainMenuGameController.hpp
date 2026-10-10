#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MenuItemListGameController.hpp>
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
    uint8_t unk_188[0x188 - ::RED4ext::Detail::DataSize<game::ui::MenuItemListGameController>];
    ink::CompoundWidgetReference backgroundContainer; // 188
#else
    uint8_t unk180[0x188 - 0x180]; // 180
    ink::CompoundWidgetReference backgroundContainer; // 188
    uint8_t unk1A0[0x1E0 - 0x1A0]; // 1A0
#endif
};
RED4EXT_ASSERT_SIZE(MainMenuGameController, 0x1E0);
} // namespace game::ui
using gameuiMainMenuGameController = game::ui::MainMenuGameController;
using MainMenuGameController = game::ui::MainMenuGameController;
} // namespace RED4ext

// clang-format on
