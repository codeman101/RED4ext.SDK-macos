#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ScriptableSystemRequest.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/PhoneCallMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/PhoneCallPhase.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/PhoneCallVisuals.hpp>

namespace RED4ext
{
namespace quest
{
struct TriggerCallRequest : game::ScriptableSystemRequest
{
    static constexpr const char* NAME = "questTriggerCallRequest";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<game::ScriptableSystemRequest>];
    CName caller; // 48
    uint8_t unk_50[0x50 - (0x48 + sizeof(caller))];
    CName addressee; // 50
    uint8_t unk_58[0x58 - (0x50 + sizeof(addressee))];
    quest::PhoneCallPhase callPhase; // 58
    uint8_t unk_5C[0x5C - (0x58 + sizeof(callPhase))];
    quest::PhoneCallMode callMode; // 5C
    uint8_t unk_60[0x60 - (0x5C + sizeof(callMode))];
    bool isPlayerTriggered; // 60
    uint8_t unk_61[0x61 - (0x60 + sizeof(isPlayerTriggered))];
    bool isRejectable; // 61
    uint8_t unk_62[0x62 - (0x61 + sizeof(isRejectable))];
    bool showAvatar; // 62
    uint8_t unk_64[0x64 - (0x62 + sizeof(showAvatar))];
    quest::PhoneCallVisuals visuals; // 64
#else
    CName caller; // 48
    CName addressee; // 50
    quest::PhoneCallPhase callPhase; // 58
    quest::PhoneCallMode callMode; // 5C
    bool isPlayerTriggered; // 60
    bool isRejectable; // 61
    bool showAvatar; // 62
    uint8_t unk63[0x64 - 0x63]; // 63
    quest::PhoneCallVisuals visuals; // 64
#endif
};
RED4EXT_ASSERT_SIZE(TriggerCallRequest, 0x68);
} // namespace quest
using questTriggerCallRequest = quest::TriggerCallRequest;
} // namespace RED4ext

// clang-format on
