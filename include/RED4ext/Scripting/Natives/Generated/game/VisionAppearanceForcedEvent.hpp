#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct VisionAppearanceForcedEvent : red::Event
{
    static constexpr const char* NAME = "gameVisionAppearanceForcedEvent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    bool state; // 40
#else
    bool state; // 40
    uint8_t unk41[0x58 - 0x41]; // 41
#endif
};
RED4EXT_ASSERT_SIZE(VisionAppearanceForcedEvent, 0x58);
} // namespace game
using gameVisionAppearanceForcedEvent = game::VisionAppearanceForcedEvent;
} // namespace RED4ext

// clang-format on
