#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Matrix.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/projectile/SetUpEvent.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/projectile/WeaponParams.hpp>

namespace RED4ext
{
namespace game::projectile
{
struct __declspec(align(0x10)) ShootEvent : game::projectile::SetUpEvent
{
    static constexpr const char* NAME = "gameprojectileShootEvent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_B0[0xB0 - ::RED4ext::Detail::DataSize<game::projectile::SetUpEvent>];
    Matrix localToWorld; // B0
    uint8_t unk_F0[0xF0 - (0xB0 + sizeof(localToWorld))];
    Vector4 startPoint; // F0
    uint8_t unk_100[0x100 - (0xF0 + sizeof(startPoint))];
    Vector4 startVelocity; // 100
    uint8_t unk_110[0x110 - (0x100 + sizeof(startVelocity))];
    Vector4 weaponVelocity; // 110
    uint8_t unk_120[0x120 - (0x110 + sizeof(weaponVelocity))];
    game::projectile::WeaponParams params; // 120
#else
    Matrix localToWorld; // B0
    Vector4 startPoint; // F0
    Vector4 startVelocity; // 100
    Vector4 weaponVelocity; // 110
    game::projectile::WeaponParams params; // 120
#endif
};
RED4EXT_ASSERT_SIZE(ShootEvent, 0x1E0);
} // namespace game::projectile
using gameprojectileShootEvent = game::projectile::ShootEvent;
} // namespace RED4ext

// clang-format on
