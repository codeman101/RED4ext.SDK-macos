#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/HUDGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct CompassWidgetGameController : game::ui::HUDGameController
{
    static constexpr const char* NAME = "gameuiCompassWidgetGameController";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_F8[0xF8 - ::RED4ext::Detail::DataSize<game::ui::HUDGameController>];
    ink::WidgetReference compassWidget; // F8
#else
    ink::WidgetReference compassWidget; // F8
#endif
};
RED4EXT_ASSERT_SIZE(CompassWidgetGameController, 0x110);
} // namespace game::ui
using gameuiCompassWidgetGameController = game::ui::CompassWidgetGameController;
} // namespace RED4ext

// clang-format on
