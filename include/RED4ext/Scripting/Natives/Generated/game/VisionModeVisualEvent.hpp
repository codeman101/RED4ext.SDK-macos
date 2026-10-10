#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/VisionModeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct VisionModeVisualEvent : red::Event
{
    static constexpr const char* NAME = "gameVisionModeVisualEvent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    TweakDBID group; // 40
    uint8_t unk_48[0x48 - (0x40 + sizeof(group))];
    CName changedModule; // 48
    uint8_t unk_50[0x50 - (0x48 + sizeof(changedModule))];
    bool activated; // 50
    uint8_t unk_58[0x58 - (0x50 + sizeof(activated))];
    CName meshComponentName; // 58
    uint8_t unk_60[0x60 - (0x58 + sizeof(meshComponentName))];
    game::VisionModeType type; // 60
#else
    TweakDBID group; // 40
    CName changedModule; // 48
    bool activated; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
    CName meshComponentName; // 58
    game::VisionModeType type; // 60
    uint8_t unk64[0x68 - 0x64]; // 64
#endif
};
RED4EXT_ASSERT_SIZE(VisionModeVisualEvent, 0x68);
} // namespace game
using gameVisionModeVisualEvent = game::VisionModeVisualEvent;
} // namespace RED4ext

// clang-format on
