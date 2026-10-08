#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace sense
{
struct PlayerDetectionChangedEvent : red::Event
{
    static constexpr const char* NAME = "sensePlayerDetectionChangedEvent";
    static constexpr const char* ALIAS = "PlayerDetectionChangedEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    float oldDetectionValue; // 40
    uint8_t unk_44[0x44 - (0x40 + sizeof(oldDetectionValue))];
    float newDetectionValue; // 44
#else
    float oldDetectionValue; // 40
    float newDetectionValue; // 44
#endif
};
RED4EXT_ASSERT_SIZE(PlayerDetectionChangedEvent, 0x48);
} // namespace sense
using sensePlayerDetectionChangedEvent = sense::PlayerDetectionChangedEvent;
using PlayerDetectionChangedEvent = sense::PlayerDetectionChangedEvent;
} // namespace RED4ext

// clang-format on
