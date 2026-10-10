#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimSetup.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace ent { struct AnimationControlBinding; }

namespace ent
{
struct AnimationSetupExtensionComponent : ent::IComponent
{
    static constexpr const char* NAME = "entAnimationSetupExtensionComponent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_8D[0x8D - ::RED4ext::Detail::DataSize<ent::IComponent>];
    bool isOverrideContainer; // 8D
    uint8_t unk_90[0x90 - (0x8D + sizeof(isOverrideContainer))];
    anim::AnimSetup animations; // 90
    uint8_t unk_B8[0xB8 - (0x90 + sizeof(animations))];
    Handle<ent::AnimationControlBinding> controlBinding; // B8
#else
    bool isOverrideContainer; // 90
    uint8_t unk91[0x98 - 0x91]; // 91
    anim::AnimSetup animations; // 98
    Handle<ent::AnimationControlBinding> controlBinding; // C0
#endif
};
RED4EXT_ASSERT_SIZE(AnimationSetupExtensionComponent, 0xD0);
} // namespace ent
using entAnimationSetupExtensionComponent = ent::AnimationSetupExtensionComponent;
} // namespace RED4ext

// clang-format on
