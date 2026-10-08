#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace vehicle
{
struct MountedWeaponShootEvent : red::Event
{
    static constexpr const char* NAME = "vehicleMountedWeaponShootEvent";
    static constexpr const char* ALIAS = "VehicleMountedWeaponShootEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    TweakDBID weaponID; // 40
    uint8_t unk_48[0x48 - (0x40 + sizeof(weaponID))];
    TweakDBID slotID; // 48
#else
    TweakDBID weaponID; // 40
    TweakDBID slotID; // 48
#endif
};
RED4EXT_ASSERT_SIZE(MountedWeaponShootEvent, 0x50);
} // namespace vehicle
using vehicleMountedWeaponShootEvent = vehicle::MountedWeaponShootEvent;
using VehicleMountedWeaponShootEvent = vehicle::MountedWeaponShootEvent;
} // namespace RED4ext

// clang-format on
