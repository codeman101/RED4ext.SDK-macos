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
struct DamageBlockedByNanoTechPlatesEvent : red::Event
{
    static constexpr const char* NAME = "gameeventsDamageBlockedByNanoTechPlatesEvent";
    static constexpr const char* ALIAS = "DamageBlockedByNanoTechPlatesEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    Handle<game::events::HitEvent> hitEvent; // 40
#else
    Handle<game::events::HitEvent> hitEvent; // 40
#endif
};
RED4EXT_ASSERT_SIZE(DamageBlockedByNanoTechPlatesEvent, 0x50);
} // namespace game::events
using gameeventsDamageBlockedByNanoTechPlatesEvent = game::events::DamageBlockedByNanoTechPlatesEvent;
using DamageBlockedByNanoTechPlatesEvent = game::events::DamageBlockedByNanoTechPlatesEvent;
} // namespace RED4ext

// clang-format on
