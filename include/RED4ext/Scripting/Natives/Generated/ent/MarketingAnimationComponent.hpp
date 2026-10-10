#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/MarketingAnimationEntry.hpp>

namespace RED4ext
{
namespace anim { struct LookAtPreset_FullControl; }

namespace ent
{
struct __declspec(align(0x10)) MarketingAnimationComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "entMarketingAnimationComponent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_120[0x120 - ::RED4ext::Detail::DataSize<ent::IPlacedComponent>];
    DynArray<ent::MarketingAnimationEntry> animations; // 120
    uint8_t unk_130[0x130 - (0x120 + sizeof(animations))];
    bool freezeAnimations; // 130
    uint8_t unk_131[0x131 - (0x130 + sizeof(freezeAnimations))];
    bool enableLookAt; // 131
    uint8_t unk_138[0x138 - (0x131 + sizeof(enableLookAt))];
    Handle<anim::LookAtPreset_FullControl> lookAtSettings; // 138
    uint8_t unk_148[0x148 - (0x138 + sizeof(lookAtSettings))];
    bool lookAtCamera; // 148
    uint8_t unk_14C[0x14C - (0x148 + sizeof(lookAtCamera))];
    float lookAtOrbitDistance; // 14C
    uint8_t unk_150[0x150 - (0x14C + sizeof(lookAtOrbitDistance))];
    float lookAtTargetPitch; // 150
    uint8_t unk_154[0x154 - (0x150 + sizeof(lookAtTargetPitch))];
    float lookAtTargetYaw; // 154
#else
    DynArray<ent::MarketingAnimationEntry> animations; // 120
    bool freezeAnimations; // 130
    bool enableLookAt; // 131
    uint8_t unk132[0x138 - 0x132]; // 132
    Handle<anim::LookAtPreset_FullControl> lookAtSettings; // 138
    bool lookAtCamera; // 148
    uint8_t unk149[0x14C - 0x149]; // 149
    float lookAtOrbitDistance; // 14C
    float lookAtTargetPitch; // 150
    float lookAtTargetYaw; // 154
    uint8_t unk158[0x170 - 0x158]; // 158
#endif
};
RED4EXT_ASSERT_SIZE(MarketingAnimationComponent, 0x170);
} // namespace ent
using entMarketingAnimationComponent = ent::MarketingAnimationComponent;
} // namespace RED4ext

// clang-format on
