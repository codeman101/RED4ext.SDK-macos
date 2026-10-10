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
struct PanzerEnemyDrone : game::ui::PanzerEnemy
{
    static constexpr const char* NAME = "gameuiPanzerEnemyDrone";
    static constexpr const char* ALIAS = "PanzerEnemyDrone";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_134[0x134 - ::RED4ext::Detail::DataSize<game::ui::PanzerEnemy>];
    float speed; // 134
    uint8_t unk_138[0x138 - (0x134 + sizeof(speed))];
    float shootIntervalMinimum; // 138
    uint8_t unk_13C[0x13C - (0x138 + sizeof(shootIntervalMinimum))];
    float shootIntervalMaximum; // 13C
#else
    float speed; // 138
    float shootIntervalMinimum; // 13C
    float shootIntervalMaximum; // 140
    uint8_t unk144[0x150 - 0x144]; // 144
#endif
};
RED4EXT_ASSERT_SIZE(PanzerEnemyDrone, 0x150);
} // namespace game::ui
using gameuiPanzerEnemyDrone = game::ui::PanzerEnemyDrone;
using PanzerEnemyDrone = game::ui::PanzerEnemyDrone;
} // namespace RED4ext

// clang-format on
