#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ScriptableSystemRequest.hpp>

namespace RED4ext
{
namespace game::mappins
{
struct DistrictEnteredEvent : game::ScriptableSystemRequest
{
    static constexpr const char* NAME = "gamemappinsDistrictEnteredEvent";
    static constexpr const char* ALIAS = "DistrictEnteredEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_45[0x45 - ::RED4ext::Detail::DataSize<game::ScriptableSystemRequest>];
    bool entered; // 45
    uint8_t unk_46[0x46 - (0x45 + sizeof(entered))];
    bool sendNewLocationNotification; // 46
    uint8_t unk_48[0x48 - (0x46 + sizeof(sendNewLocationNotification))];
    TweakDBID district; // 48
#else
    bool entered; // 48
    bool sendNewLocationNotification; // 49
    uint8_t unk4A[0x4C - 0x4A]; // 4A
    TweakDBID district; // 4C
    uint8_t unk54[0x58 - 0x54]; // 54
#endif
};
RED4EXT_ASSERT_SIZE(DistrictEnteredEvent, 0x58);
} // namespace game::mappins
using gamemappinsDistrictEnteredEvent = game::mappins::DistrictEnteredEvent;
using DistrictEnteredEvent = game::mappins::DistrictEnteredEvent;
} // namespace RED4ext

// clang-format on
