#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace game
{
struct FootstepComponent : ent::IComponent
{
    static constexpr const char* NAME = "gameFootstepComponent";
    static constexpr const char* ALIAS = "FootstepComponent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_90[0x90 - ::RED4ext::Detail::DataSize<ent::IComponent>];
    TweakDBID tweakDBID; // 90
    uint8_t unk_98[0x98 - (0x90 + sizeof(tweakDBID))];
    CName leftFootSlot; // 98
    uint8_t unk_A0[0xA0 - (0x98 + sizeof(leftFootSlot))];
    CName rightFootSlot; // A0
#else
    TweakDBID tweakDBID; // 90
    CName leftFootSlot; // 98
    CName rightFootSlot; // A0
    uint8_t unkA8[0xB0 - 0xA8]; // A8
#endif
};
RED4EXT_ASSERT_SIZE(FootstepComponent, 0xB0);
} // namespace game
using gameFootstepComponent = game::FootstepComponent;
using FootstepComponent = game::FootstepComponent;
} // namespace RED4ext

// clang-format on
