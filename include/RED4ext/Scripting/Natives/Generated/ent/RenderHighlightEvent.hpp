#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent
{
struct RenderHighlightEvent : red::Event
{
    static constexpr const char* NAME = "entRenderHighlightEvent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    uint8_t fillIndex; // 40
    uint8_t unk_41[0x41 - (0x40 + sizeof(fillIndex))];
    uint8_t outlineIndex; // 41
    uint8_t unk_42[0x42 - (0x41 + sizeof(outlineIndex))];
    bool seeThroughWalls; // 42
    uint8_t unk_48[0x48 - (0x42 + sizeof(seeThroughWalls))];
    CName componentName; // 48
    uint8_t unk_50[0x50 - (0x48 + sizeof(componentName))];
    float opacity; // 50
#else
    uint8_t fillIndex; // 40
    uint8_t outlineIndex; // 41
    bool seeThroughWalls; // 42
    uint8_t unk43[0x48 - 0x43]; // 43
    CName componentName; // 48
    float opacity; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
#endif
};
RED4EXT_ASSERT_SIZE(RenderHighlightEvent, 0x58);
} // namespace ent
using entRenderHighlightEvent = ent::RenderHighlightEvent;
} // namespace RED4ext

// clang-format on
