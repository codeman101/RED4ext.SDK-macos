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
struct PanzerPlayerController : game::ui::SideScrollerMiniGameDynObjectLogicAdvanced
{
    static constexpr const char* NAME = "gameuiPanzerPlayerController";
    static constexpr const char* ALIAS = "PanzerPlayerController";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_F0[0xF0 - ::RED4ext::Detail::DataSize<game::ui::SideScrollerMiniGameDynObjectLogicAdvanced>];
    float bulletSpeed; // F0
    uint8_t unk_F4[0xF4 - (0xF0 + sizeof(bulletSpeed))];
    Vector2 bulletSpawnOffset; // F4
    uint8_t unk_100[0x100 - (0xF4 + sizeof(bulletSpawnOffset))];
    CName bulletLibraryname; // 100
    uint8_t unk_108[0x108 - (0x100 + sizeof(bulletLibraryname))];
    float shootInterval; // 108
    uint8_t unk_110[0x110 - (0x108 + sizeof(shootInterval))];
    CName gameLayerName; // 110
    uint8_t unk_118[0x118 - (0x110 + sizeof(gameLayerName))];
    CName invulnerableAnimationName; // 118
    uint8_t unk_120[0x120 - (0x118 + sizeof(invulnerableAnimationName))];
    CName explosionLibraryName; // 120
#else
    uint8_t unkD0[0xF0 - 0xD0]; // D0
    float bulletSpeed; // F0
    Vector2 bulletSpawnOffset; // F4
    uint8_t unkFC[0x100 - 0xFC]; // FC
    CName bulletLibraryname; // 100
    float shootInterval; // 108
    uint8_t unk10C[0x110 - 0x10C]; // 10C
    CName gameLayerName; // 110
    CName invulnerableAnimationName; // 118
    CName explosionLibraryName; // 120
#endif
};
RED4EXT_ASSERT_SIZE(PanzerPlayerController, 0x128);
} // namespace game::ui
using gameuiPanzerPlayerController = game::ui::PanzerPlayerController;
using PanzerPlayerController = game::ui::PanzerPlayerController;
} // namespace RED4ext

// clang-format on
