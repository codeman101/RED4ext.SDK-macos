#if defined(__APPLE__)
#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
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
    uint8_t unk_430[0x430 - ::RED4ext::Detail::DataSize<ent::IPlacedComponent>];
    bool autoPlayBumpAnimation; // 430
    uint8_t unk_431[0x431 - (0x430 + sizeof(autoPlayBumpAnimation))];
    bool isPlayerControlled; // 431
    uint8_t unk_434[0x434 - (0x431 + sizeof(isPlayerControlled))];
    float movementSpreadDistance; // 434
    uint8_t unk_438[0x438 - (0x434 + sizeof(movementSpreadDistance))];
    float movementSpreadRadius; // 438
    uint8_t unk_43C[0x43C - (0x438 + sizeof(movementSpreadRadius))];
    float distanceToReactBack; // 43C
    uint8_t unk_440[0x440 - (0x43C + sizeof(distanceToReactBack))];
    float distanceToReactFront; // 440
    uint8_t unk_448[0x448 - (0x440 + sizeof(distanceToReactFront))];
    DynArray<game::influence::BumpReactionSetting> reactionSettings; // 448
#else
    uint8_t unk120[0x430 - 0x120]; // 120
    bool autoPlayBumpAnimation; // 430
    bool isPlayerControlled; // 431
    uint8_t unk432[0x434 - 0x432]; // 432
    float movementSpreadDistance; // 434
    float movementSpreadRadius; // 438
    float distanceToReactBack; // 43C
    float distanceToReactFront; // 440
    uint8_t unk444[0x448 - 0x444]; // 444
    DynArray<game::influence::BumpReactionSetting> reactionSettings; // 448
    uint8_t unk458[0x460 - 0x458]; // 458
#endif

};
RED4EXT_ASSERT_SIZE(BumpComponent, 0x460);
} // namespace game::influence
using gameinfluenceBumpComponent = game::influence::BumpComponent;
using BumpComponent = game::influence::BumpComponent;
} // namespace RED4ext

// clang-format on

#else
#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
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
};
RED4EXT_ASSERT_SIZE(BumpComponent, 0x420);
} // namespace game::influence
using gameinfluenceBumpComponent = game::influence::BumpComponent;
using BumpComponent = game::influence::BumpComponent;
} // namespace RED4ext

// clang-format on

#endif
