#if defined(__APPLE__)
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
    uint8_t unk_100[0x100 - ::RED4ext::Detail::DataSize<game::ui::MenuGameController>];
    ink::CompoundWidgetReference rootWidget; // 100
    uint8_t unk_118[0x118 - (0x100 + sizeof(rootWidget))];
    ink::CompoundWidgetReference flexWidget; // 118
#else
    ink::CompoundWidgetReference rootWidget; // 100
    ink::CompoundWidgetReference flexWidget; // 118
    uint8_t unk130[0x148 - 0x130]; // 130
#endif

};
RED4EXT_ASSERT_SIZE(HudSafezonesEditorGameController, 0x148);
} // namespace game::ui
using gameuiHudSafezonesEditorGameController = game::ui::HudSafezonesEditorGameController;
} // namespace RED4ext

// clang-format on

#else
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

    ink::CompoundWidgetReference rootWidget; // F0
    ink::CompoundWidgetReference flexWidget; // 108
    uint8_t unk120[0x138 - 0x120]; // 120
};
RED4EXT_ASSERT_SIZE(HudSafezonesEditorGameController, 0x138);
} // namespace game::ui
using gameuiHudSafezonesEditorGameController = game::ui::HudSafezonesEditorGameController;
} // namespace RED4ext

// clang-format on

#endif
