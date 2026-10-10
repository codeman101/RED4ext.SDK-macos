#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent { struct Entity; }
namespace game { struct StaticAreaShapeComponent; }

namespace AI
{
struct ApproachingAreaResponseEvent : red::Event
{
    static constexpr const char* NAME = "AIApproachingAreaResponseEvent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    WeakHandle<ent::Entity> sender; // 40
    uint8_t unk_50[0x50 - (0x40 + sizeof(sender))];
    WeakHandle<game::StaticAreaShapeComponent> areaComponent; // 50
    uint8_t unk_60[0x60 - (0x50 + sizeof(areaComponent))];
    bool isPassingThrough; // 60
#else
    WeakHandle<ent::Entity> sender; // 40
    WeakHandle<game::StaticAreaShapeComponent> areaComponent; // 50
    bool isPassingThrough; // 60
    uint8_t unk61[0x68 - 0x61]; // 61
#endif
};
RED4EXT_ASSERT_SIZE(ApproachingAreaResponseEvent, 0x68);
} // namespace AI
using AIApproachingAreaResponseEvent = AI::ApproachingAreaResponseEvent;
} // namespace RED4ext

// clang-format on
