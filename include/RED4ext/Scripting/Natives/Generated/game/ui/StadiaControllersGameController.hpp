#if defined(__APPLE__)
#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MenuGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct StadiaControllersGameController : game::ui::MenuGameController
{
    static constexpr const char* NAME = "gameuiStadiaControllersGameController";
    static constexpr const char* ALIAS = "StadiaControllersGameController";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_108[0x108 - ::RED4ext::Detail::DataSize<game::ui::MenuGameController>];
    ink::WidgetReference stadiaControllerPage; // 108
    uint8_t unk_120[0x120 - (0x108 + sizeof(stadiaControllerPage))];
    ink::WidgetReference nintendoControllerPage; // 120
    uint8_t unk_138[0x138 - (0x120 + sizeof(nintendoControllerPage))];
    ink::WidgetReference durangoControllerPage; // 138
    uint8_t unk_150[0x150 - (0x138 + sizeof(durangoControllerPage))];
    ink::WidgetReference orbisControllerPage; // 150
    uint8_t unk_168[0x168 - (0x150 + sizeof(orbisControllerPage))];
    ink::WidgetReference disclaimerText; // 168
#else
    uint8_t unk100[0x108 - 0x100]; // 100
    ink::WidgetReference stadiaControllerPage; // 108
    ink::WidgetReference nintendoControllerPage; // 120
    ink::WidgetReference durangoControllerPage; // 138
    ink::WidgetReference orbisControllerPage; // 150
    ink::WidgetReference disclaimerText; // 168
    uint8_t unk180[0x1B0 - 0x180]; // 180
#endif

};
RED4EXT_ASSERT_SIZE(StadiaControllersGameController, 0x1B0);
} // namespace game::ui
using gameuiStadiaControllersGameController = game::ui::StadiaControllersGameController;
using StadiaControllersGameController = game::ui::StadiaControllersGameController;
} // namespace RED4ext

// clang-format on

#else
#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MenuGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct StadiaControllersGameController : game::ui::MenuGameController
{
    static constexpr const char* NAME = "gameuiStadiaControllersGameController";
    static constexpr const char* ALIAS = "StadiaControllersGameController";

    uint8_t unkF0[0xF8 - 0xF0]; // F0
    ink::WidgetReference stadiaControllerPage; // F8
    ink::WidgetReference nintendoControllerPage; // 110
    ink::WidgetReference durangoControllerPage; // 128
    ink::WidgetReference orbisControllerPage; // 140
    ink::WidgetReference disclaimerText; // 158
    uint8_t unk170[0x1A0 - 0x170]; // 170
};
RED4EXT_ASSERT_SIZE(StadiaControllersGameController, 0x1A0);
} // namespace game::ui
using gameuiStadiaControllersGameController = game::ui::StadiaControllersGameController;
using StadiaControllersGameController = game::ui::StadiaControllersGameController;
} // namespace RED4ext

// clang-format on

#endif
