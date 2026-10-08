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
struct TargetingLocalizedEffectComponent : ent::IComponent
{
    static constexpr const char* NAME = "gameTargetingLocalizedEffectComponent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_90[0x90 - ::RED4ext::Detail::DataSize<ent::IComponent>];
    float streamingDistance; // 90
    uint8_t unk_94[0x94 - (0x90 + sizeof(streamingDistance))];
    float visibleTargetRange; // 94
#else
    float streamingDistance; // 90
    float visibleTargetRange; // 94
#endif
};
RED4EXT_ASSERT_SIZE(TargetingLocalizedEffectComponent, 0x98);
} // namespace game
using gameTargetingLocalizedEffectComponent = game::TargetingLocalizedEffectComponent;
} // namespace RED4ext

// clang-format on
