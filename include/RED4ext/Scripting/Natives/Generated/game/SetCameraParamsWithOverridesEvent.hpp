#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct SetCameraParamsWithOverridesEvent : red::Event
{
    static constexpr const char* NAME = "gameSetCameraParamsWithOverridesEvent";
    static constexpr const char* ALIAS = "SetCameraParamsWithOverridesEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    CName paramsName; // 40
    uint8_t unk_48[0x48 - (0x40 + sizeof(paramsName))];
    float yawMaxLeft; // 48
    uint8_t unk_4C[0x4C - (0x48 + sizeof(yawMaxLeft))];
    float yawMaxRight; // 4C
    uint8_t unk_50[0x50 - (0x4C + sizeof(yawMaxRight))];
    float pitchMax; // 50
    uint8_t unk_54[0x54 - (0x50 + sizeof(pitchMax))];
    float pitchMin; // 54
    uint8_t unk_58[0x58 - (0x54 + sizeof(pitchMin))];
    float sensitivityMultX; // 58
    uint8_t unk_5C[0x5C - (0x58 + sizeof(sensitivityMultX))];
    float sensitivityMultY; // 5C
#else
    CName paramsName; // 40
    float yawMaxLeft; // 48
    float yawMaxRight; // 4C
    float pitchMax; // 50
    float pitchMin; // 54
    float sensitivityMultX; // 58
    float sensitivityMultY; // 5C
#endif
};
RED4EXT_ASSERT_SIZE(SetCameraParamsWithOverridesEvent, 0x60);
} // namespace game
using gameSetCameraParamsWithOverridesEvent = game::SetCameraParamsWithOverridesEvent;
using SetCameraParamsWithOverridesEvent = game::SetCameraParamsWithOverridesEvent;
} // namespace RED4ext

// clang-format on
