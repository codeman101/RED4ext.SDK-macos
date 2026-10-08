#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EContinuousMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace game::weapon::events
{
struct AIAttackAttemptEvent : red::Event
{
    static constexpr const char* NAME = "gameweaponeventsAIAttackAttemptEvent";
    static constexpr const char* ALIAS = "AIAttackAttemptEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    WeakHandle<game::Object> instigator; // 40
    uint8_t unk_50[0x50 - (0x40 + sizeof(instigator))];
    WeakHandle<game::Object> target; // 50
    uint8_t unk_60[0x60 - (0x50 + sizeof(target))];
    bool isWindUp; // 60
    uint8_t unk_64[0x64 - (0x60 + sizeof(isWindUp))];
    game::EContinuousMode continuousMode; // 64
    uint8_t unk_68[0x68 - (0x64 + sizeof(continuousMode))];
    float minimumOpacity; // 68
#else
    WeakHandle<game::Object> instigator; // 40
    WeakHandle<game::Object> target; // 50
    bool isWindUp; // 60
    uint8_t unk61[0x64 - 0x61]; // 61
    game::EContinuousMode continuousMode; // 64
    float minimumOpacity; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
#endif
};
RED4EXT_ASSERT_SIZE(AIAttackAttemptEvent, 0x70);
} // namespace game::weapon::events
using gameweaponeventsAIAttackAttemptEvent = game::weapon::events::AIAttackAttemptEvent;
using AIAttackAttemptEvent = game::weapon::events::AIAttackAttemptEvent;
} // namespace RED4ext

// clang-format on
