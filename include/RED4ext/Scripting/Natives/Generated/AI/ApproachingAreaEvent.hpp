#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/AIEvent.hpp>

namespace RED4ext
{
namespace ent { struct Entity; }
namespace game { struct StaticAreaShapeComponent; }

namespace AI
{
struct ApproachingAreaEvent : AI::AIEvent
{
    static constexpr const char* NAME = "AIApproachingAreaEvent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_4C[0x4C - ::RED4ext::Detail::DataSize<AI::AIEvent>];
    bool isApproachCancellation; // 4C
    uint8_t unk_50[0x50 - (0x4C + sizeof(isApproachCancellation))];
    WeakHandle<game::StaticAreaShapeComponent> areaComponent; // 50
    uint8_t unk_60[0x60 - (0x50 + sizeof(areaComponent))];
    WeakHandle<ent::Entity> responseTarget; // 60
#else
    bool isApproachCancellation; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
    WeakHandle<game::StaticAreaShapeComponent> areaComponent; // 58
    WeakHandle<ent::Entity> responseTarget; // 68
#endif
};
RED4EXT_ASSERT_SIZE(ApproachingAreaEvent, 0x78);
} // namespace AI
using AIApproachingAreaEvent = AI::ApproachingAreaEvent;
} // namespace RED4ext

// clang-format on
