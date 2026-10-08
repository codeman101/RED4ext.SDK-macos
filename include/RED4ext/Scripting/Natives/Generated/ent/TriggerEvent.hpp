#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityGameInterface.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent
{
struct __declspec(align(0x10)) TriggerEvent : red::Event
{
    static constexpr const char* NAME = "entTriggerEvent";
    static constexpr const char* ALIAS = "TriggerEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    ent::EntityID triggerID; // 40
    uint8_t unk_48[0x48 - (0x40 + sizeof(triggerID))];
    CName componentName; // 48
    uint8_t unk_50[0x50 - (0x48 + sizeof(componentName))];
    ent::EntityGameInterface activator; // 50
    uint8_t unk_60[0x60 - (0x50 + sizeof(activator))];
    Vector4 worldPosition; // 60
    uint8_t unk_70[0x70 - (0x60 + sizeof(worldPosition))];
    uint32_t numActivatorsInArea; // 70
    uint8_t unk_74[0x74 - (0x70 + sizeof(numActivatorsInArea))];
    uint32_t activatorID; // 74
#else
    ent::EntityID triggerID; // 40
    CName componentName; // 48
    ent::EntityGameInterface activator; // 50
    Vector4 worldPosition; // 60
    uint32_t numActivatorsInArea; // 70
    uint32_t activatorID; // 74
    uint8_t unk78[0x80 - 0x78]; // 78
#endif
};
RED4EXT_ASSERT_SIZE(TriggerEvent, 0x80);
} // namespace ent
using entTriggerEvent = ent::TriggerEvent;
using TriggerEvent = ent::TriggerEvent;
} // namespace RED4ext

// clang-format on
