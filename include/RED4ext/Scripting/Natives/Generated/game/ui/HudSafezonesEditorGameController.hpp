#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MenuGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct HudSafezonesEditorGameController : game::ui::MenuGameController
{
    static constexpr const char* NAME = "gameuiHudSafezonesEditorGameController";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_F0[0xF0 - ::RED4ext::Detail::DataSize<game::ui::MenuGameController>];
    ink::CompoundWidgetReference rootWidget; // F0
    uint8_t unk_108[0x108 - (0xF0 + sizeof(rootWidget))];
    ink::CompoundWidgetReference flexWidget; // 108
#else
    ink::CompoundWidgetReference rootWidget; // F0
    ink::CompoundWidgetReference flexWidget; // 108
    uint8_t unk120[0x138 - 0x120]; // 120
#endif
};
RED4EXT_ASSERT_SIZE(HudSafezonesEditorGameController, 0x138);
} // namespace game::ui
using gameuiHudSafezonesEditorGameController = game::ui::HudSafezonesEditorGameController;
} // namespace RED4ext

// clang-format on
