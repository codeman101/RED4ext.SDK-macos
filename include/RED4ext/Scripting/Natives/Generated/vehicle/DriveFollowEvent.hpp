#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace vehicle
{
struct DriveFollowEvent : red::Event
{
    static constexpr const char* NAME = "vehicleDriveFollowEvent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    WeakHandle<game::Object> targetObjToFollow; // 40
    uint8_t unk_54[0x54 - (0x40 + sizeof(targetObjToFollow))];
    float distanceMin; // 54
    uint8_t unk_58[0x58 - (0x54 + sizeof(distanceMin))];
    float distanceMax; // 58
    uint8_t unk_5C[0x5C - (0x58 + sizeof(distanceMax))];
    bool stopWhenTargetReached; // 5C
    uint8_t unk_5D[0x5D - (0x5C + sizeof(stopWhenTargetReached))];
    bool useTraffic; // 5D
#else
    WeakHandle<game::Object> targetObjToFollow; // 40
    uint8_t unk50[0x54 - 0x50]; // 50
    float distanceMin; // 54
    float distanceMax; // 58
    bool stopWhenTargetReached; // 5C
    bool useTraffic; // 5D
    uint8_t unk5E[0x60 - 0x5E]; // 5E
#endif
};
RED4EXT_ASSERT_SIZE(DriveFollowEvent, 0x60);
} // namespace vehicle
using vehicleDriveFollowEvent = vehicle::DriveFollowEvent;
} // namespace RED4ext

// clang-format on
