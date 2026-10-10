#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace game
{
struct BreachControllerComponent : ent::IComponent
{
    static constexpr const char* NAME = "gameBreachControllerComponent";
    static constexpr const char* ALIAS = "BreachControllerComponent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_E0[0xE0 - ::RED4ext::Detail::DataSize<ent::IComponent>];
    bool canHaveBreaches; // E0
    uint8_t unk_E1[0xE1 - (0xE0 + sizeof(canHaveBreaches))];
    bool allowNormalBreachesAfterWeakspotsAreDestroyed; // E1
    uint8_t unk_E2[0xE2 - (0xE1 + sizeof(allowNormalBreachesAfterWeakspotsAreDestroyed))];
    bool debugAllowBreachesAfterDestruction; // E2
    uint8_t unk_E4[0xE4 - (0xE2 + sizeof(debugAllowBreachesAfterDestruction))];
    float breachesScale; // E4
#else
    uint8_t unk90[0xE0 - 0x90]; // 90
    bool canHaveBreaches; // E0
    bool allowNormalBreachesAfterWeakspotsAreDestroyed; // E1
    bool debugAllowBreachesAfterDestruction; // E2
    uint8_t unkE3[0xE4 - 0xE3]; // E3
    float breachesScale; // E4
    uint8_t unkE8[0x118 - 0xE8]; // E8
#endif
};
RED4EXT_ASSERT_SIZE(BreachControllerComponent, 0x118);
} // namespace game
using gameBreachControllerComponent = game::BreachControllerComponent;
using BreachControllerComponent = game::BreachControllerComponent;
} // namespace RED4ext

// clang-format on
