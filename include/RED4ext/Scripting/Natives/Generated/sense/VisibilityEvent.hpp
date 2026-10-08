#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace sense
{
struct VisibilityEvent : red::Event
{
    static constexpr const char* NAME = "senseVisibilityEvent";
    static constexpr const char* ALIAS = "SenseVisibilityEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    WeakHandle<game::Object> target; // 40
    uint8_t unk_50[0x50 - (0x40 + sizeof(target))];
    bool isVisible; // 50
    uint8_t unk_58[0x58 - (0x50 + sizeof(isVisible))];
    CName description; // 58
    uint8_t unk_60[0x60 - (0x58 + sizeof(description))];
    TweakDBID shapeId; // 60
#else
    WeakHandle<game::Object> target; // 40
    bool isVisible; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
    CName description; // 58
    TweakDBID shapeId; // 60
#endif
};
RED4EXT_ASSERT_SIZE(VisibilityEvent, 0x68);
} // namespace sense
using senseVisibilityEvent = sense::VisibilityEvent;
using SenseVisibilityEvent = sense::VisibilityEvent;
} // namespace RED4ext

// clang-format on
