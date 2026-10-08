#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/GameplayTier.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PSMCombat.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PSMVision.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PSMZones.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/ProjectedHUDGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LinePatternWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetPath.hpp>

namespace RED4ext
{
namespace game::ui
{
struct MappinsContainerController : game::ui::ProjectedHUDGameController
{
    static constexpr const char* NAME = "gameuiMappinsContainerController";
    static constexpr const char* ALIAS = "MappinsContainerController";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_178[0x178 - ::RED4ext::Detail::DataSize<game::ui::ProjectedHUDGameController>];
    ink::WidgetPath spawnContainerPath; // 178
    uint8_t unk_198[0x198 - (0x178 + sizeof(spawnContainerPath))];
    ink::LinePatternWidgetReference gpsQuestPathWidget; // 198
    uint8_t unk_1B0[0x1B0 - (0x198 + sizeof(gpsQuestPathWidget))];
    ink::LinePatternWidgetReference gpsPlayerTrackedPathWidget; // 1B0
    uint8_t unk_1C8[0x1C8 - (0x1B0 + sizeof(gpsPlayerTrackedPathWidget))];
    ink::LinePatternWidgetReference gpsDelamainPathWidget; // 1C8
    uint8_t unk_1E0[0x1E0 - (0x1C8 + sizeof(gpsDelamainPathWidget))];
    ink::LinePatternWidgetReference autodrivePathWidget; // 1E0
    uint8_t unk_2E0[0x2E0 - (0x1E0 + sizeof(autodrivePathWidget))];
    game::PSMVision psmVision; // 2E0
    uint8_t unk_2E4[0x2E4 - (0x2E0 + sizeof(psmVision))];
    game::PSMCombat psmCombat; // 2E4
    uint8_t unk_2E8[0x2E8 - (0x2E4 + sizeof(psmCombat))];
    game::PSMZones psmZone; // 2E8
    uint8_t unk_2EC[0x2EC - (0x2E8 + sizeof(psmZone))];
    GameplayTier tier; // 2EC
#else
    uint8_t unk160[0x178 - 0x160]; // 160
    ink::WidgetPath spawnContainerPath; // 178
    uint8_t unk188[0x198 - 0x188]; // 188
    ink::LinePatternWidgetReference gpsQuestPathWidget; // 198
    ink::LinePatternWidgetReference gpsPlayerTrackedPathWidget; // 1B0
    ink::LinePatternWidgetReference gpsDelamainPathWidget; // 1C8
    ink::LinePatternWidgetReference autodrivePathWidget; // 1E0
    uint8_t unk1F8[0x2E0 - 0x1F8]; // 1F8
    game::PSMVision psmVision; // 2E0
    game::PSMCombat psmCombat; // 2E4
    game::PSMZones psmZone; // 2E8
    GameplayTier tier; // 2EC
    uint8_t unk2F0[0x340 - 0x2F0]; // 2F0
#endif
};
RED4EXT_ASSERT_SIZE(MappinsContainerController, 0x340);
} // namespace game::ui
using gameuiMappinsContainerController = game::ui::MappinsContainerController;
using MappinsContainerController = game::ui::MappinsContainerController;
} // namespace RED4ext

// clang-format on
