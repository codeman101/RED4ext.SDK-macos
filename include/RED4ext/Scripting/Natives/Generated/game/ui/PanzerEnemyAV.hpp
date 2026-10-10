#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/PanzerEnemy.hpp>

namespace RED4ext
{
namespace game::ui
{
struct PanzerEnemyAV : game::ui::PanzerEnemy
{
    static constexpr const char* NAME = "gameuiPanzerEnemyAV";
    static constexpr const char* ALIAS = "PanzerEnemyAV";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_134[0x134 - ::RED4ext::Detail::DataSize<game::ui::PanzerEnemy>];
    float speed; // 134
    uint8_t unk_138[0x138 - (0x134 + sizeof(speed))];
    uint32_t shotsAmount; // 138
    uint8_t unk_13C[0x13C - (0x138 + sizeof(shotsAmount))];
    float longShotInterval; // 13C
    uint8_t unk_140[0x140 - (0x13C + sizeof(longShotInterval))];
    float shortShotInterval; // 140
#else
    float speed; // 138
    uint32_t shotsAmount; // 13C
    float longShotInterval; // 140
    float shortShotInterval; // 144
    uint8_t unk148[0x150 - 0x148]; // 148
#endif
};
RED4EXT_ASSERT_SIZE(PanzerEnemyAV, 0x150);
} // namespace game::ui
using gameuiPanzerEnemyAV = game::ui::PanzerEnemyAV;
using PanzerEnemyAV = game::ui::PanzerEnemyAV;
} // namespace RED4ext

// clang-format on
