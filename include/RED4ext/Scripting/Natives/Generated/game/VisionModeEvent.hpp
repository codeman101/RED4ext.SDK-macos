#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/VisionModeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct VisionModeEvent : red::Event
{
    static constexpr const char* NAME = "gameVisionModeEvent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    bool activated; // 40
    uint8_t unk_44[0x44 - (0x40 + sizeof(activated))];
    game::VisionModeType type; // 44
#else
    bool activated; // 40
    uint8_t unk41[0x44 - 0x41]; // 41
    game::VisionModeType type; // 44
    uint8_t unk48[0x50 - 0x48]; // 48
#endif
};
RED4EXT_ASSERT_SIZE(VisionModeEvent, 0x50);
} // namespace game
using gameVisionModeEvent = game::VisionModeEvent;
} // namespace RED4ext

// clang-format on
