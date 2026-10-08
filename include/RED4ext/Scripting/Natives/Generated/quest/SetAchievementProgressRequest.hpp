#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PlayerScriptableSystemRequest.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Achievement.hpp>

namespace RED4ext
{
namespace quest
{
struct SetAchievementProgressRequest : game::PlayerScriptableSystemRequest
{
    static constexpr const char* NAME = "questSetAchievementProgressRequest";
    static constexpr const char* ALIAS = "SetAchievementProgressRequest";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_58[0x58 - ::RED4ext::Detail::DataSize<game::PlayerScriptableSystemRequest>];
    int32_t currentValue; // 58
    uint8_t unk_5C[0x5C - (0x58 + sizeof(currentValue))];
    int32_t customTarget; // 5C
    uint8_t unk_60[0x60 - (0x5C + sizeof(customTarget))];
    game::data::Achievement achievement; // 60
#else
    int32_t currentValue; // 58
    int32_t customTarget; // 5C
    game::data::Achievement achievement; // 60
    uint8_t unk64[0x68 - 0x64]; // 64
#endif
};
RED4EXT_ASSERT_SIZE(SetAchievementProgressRequest, 0x68);
} // namespace quest
using questSetAchievementProgressRequest = quest::SetAchievementProgressRequest;
using SetAchievementProgressRequest = quest::SetAchievementProgressRequest;
} // namespace RED4ext

// clang-format on
