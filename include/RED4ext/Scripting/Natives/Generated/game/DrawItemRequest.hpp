#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EquipAnimationType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PlayerScriptableSystemRequest.hpp>

namespace RED4ext
{
namespace game
{
struct DrawItemRequest : game::PlayerScriptableSystemRequest
{
    static constexpr const char* NAME = "gameDrawItemRequest";
    static constexpr const char* ALIAS = "DrawItemRequest";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_58[0x58 - ::RED4ext::Detail::DataSize<game::PlayerScriptableSystemRequest>];
    ItemID itemID; // 58
    uint8_t unk_68[0x68 - (0x58 + sizeof(itemID))];
    game::EquipAnimationType equipAnimationType; // 68
    uint8_t unk_6C[0x6C - (0x68 + sizeof(equipAnimationType))];
    bool assignOnly; // 6C
#else
    ItemID itemID; // 58
    game::EquipAnimationType equipAnimationType; // 68
    bool assignOnly; // 6C
    uint8_t unk6D[0x70 - 0x6D]; // 6D
#endif
};
RED4EXT_ASSERT_SIZE(DrawItemRequest, 0x70);
} // namespace game
using gameDrawItemRequest = game::DrawItemRequest;
using DrawItemRequest = game::DrawItemRequest;
} // namespace RED4ext

// clang-format on
