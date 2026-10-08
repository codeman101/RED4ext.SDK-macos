#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ItemUnequipContexts.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PlayerScriptableSystemRequest.hpp>

namespace RED4ext
{
namespace game
{
struct UnequipByContextRequest : game::PlayerScriptableSystemRequest
{
    static constexpr const char* NAME = "gameUnequipByContextRequest";
    static constexpr const char* ALIAS = "UnequipByContextRequest";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_58[0x58 - ::RED4ext::Detail::DataSize<game::PlayerScriptableSystemRequest>];
    game::ItemUnequipContexts itemUnequipContext; // 58
#else
    game::ItemUnequipContexts itemUnequipContext; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
#endif
};
RED4EXT_ASSERT_SIZE(UnequipByContextRequest, 0x60);
} // namespace game
using gameUnequipByContextRequest = game::UnequipByContextRequest;
using UnequipByContextRequest = game::UnequipByContextRequest;
} // namespace RED4ext

// clang-format on
