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
struct EntityResize : red::Event
{
    static constexpr const char* NAME = "enteventsEntityResize";
    static constexpr const char* ALIAS = "EntityResizeEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    Vector3 extents; // 40
#else
    Vector3 extents; // 40
    uint8_t unk4C[0x50 - 0x4C]; // 4C
#endif
};
RED4EXT_ASSERT_SIZE(EntityResize, 0x50);
} // namespace ent::events
using enteventsEntityResize = ent::events::EntityResize;
using EntityResizeEvent = ent::events::EntityResize;
} // namespace RED4ext

// clang-format on
