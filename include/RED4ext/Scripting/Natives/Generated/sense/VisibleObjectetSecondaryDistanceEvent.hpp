#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace sense
{
struct VisibleObjectetSecondaryDistanceEvent : red::Event
{
    static constexpr const char* NAME = "senseVisibleObjectetSecondaryDistanceEvent";
    static constexpr const char* ALIAS = "VisibleObjectetSecondaryDistanceEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    float distance; // 40
    uint8_t unk_44[0x44 - (0x40 + sizeof(distance))];
    float extraEvaluationDistance; // 44
#else
    float distance; // 40
    float extraEvaluationDistance; // 44
#endif
};
RED4EXT_ASSERT_SIZE(VisibleObjectetSecondaryDistanceEvent, 0x48);
} // namespace sense
using senseVisibleObjectetSecondaryDistanceEvent = sense::VisibleObjectetSecondaryDistanceEvent;
using VisibleObjectetSecondaryDistanceEvent = sense::VisibleObjectetSecondaryDistanceEvent;
} // namespace RED4ext

// clang-format on
