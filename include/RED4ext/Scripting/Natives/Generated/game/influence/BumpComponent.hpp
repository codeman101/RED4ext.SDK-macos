#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/influence/BumpReactionSetting.hpp>

namespace RED4ext
{
namespace game::influence
{
struct __declspec(align(0x10)) BumpComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "gameinfluenceBumpComponent";
    static constexpr const char* ALIAS = "BumpComponent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_3F0[0x3F0 - ::RED4ext::Detail::DataSize<ent::IPlacedComponent>];
    bool autoPlayBumpAnimation; // 3F0
    uint8_t unk_3F1[0x3F1 - (0x3F0 + sizeof(autoPlayBumpAnimation))];
    bool isPlayerControlled; // 3F1
    uint8_t unk_3F4[0x3F4 - (0x3F1 + sizeof(isPlayerControlled))];
    float movementSpreadDistance; // 3F4
    uint8_t unk_3F8[0x3F8 - (0x3F4 + sizeof(movementSpreadDistance))];
    float movementSpreadRadius; // 3F8
    uint8_t unk_3FC[0x3FC - (0x3F8 + sizeof(movementSpreadRadius))];
    float distanceToReactBack; // 3FC
    uint8_t unk_400[0x400 - (0x3FC + sizeof(distanceToReactBack))];
    float distanceToReactFront; // 400
    uint8_t unk_408[0x408 - (0x400 + sizeof(distanceToReactFront))];
    DynArray<game::influence::BumpReactionSetting> reactionSettings; // 408
#else
    uint8_t unk120[0x3F0 - 0x120]; // 120
    bool autoPlayBumpAnimation; // 3F0
    bool isPlayerControlled; // 3F1
    uint8_t unk3F2[0x3F4 - 0x3F2]; // 3F2
    float movementSpreadDistance; // 3F4
    float movementSpreadRadius; // 3F8
    float distanceToReactBack; // 3FC
    float distanceToReactFront; // 400
    uint8_t unk404[0x408 - 0x404]; // 404
    DynArray<game::influence::BumpReactionSetting> reactionSettings; // 408
    uint8_t unk418[0x420 - 0x418]; // 418
#endif
};
RED4EXT_ASSERT_SIZE(BumpComponent, 0x420);
} // namespace game::influence
using gameinfluenceBumpComponent = game::influence::BumpComponent;
using BumpComponent = game::influence::BumpComponent;
} // namespace RED4ext

// clang-format on
