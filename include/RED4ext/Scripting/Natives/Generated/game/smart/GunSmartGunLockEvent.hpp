#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::smart
{
struct GunSmartGunLockEvent : red::Event
{
    static constexpr const char* NAME = "gamesmartGunSmartGunLockEvent";
    static constexpr const char* ALIAS = "SmartGunLockEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    bool locked; // 40
    uint8_t unk_41[0x41 - (0x40 + sizeof(locked))];
    bool lockedOnByPlayer; // 41
#else
    bool locked; // 40
    bool lockedOnByPlayer; // 41
    uint8_t unk42[0x48 - 0x42]; // 42
#endif
};
RED4EXT_ASSERT_SIZE(GunSmartGunLockEvent, 0x48);
} // namespace game::smart
using gamesmartGunSmartGunLockEvent = game::smart::GunSmartGunLockEvent;
using SmartGunLockEvent = game::smart::GunSmartGunLockEvent;
} // namespace RED4ext

// clang-format on
