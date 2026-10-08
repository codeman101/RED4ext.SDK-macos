#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/WidgetGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct CyberwareBreachGameController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiCyberwareBreachGameController";
    static constexpr const char* ALIAS = "gameaiCyberwareBreachGameController";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_E0[0xE0 - ::RED4ext::Detail::DataSize<game::ui::WidgetGameController>];
    ink::WidgetReference strokeHealthDepleation; // E0
    uint8_t unk_F8[0xF8 - (0xE0 + sizeof(strokeHealthDepleation))];
    Vector2 adjustedScreenPosition; // F8
    uint8_t unk_114[0x114 - (0xF8 + sizeof(adjustedScreenPosition))];
    float maxHealth; // 114
    uint8_t unk_118[0x118 - (0x114 + sizeof(maxHealth))];
    float currentHealth; // 118
    uint8_t unk_11C[0x11C - (0x118 + sizeof(currentHealth))];
    float lastHealth; // 11C
#else
    ink::WidgetReference strokeHealthDepleation; // E0
    Vector2 adjustedScreenPosition; // F8
    uint8_t unk100[0x114 - 0x100]; // 100
    float maxHealth; // 114
    float currentHealth; // 118
    float lastHealth; // 11C
    uint8_t unk120[0x128 - 0x120]; // 120
#endif
};
RED4EXT_ASSERT_SIZE(CyberwareBreachGameController, 0x128);
} // namespace game::ui
using gameuiCyberwareBreachGameController = game::ui::CyberwareBreachGameController;
using gameaiCyberwareBreachGameController = game::ui::CyberwareBreachGameController;
} // namespace RED4ext

// clang-format on
