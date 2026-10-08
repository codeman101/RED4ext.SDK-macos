#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/SideScrollerMiniGameLogicControllerAdvanced.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextWidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct PanzerGameLogicController : game::ui::SideScrollerMiniGameLogicControllerAdvanced
{
    static constexpr const char* NAME = "gameuiPanzerGameLogicController";
    static constexpr const char* ALIAS = "PanzerGameLogicController";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_17C[0x17C - ::RED4ext::Detail::DataSize<game::ui::SideScrollerMiniGameLogicControllerAdvanced>];
    float gameOverDelay; // 17C
    uint8_t unk_188[0x188 - (0x17C + sizeof(gameOverDelay))];
    CName mainMenuLibraryName; // 188
    uint8_t unk_190[0x190 - (0x188 + sizeof(mainMenuLibraryName))];
    CName scoreboardLibraryName; // 190
    uint8_t unk_198[0x198 - (0x190 + sizeof(scoreboardLibraryName))];
    CName panelsLayer; // 198
    uint8_t unk_1A0[0x1A0 - (0x198 + sizeof(panelsLayer))];
    CName gameLayer; // 1A0
    uint8_t unk_1A8[0x1A8 - (0x1A0 + sizeof(gameLayer))];
    CName cloudsLayer; // 1A8
    uint8_t unk_1B0[0x1B0 - (0x1A8 + sizeof(cloudsLayer))];
    CName backgroundLibraryName; // 1B0
    uint8_t unk_1B8[0x1B8 - (0x1B0 + sizeof(backgroundLibraryName))];
    DynArray<CName> cloudsLibraryNames; // 1B8
    uint8_t unk_1C8[0x1C8 - (0x1B8 + sizeof(cloudsLibraryNames))];
    float minCloudSpawnInterval; // 1C8
    uint8_t unk_1CC[0x1CC - (0x1C8 + sizeof(minCloudSpawnInterval))];
    float maxCloudSpawnInterval; // 1CC
    uint8_t unk_1D0[0x1D0 - (0x1CC + sizeof(maxCloudSpawnInterval))];
    float minCloudSpeed; // 1D0
    uint8_t unk_1D4[0x1D4 - (0x1D0 + sizeof(minCloudSpeed))];
    float maxCloudSpeed; // 1D4
    uint8_t unk_1D8[0x1D8 - (0x1D4 + sizeof(maxCloudSpeed))];
    ink::TextWidgetReference scoreCounter; // 1D8
    uint8_t unk_1F0[0x1F0 - (0x1D8 + sizeof(scoreCounter))];
    ink::TextWidgetReference livesCounter; // 1F0
    uint8_t unk_208[0x208 - (0x1F0 + sizeof(livesCounter))];
    CName moveUpKey; // 208
    uint8_t unk_210[0x210 - (0x208 + sizeof(moveUpKey))];
    CName moveDownKey; // 210
    uint8_t unk_218[0x218 - (0x210 + sizeof(moveDownKey))];
    CName moveLeftKey; // 218
    uint8_t unk_220[0x220 - (0x218 + sizeof(moveLeftKey))];
    CName moveRightKey; // 220
    uint8_t unk_228[0x228 - (0x220 + sizeof(moveRightKey))];
    CName shootKey; // 228
    uint8_t unk_230[0x230 - (0x228 + sizeof(shootKey))];
    CName backKey; // 230
    uint8_t unk_238[0x238 - (0x230 + sizeof(backKey))];
    CName submitKey; // 238
    uint8_t unk_240[0x240 - (0x238 + sizeof(submitKey))];
    float axisDeadZone; // 240
    uint8_t unk_248[0x248 - (0x240 + sizeof(axisDeadZone))];
    CName moveXAxis; // 248
    uint8_t unk_250[0x250 - (0x248 + sizeof(moveXAxis))];
    CName moveYAxis; // 250
    uint8_t unk_258[0x258 - (0x250 + sizeof(moveYAxis))];
    CName shootAxis; // 258
    uint8_t unk_260[0x260 - (0x258 + sizeof(shootAxis))];
    CName droneLibraryName; // 260
    uint8_t unk_268[0x268 - (0x260 + sizeof(droneLibraryName))];
    float minDroneSpawnInterval; // 268
    uint8_t unk_26C[0x26C - (0x268 + sizeof(minDroneSpawnInterval))];
    float maxDroneSpawnInterval; // 26C
    uint8_t unk_270[0x270 - (0x26C + sizeof(maxDroneSpawnInterval))];
    CName avLibraryName; // 270
    uint8_t unk_278[0x278 - (0x270 + sizeof(avLibraryName))];
    float minAvSpawnInterval; // 278
    uint8_t unk_27C[0x27C - (0x278 + sizeof(minAvSpawnInterval))];
    float maxAvSpawnInterval; // 27C
#else
    uint8_t unk148[0x184 - 0x148]; // 148
    float gameOverDelay; // 184
    uint8_t unk188[0x190 - 0x188]; // 188
    CName mainMenuLibraryName; // 190
    CName scoreboardLibraryName; // 198
    CName panelsLayer; // 1A0
    CName gameLayer; // 1A8
    CName cloudsLayer; // 1B0
    CName backgroundLibraryName; // 1B8
    DynArray<CName> cloudsLibraryNames; // 1C0
    float minCloudSpawnInterval; // 1D0
    float maxCloudSpawnInterval; // 1D4
    float minCloudSpeed; // 1D8
    float maxCloudSpeed; // 1DC
    ink::TextWidgetReference scoreCounter; // 1E0
    ink::TextWidgetReference livesCounter; // 1F8
    CName moveUpKey; // 210
    CName moveDownKey; // 218
    CName moveLeftKey; // 220
    CName moveRightKey; // 228
    CName shootKey; // 230
    CName backKey; // 238
    CName submitKey; // 240
    float axisDeadZone; // 248
    uint8_t unk24C[0x250 - 0x24C]; // 24C
    CName moveXAxis; // 250
    CName moveYAxis; // 258
    CName shootAxis; // 260
    CName droneLibraryName; // 268
    float minDroneSpawnInterval; // 270
    float maxDroneSpawnInterval; // 274
    CName avLibraryName; // 278
    float minAvSpawnInterval; // 280
    float maxAvSpawnInterval; // 284
#endif
};
RED4EXT_ASSERT_SIZE(PanzerGameLogicController, 0x288);
} // namespace game::ui
using gameuiPanzerGameLogicController = game::ui::PanzerGameLogicController;
using PanzerGameLogicController = game::ui::PanzerGameLogicController;
} // namespace RED4ext

// clang-format on
