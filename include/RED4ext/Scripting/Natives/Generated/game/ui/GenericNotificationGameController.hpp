#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/WidgetGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct GenericNotificationGameController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiGenericNotificationGameController";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_F0[0xF0 - ::RED4ext::Detail::DataSize<game::ui::WidgetGameController>];
    ink::CompoundWidgetReference notificationsRoot; // F0
    uint8_t unk_1A2[0x1A2 - (0xF0 + sizeof(notificationsRoot))];
    bool exclusiveProcessing; // 1A2
#else
    uint8_t unkE0[0xF0 - 0xE0]; // E0
    ink::CompoundWidgetReference notificationsRoot; // F0
    uint8_t unk108[0x1A2 - 0x108]; // 108
    bool exclusiveProcessing; // 1A2
    uint8_t unk1A3[0x1A8 - 0x1A3]; // 1A3
#endif
};
RED4EXT_ASSERT_SIZE(GenericNotificationGameController, 0x1A8);
} // namespace game::ui
using gameuiGenericNotificationGameController = game::ui::GenericNotificationGameController;
} // namespace RED4ext

// clang-format on
