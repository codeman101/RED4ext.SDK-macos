#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/events/StatusEffectEvent.hpp>

namespace RED4ext
{
namespace game::events
{
struct ApplyStatusEffectEvent : game::events::StatusEffectEvent
{
    static constexpr const char* NAME = "gameeventsApplyStatusEffectEvent";
    static constexpr const char* ALIAS = "ApplyStatusEffectEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<game::events::StatusEffectEvent>];
    ent::EntityID instigatorEntityID; // 60
    uint8_t unk_68[0x68 - (0x60 + sizeof(instigatorEntityID))];
    ent::EntityID proxyEntityID; // 68
    uint8_t unk_70[0x70 - (0x68 + sizeof(proxyEntityID))];
    bool isNewApplication; // 70
    uint8_t unk_71[0x71 - (0x70 + sizeof(isNewApplication))];
    bool isAppliedOnSpawn; // 71
#else
    ent::EntityID instigatorEntityID; // 60
    ent::EntityID proxyEntityID; // 68
    bool isNewApplication; // 70
    bool isAppliedOnSpawn; // 71
    uint8_t unk72[0x78 - 0x72]; // 72
#endif
};
RED4EXT_ASSERT_SIZE(ApplyStatusEffectEvent, 0x78);
} // namespace game::events
using gameeventsApplyStatusEffectEvent = game::events::ApplyStatusEffectEvent;
using ApplyStatusEffectEvent = game::events::ApplyStatusEffectEvent;
} // namespace RED4ext

// clang-format on
