#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
struct IScriptable;

namespace ent::events
{
struct __declspec(align(0x10)) PhysicalCollisionEvent : red::Event
{
    static constexpr const char* NAME = "enteventsPhysicalCollisionEvent";
    static constexpr const char* ALIAS = "PhysicalCollisionEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    WeakHandle<IScriptable> myComponent; // 40
    uint8_t unk_50[0x50 - (0x40 + sizeof(myComponent))];
    WeakHandle<IScriptable> otherEntity; // 50
    uint8_t unk_60[0x60 - (0x50 + sizeof(otherEntity))];
    WeakHandle<IScriptable> otherComponent; // 60
    uint8_t unk_70[0x70 - (0x60 + sizeof(otherComponent))];
    Vector4 worldPosition; // 70
    uint8_t unk_80[0x80 - (0x70 + sizeof(worldPosition))];
    Vector4 worldNormal; // 80
    uint8_t unk_90[0x90 - (0x80 + sizeof(worldNormal))];
    Vector4 deltaVelocity; // 90
    uint8_t unk_A0[0xA0 - (0x90 + sizeof(deltaVelocity))];
    float impulse; // A0
#else
    WeakHandle<IScriptable> myComponent; // 40
    WeakHandle<IScriptable> otherEntity; // 50
    WeakHandle<IScriptable> otherComponent; // 60
    Vector4 worldPosition; // 70
    Vector4 worldNormal; // 80
    Vector4 deltaVelocity; // 90
    float impulse; // A0
    uint8_t unkA4[0xB0 - 0xA4]; // A4
#endif
};
RED4EXT_ASSERT_SIZE(PhysicalCollisionEvent, 0xB0);
} // namespace ent::events
using enteventsPhysicalCollisionEvent = ent::events::PhysicalCollisionEvent;
using PhysicalCollisionEvent = ent::events::PhysicalCollisionEvent;
} // namespace RED4ext

// clang-format on
