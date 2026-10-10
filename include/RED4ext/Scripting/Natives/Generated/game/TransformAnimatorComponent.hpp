#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TransformAnimationDefinition.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) TransformAnimatorComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "gameTransformAnimatorComponent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_180[0x180 - ::RED4ext::Detail::DataSize<ent::IPlacedComponent>];
    DynArray<game::TransformAnimationDefinition> animations; // 180
#else
    uint8_t unk120[0x180 - 0x120]; // 120
    DynArray<game::TransformAnimationDefinition> animations; // 180
#endif
};
RED4EXT_ASSERT_SIZE(TransformAnimatorComponent, 0x190);
} // namespace game
using gameTransformAnimatorComponent = game::TransformAnimatorComponent;
} // namespace RED4ext

// clang-format on
