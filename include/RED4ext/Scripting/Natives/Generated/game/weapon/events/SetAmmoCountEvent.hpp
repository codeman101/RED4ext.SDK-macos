#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::weapon::events
{
struct SetAmmoCountEvent : red::Event
{
    static constexpr const char* NAME = "gameweaponeventsSetAmmoCountEvent";
    static constexpr const char* ALIAS = "SetAmmoCountEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    ItemID ammoTypeID; // 40
    uint8_t unk_50[0x50 - (0x40 + sizeof(ammoTypeID))];
    uint32_t count; // 50
#else
    ItemID ammoTypeID; // 40
    uint32_t count; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
#endif
};
RED4EXT_ASSERT_SIZE(SetAmmoCountEvent, 0x58);
} // namespace game::weapon::events
using gameweaponeventsSetAmmoCountEvent = game::weapon::events::SetAmmoCountEvent;
using SetAmmoCountEvent = game::weapon::events::SetAmmoCountEvent;
} // namespace RED4ext

// clang-format on
