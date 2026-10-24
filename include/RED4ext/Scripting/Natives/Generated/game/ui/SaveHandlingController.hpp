#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/LoadUISendModInfoToUpdateCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MenuGameController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct SaveHandlingController : game::ui::MenuGameController
{
    static constexpr const char* NAME = "gameuiSaveHandlingController";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_108[0x108 - ::RED4ext::Detail::DataSize<game::ui::MenuGameController>];
    game::ui::LoadUISendModInfoToUpdateCallback NeedToDisplayLoadMenuUpdateModsPopup; // 108
#else
    uint8_t unk100[0x108 - 0x100]; // 100
    game::ui::LoadUISendModInfoToUpdateCallback NeedToDisplayLoadMenuUpdateModsPopup; // 108
    uint8_t unk140[0x208 - 0x140]; // 140
#endif
};
RED4EXT_ASSERT_SIZE(SaveHandlingController, 0x208);
} // namespace game::ui
using gameuiSaveHandlingController = game::ui::SaveHandlingController;
} // namespace RED4ext

// clang-format on
