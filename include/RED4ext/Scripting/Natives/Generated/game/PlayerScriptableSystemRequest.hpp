#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ScriptableSystemRequest.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace game
{
struct PlayerScriptableSystemRequest : game::ScriptableSystemRequest
{
    static constexpr const char* NAME = "gamePlayerScriptableSystemRequest";
    static constexpr const char* ALIAS = "PlayerScriptableSystemRequest";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<game::ScriptableSystemRequest>];
    WeakHandle<game::Object> owner; // 48
#else
    WeakHandle<game::Object> owner; // 48
#endif
};
RED4EXT_ASSERT_SIZE(PlayerScriptableSystemRequest, 0x58);
} // namespace game
using gamePlayerScriptableSystemRequest = game::PlayerScriptableSystemRequest;
using PlayerScriptableSystemRequest = game::PlayerScriptableSystemRequest;
} // namespace RED4ext

// clang-format on
