#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent::events
{
struct PhysicalImpulseEvent : red::Event
{
    static constexpr const char* NAME = "enteventsPhysicalImpulseEvent";
    static constexpr const char* ALIAS = "PhysicalImpulseEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    uint32_t bodyIndex; // 40
    uint8_t unk_44[0x44 - (0x40 + sizeof(bodyIndex))];
    Vector3 worldImpulse; // 44
    uint8_t unk_50[0x50 - (0x44 + sizeof(worldImpulse))];
    Vector3 worldPosition; // 50
    uint8_t unk_5C[0x5C - (0x50 + sizeof(worldPosition))];
    float radius; // 5C
    uint8_t unk_60[0x60 - (0x5C + sizeof(radius))];
    uint32_t shapeIndex; // 60
#else
    uint32_t bodyIndex; // 40
    Vector3 worldImpulse; // 44
    Vector3 worldPosition; // 50
    float radius; // 5C
    uint32_t shapeIndex; // 60
    uint8_t unk64[0x68 - 0x64]; // 64
#endif
};
RED4EXT_ASSERT_SIZE(PhysicalImpulseEvent, 0x68);
} // namespace ent::events
using enteventsPhysicalImpulseEvent = ent::events::PhysicalImpulseEvent;
using PhysicalImpulseEvent = ent::events::PhysicalImpulseEvent;
} // namespace RED4ext

// clang-format on
