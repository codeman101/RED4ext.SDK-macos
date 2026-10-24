#if defined(__APPLE__)
#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data {
enum class PerkWeaponGroupType : int32_t
{
    AssaultRiflesPerkWeaponGroup = 0,
    BladesPerkWeaponGroup = 1,
    BluntsPerkWeaponGroup = 2,
    BodyGunsPerkWeaponGroup = 3,
    CoolDualWieldingPerkWeaponGroup = 4,
    CoolGunsPerkWeaponGroup = 5,
    HandgunsPerkWeaponGroup = 6,
    LMGsPerkWeaponGroup = 7,
    PrecisionGunsPerkWeaponGroup = 8,
    ReflexesGunsPerkWeaponGroup = 9,
    SMGsPerkWeaponGroup = 10,
    ShotgunsPerkWeaponGroup = 11,
    SmartGunsPerkWeaponGroup = 12,
    TechGunsPerkWeaponGroup = 13,
    ThrowablePerkWeaponGroup = 14,
    Count = 15,
    Invalid = 16,
};
} // namespace game::data
using gamedataPerkWeaponGroupType = game::data::PerkWeaponGroupType;
} // namespace RED4ext

// clang-format on

#else
#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data {
enum class PerkWeaponGroupType : int32_t
{
    AssaultRiflesPerkWeaponGroup = 0,
    BladesPerkWeaponGroup = 1,
    BluntsPerkWeaponGroup = 2,
    BodyGunsPerkWeaponGroup = 3,
    CoolGunsPerkWeaponGroup = 4,
    HandgunsPerkWeaponGroup = 5,
    LMGsPerkWeaponGroup = 6,
    PrecisionGunsPerkWeaponGroup = 7,
    ReflexesGunsPerkWeaponGroup = 8,
    SMGsPerkWeaponGroup = 9,
    ShotgunsPerkWeaponGroup = 10,
    SmartGunsPerkWeaponGroup = 11,
    TechGunsPerkWeaponGroup = 12,
    ThrowablePerkWeaponGroup = 13,
    Count = 14,
    Invalid = 15,
};
} // namespace game::data
using gamedataPerkWeaponGroupType = game::data::PerkWeaponGroupType;
} // namespace RED4ext

// clang-format on

#endif
