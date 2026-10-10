#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EquipAnimationType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ItemEquipContexts.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PlayerScriptableSystemRequest.hpp>

namespace RED4ext
{
namespace game
{
struct DrawItemByContextRequest : game::PlayerScriptableSystemRequest
{
    static constexpr const char* NAME = "gameDrawItemByContextRequest";
    static constexpr const char* ALIAS = "DrawItemByContextRequest";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_58[0x58 - ::RED4ext::Detail::DataSize<game::PlayerScriptableSystemRequest>];
    game::ItemEquipContexts itemEquipContext; // 58
    uint8_t unk_5C[0x5C - (0x58 + sizeof(itemEquipContext))];
    game::EquipAnimationType equipAnimationType; // 5C
#else
    game::ItemEquipContexts itemEquipContext; // 58
    game::EquipAnimationType equipAnimationType; // 5C
#endif
};
RED4EXT_ASSERT_SIZE(DrawItemByContextRequest, 0x60);
} // namespace game
using gameDrawItemByContextRequest = game::DrawItemByContextRequest;
using DrawItemByContextRequest = game::DrawItemByContextRequest;
} // namespace RED4ext

// clang-format on
