#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TrafficLightColor.hpp>

namespace RED4ext
{
namespace game::interactions
{
struct CrosswalkEvent : red::Event
{
    static constexpr const char* NAME = "gameinteractionsCrosswalkEvent";
    static constexpr const char* ALIAS = "CrosswalkEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    world::TrafficLightColor trafficLightColor; // 40
    uint8_t unk_44[0x44 - (0x40 + sizeof(trafficLightColor))];
    world::TrafficLightColor oldTrafficLightColor; // 44
    uint8_t unk_48[0x48 - (0x44 + sizeof(oldTrafficLightColor))];
    float totalDistance; // 48
    uint8_t unk_4C[0x4C - (0x48 + sizeof(totalDistance))];
    float distanceLeft; // 4C
#else
    world::TrafficLightColor trafficLightColor; // 40
    world::TrafficLightColor oldTrafficLightColor; // 44
    float totalDistance; // 48
    float distanceLeft; // 4C
#endif
};
RED4EXT_ASSERT_SIZE(CrosswalkEvent, 0x50);
} // namespace game::interactions
using gameinteractionsCrosswalkEvent = game::interactions::CrosswalkEvent;
using CrosswalkEvent = game::interactions::CrosswalkEvent;
} // namespace RED4ext

// clang-format on
