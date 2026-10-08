#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PlayerScriptableSystemRequest.hpp>

namespace RED4ext
{
namespace game
{
struct UnequipByTDBIDRequest : game::PlayerScriptableSystemRequest
{
    static constexpr const char* NAME = "gameUnequipByTDBIDRequest";
    static constexpr const char* ALIAS = "UnequipByTDBIDRequest";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_58[0x58 - ::RED4ext::Detail::DataSize<game::PlayerScriptableSystemRequest>];
    TweakDBID itemTDBID; // 58
#else
    TweakDBID itemTDBID; // 58
#endif
};
RED4EXT_ASSERT_SIZE(UnequipByTDBIDRequest, 0x60);
} // namespace game
using gameUnequipByTDBIDRequest = game::UnequipByTDBIDRequest;
using UnequipByTDBIDRequest = game::UnequipByTDBIDRequest;
} // namespace RED4ext

// clang-format on
