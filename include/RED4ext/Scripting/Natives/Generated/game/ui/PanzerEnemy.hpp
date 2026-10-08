#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/SideScrollerMiniGameDynObjectLogicAdvanced.hpp>

namespace RED4ext
{
namespace game::ui
{
struct PanzerEnemy : game::ui::SideScrollerMiniGameDynObjectLogicAdvanced
{
    static constexpr const char* NAME = "gameuiPanzerEnemy";
    static constexpr const char* ALIAS = "PanzerEnemy";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_DC[0xDC - ::RED4ext::Detail::DataSize<game::ui::SideScrollerMiniGameDynObjectLogicAdvanced>];
    int32_t health; // DC
    uint8_t unk_E0[0xE0 - (0xDC + sizeof(health))];
    uint32_t score; // E0
    uint8_t unk_E4[0xE4 - (0xE0 + sizeof(score))];
    Vector2 shootPoint; // E4
    uint8_t unk_EC[0xEC - (0xE4 + sizeof(shootPoint))];
    float bulletSpeed; // EC
    uint8_t unk_F0[0xF0 - (0xEC + sizeof(bulletSpeed))];
    CName bulletLibraryName; // F0
    uint8_t unk_F8[0xF8 - (0xF0 + sizeof(bulletLibraryName))];
    CName gameLayerName; // F8
    uint8_t unk_100[0x100 - (0xF8 + sizeof(gameLayerName))];
    CName explosionLibraryName; // 100
    uint8_t unk_108[0x108 - (0x100 + sizeof(explosionLibraryName))];
    CName lifeBonusLibraryName; // 108
    uint8_t unk_110[0x110 - (0x108 + sizeof(lifeBonusLibraryName))];
    uint32_t lifeBonusChanceCoeff; // 110
    uint8_t unk_118[0x118 - (0x110 + sizeof(lifeBonusChanceCoeff))];
    CName scoreBonusLibraryName; // 118
    uint8_t unk_120[0x120 - (0x118 + sizeof(scoreBonusLibraryName))];
    uint32_t scoreBonusChanceCoeff; // 120
    uint8_t unk_124[0x124 - (0x120 + sizeof(scoreBonusChanceCoeff))];
    uint32_t score50ChanceCoeff; // 124
    uint8_t unk_128[0x128 - (0x124 + sizeof(score50ChanceCoeff))];
    uint32_t score100ChanceCoeff; // 128
    uint8_t unk_12C[0x12C - (0x128 + sizeof(score100ChanceCoeff))];
    uint32_t score200ChanceCoeff; // 12C
    uint8_t unk_130[0x130 - (0x12C + sizeof(score200ChanceCoeff))];
    uint32_t noBonusChanceCoeff; // 130
#else
    uint8_t unkD0[0xDC - 0xD0]; // D0
    int32_t health; // DC
    uint32_t score; // E0
    Vector2 shootPoint; // E4
    float bulletSpeed; // EC
    CName bulletLibraryName; // F0
    CName gameLayerName; // F8
    CName explosionLibraryName; // 100
    CName lifeBonusLibraryName; // 108
    uint32_t lifeBonusChanceCoeff; // 110
    uint8_t unk114[0x118 - 0x114]; // 114
    CName scoreBonusLibraryName; // 118
    uint32_t scoreBonusChanceCoeff; // 120
    uint32_t score50ChanceCoeff; // 124
    uint32_t score100ChanceCoeff; // 128
    uint32_t score200ChanceCoeff; // 12C
    uint32_t noBonusChanceCoeff; // 130
    uint8_t unk134[0x138 - 0x134]; // 134
#endif
};
RED4EXT_ASSERT_SIZE(PanzerEnemy, 0x138);
} // namespace game::ui
using gameuiPanzerEnemy = game::ui::PanzerEnemy;
using PanzerEnemy = game::ui::PanzerEnemy;
} // namespace RED4ext

// clang-format on
