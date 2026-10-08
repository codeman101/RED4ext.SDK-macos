#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/WeakspotPhysicalDestructionProperties.hpp>

namespace RED4ext
{
namespace game
{
struct WeakspotComponent : ent::IComponent
{
    static constexpr const char* NAME = "gameWeakspotComponent";
    static constexpr const char* ALIAS = "WeakspotComponent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_A0[0xA0 - ::RED4ext::Detail::DataSize<ent::IComponent>];
    game::WeakspotPhysicalDestructionProperties defaultPhysicalDestructionProperties; // A0
#else
    uint8_t unk90[0xA0 - 0x90]; // 90
    game::WeakspotPhysicalDestructionProperties defaultPhysicalDestructionProperties; // A0
    uint8_t unkA4[0xA8 - 0xA4]; // A4
#endif
};
RED4EXT_ASSERT_SIZE(WeakspotComponent, 0xA8);
} // namespace game
using gameWeakspotComponent = game::WeakspotComponent;
using WeakspotComponent = game::WeakspotComponent;
} // namespace RED4ext

// clang-format on
