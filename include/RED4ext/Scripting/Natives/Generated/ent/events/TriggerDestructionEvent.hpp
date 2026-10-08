#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent::events
{
struct TriggerDestructionEvent : red::Event
{
    static constexpr const char* NAME = "enteventsTriggerDestructionEvent";
    static constexpr const char* ALIAS = "TriggerDestructionEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    float velocity; // 40
#else
    float velocity; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
#endif
};
RED4EXT_ASSERT_SIZE(TriggerDestructionEvent, 0x48);
} // namespace ent::events
using enteventsTriggerDestructionEvent = ent::events::TriggerDestructionEvent;
using TriggerDestructionEvent = ent::events::TriggerDestructionEvent;
} // namespace RED4ext

// clang-format on
