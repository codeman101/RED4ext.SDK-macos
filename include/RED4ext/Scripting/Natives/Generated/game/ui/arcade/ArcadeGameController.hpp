#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/WidgetGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/ArcadeMinigame.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ImageWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct ArcadeGameController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiarcadeArcadeGameController";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_130[0x130 - ::RED4ext::Detail::DataSize<game::ui::WidgetGameController>];
    ink::ImageWidgetReference screenTransitionWidget; // 130
    uint8_t unk_148[0x148 - (0x130 + sizeof(screenTransitionWidget))];
    ink::WidgetReference menu; // 148
    uint8_t unk_160[0x160 - (0x148 + sizeof(menu))];
    ink::WidgetReference gameplay; // 160
    uint8_t unk_178[0x178 - (0x160 + sizeof(gameplay))];
    ink::WidgetReference scoreboard; // 178
    uint8_t unk_204[0x204 - (0x178 + sizeof(scoreboard))];
    float defaultScreenTransitionTotalTime; // 204
    uint8_t unk_228[0x228 - (0x204 + sizeof(defaultScreenTransitionTotalTime))];
    game::ui::arcade::ArcadeMinigame minigame; // 228
#else
    uint8_t unkE0[0x130 - 0xE0]; // E0
    ink::ImageWidgetReference screenTransitionWidget; // 130
    ink::WidgetReference menu; // 148
    ink::WidgetReference gameplay; // 160
    ink::WidgetReference scoreboard; // 178
    uint8_t unk190[0x204 - 0x190]; // 190
    float defaultScreenTransitionTotalTime; // 204
    uint8_t unk208[0x228 - 0x208]; // 208
    game::ui::arcade::ArcadeMinigame minigame; // 228
    uint8_t unk22C[0x238 - 0x22C]; // 22C
#endif
};
RED4EXT_ASSERT_SIZE(ArcadeGameController, 0x238);
} // namespace game::ui::arcade
using gameuiarcadeArcadeGameController = game::ui::arcade::ArcadeGameController;
} // namespace RED4ext

// clang-format on
