#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PlayerScriptableSystemRequest.hpp>

namespace RED4ext
{
namespace quest
{
struct SetLifePathRequest : game::PlayerScriptableSystemRequest
{
    static constexpr const char* NAME = "questSetLifePathRequest";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_58[0x58 - ::RED4ext::Detail::DataSize<game::PlayerScriptableSystemRequest>];
    TweakDBID lifePathID; // 58
#else
    TweakDBID lifePathID; // 58
#endif
};
RED4EXT_ASSERT_SIZE(SetLifePathRequest, 0x60);
} // namespace quest
using questSetLifePathRequest = quest::SetLifePathRequest;
} // namespace RED4ext

// clang-format on
