#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PlayerScriptableSystemRequest.hpp>

namespace RED4ext
{
namespace game
{
struct PlayerDetachRequest : game::PlayerScriptableSystemRequest
{
    static constexpr const char* NAME = "gamePlayerDetachRequest";
    static constexpr const char* ALIAS = "PlayerDetachRequest";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_58[0x58 - ::RED4ext::Detail::DataSize<game::PlayerScriptableSystemRequest>];
    ent::EntityID ownerID; // 58
#else
    ent::EntityID ownerID; // 58
#endif
};
RED4EXT_ASSERT_SIZE(PlayerDetachRequest, 0x60);
} // namespace game
using gamePlayerDetachRequest = game::PlayerDetachRequest;
using PlayerDetachRequest = game::PlayerDetachRequest;
} // namespace RED4ext

// clang-format on
