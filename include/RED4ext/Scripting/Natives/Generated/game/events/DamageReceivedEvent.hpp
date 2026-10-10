#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::events { struct HitEvent; }

namespace game::events
{
struct DamageReceivedEvent : red::Event
{
    static constexpr const char* NAME = "gameeventsDamageReceivedEvent";
    static constexpr const char* ALIAS = "gameDamageReceivedEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    Handle<game::events::HitEvent> hitEvent; // 40
    uint8_t unk_50[0x50 - (0x40 + sizeof(hitEvent))];
    float totalDamageReceived; // 50
#else
    Handle<game::events::HitEvent> hitEvent; // 40
    float totalDamageReceived; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
#endif
};
RED4EXT_ASSERT_SIZE(DamageReceivedEvent, 0x58);
} // namespace game::events
using gameeventsDamageReceivedEvent = game::events::DamageReceivedEvent;
using gameDamageReceivedEvent = game::events::DamageReceivedEvent;
} // namespace RED4ext

// clang-format on
