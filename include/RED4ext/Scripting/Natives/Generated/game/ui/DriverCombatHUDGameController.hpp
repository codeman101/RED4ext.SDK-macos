#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/HUDGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct DriverCombatHUDGameController : game::ui::HUDGameController
{
    static constexpr const char* NAME = "gameuiDriverCombatHUDGameController";
    static constexpr const char* ALIAS = "DriverCombatHUDGameController";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_F8[0xF8 - ::RED4ext::Detail::DataSize<game::ui::HUDGameController>];
    ink::WidgetReference crosshairBrackets; // F8
    uint8_t unk_110[0x110 - (0xF8 + sizeof(crosshairBrackets))];
    ink::WidgetReference crosshairBracketsTrail; // 110
    uint8_t unk_128[0x128 - (0x110 + sizeof(crosshairBracketsTrail))];
    ink::WidgetReference crosshairBracketsFlairLeft; // 128
    uint8_t unk_140[0x140 - (0x128 + sizeof(crosshairBracketsFlairLeft))];
    ink::WidgetReference crosshairBracketsFlairRight; // 140
    uint8_t unk_158[0x158 - (0x140 + sizeof(crosshairBracketsFlairRight))];
    DynArray<ink::WidgetReference> bracketsTransitionDetailsWidgetList; // 158
    uint8_t unk_250[0x250 - (0x158 + sizeof(bracketsTransitionDetailsWidgetList))];
    Vector2 crosshairBracketsMinSize; // 250
    uint8_t unk_264[0x264 - (0x250 + sizeof(crosshairBracketsMinSize))];
    float crosshairBracketsInstantSnapValue; // 264
    uint8_t unk_268[0x268 - (0x264 + sizeof(crosshairBracketsInstantSnapValue))];
    float crosshairBracketsInOutTransitionTime; // 268
    uint8_t unk_26C[0x26C - (0x268 + sizeof(crosshairBracketsInOutTransitionTime))];
    float crosshairBracketsIntroSizeMultiplier; // 26C
    uint8_t unk_270[0x270 - (0x26C + sizeof(crosshairBracketsIntroSizeMultiplier))];
    float crosshairBracketsTrailTransitionTime; // 270
    uint8_t unk_278[0x278 - (0x270 + sizeof(crosshairBracketsTrailTransitionTime))];
    float crosshairReducedOpacity; // 278
    uint8_t unk_27C[0x27C - (0x278 + sizeof(crosshairReducedOpacity))];
    float unifomSafeZone; // 27C
    uint8_t unk_280[0x280 - (0x27C + sizeof(unifomSafeZone))];
    bool inWeaponizedVehicle; // 280
    uint8_t unk_281[0x281 - (0x280 + sizeof(inWeaponizedVehicle))];
    bool inDriverCombat; // 281
    uint8_t unk_282[0x282 - (0x281 + sizeof(inDriverCombat))];
    bool inReloadState; // 282
    uint8_t unk_283[0x283 - (0x282 + sizeof(inReloadState))];
    bool inSafeState; // 283
#else
    ink::WidgetReference crosshairBrackets; // F8
    ink::WidgetReference crosshairBracketsTrail; // 110
    ink::WidgetReference crosshairBracketsFlairLeft; // 128
    ink::WidgetReference crosshairBracketsFlairRight; // 140
    DynArray<ink::WidgetReference> bracketsTransitionDetailsWidgetList; // 158
    uint8_t unk168[0x250 - 0x168]; // 168
    Vector2 crosshairBracketsMinSize; // 250
    uint8_t unk258[0x264 - 0x258]; // 258
    float crosshairBracketsInstantSnapValue; // 264
    float crosshairBracketsInOutTransitionTime; // 268
    float crosshairBracketsIntroSizeMultiplier; // 26C
    float crosshairBracketsTrailTransitionTime; // 270
    uint8_t unk274[0x278 - 0x274]; // 274
    float crosshairReducedOpacity; // 278
    float unifomSafeZone; // 27C
    bool inWeaponizedVehicle; // 280
    bool inDriverCombat; // 281
    bool inReloadState; // 282
    bool inSafeState; // 283
    uint8_t unk284[0x288 - 0x284]; // 284
#endif
};
RED4EXT_ASSERT_SIZE(DriverCombatHUDGameController, 0x288);
} // namespace game::ui
using gameuiDriverCombatHUDGameController = game::ui::DriverCombatHUDGameController;
using DriverCombatHUDGameController = game::ui::DriverCombatHUDGameController;
} // namespace RED4ext

// clang-format on
