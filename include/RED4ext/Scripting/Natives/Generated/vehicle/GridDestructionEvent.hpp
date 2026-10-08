#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace vehicle
{
struct GridDestructionEvent : red::Event
{
    static constexpr const char* NAME = "vehicleGridDestructionEvent";
    static constexpr const char* ALIAS = "VehicleGridDestructionEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    NativeArray<float, 16> state; // 40
    uint8_t unk_80[0x80 - (0x40 + sizeof(state))];
    NativeArray<float, 16> rawChange; // 80
    uint8_t unk_C0[0xC0 - (0x80 + sizeof(rawChange))];
    NativeArray<float, 16> desiredChange; // C0
    uint8_t unk_100[0x100 - (0xC0 + sizeof(desiredChange))];
    float damageMultiplier; // 100
    uint8_t unk_104[0x104 - (0x100 + sizeof(damageMultiplier))];
    Vector3 impactPoint; // 104
    uint8_t unk_110[0x110 - (0x104 + sizeof(impactPoint))];
    WeakHandle<game::Object> otherVehicle; // 110
    uint8_t unk_120[0x120 - (0x110 + sizeof(otherVehicle))];
    bool rammedOtherVehicle; // 120
    uint8_t unk_121[0x121 - (0x120 + sizeof(rammedOtherVehicle))];
    bool otherVehicleRammed; // 121
#else
    NativeArray<float, 16> state; // 40
    NativeArray<float, 16> rawChange; // 80
    NativeArray<float, 16> desiredChange; // C0
    float damageMultiplier; // 100
    Vector3 impactPoint; // 104
    WeakHandle<game::Object> otherVehicle; // 110
    bool rammedOtherVehicle; // 120
    bool otherVehicleRammed; // 121
    uint8_t unk122[0x128 - 0x122]; // 122
#endif
};
RED4EXT_ASSERT_SIZE(GridDestructionEvent, 0x128);
} // namespace vehicle
using vehicleGridDestructionEvent = vehicle::GridDestructionEvent;
using VehicleGridDestructionEvent = vehicle::GridDestructionEvent;
} // namespace RED4ext

// clang-format on
