#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectExecutor.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectExecutor_AnimFeatureApplyTo.hpp>

namespace RED4ext
{
namespace anim { struct AnimFeature; }

namespace game
{
struct EffectExecutor_AnimFeature : game::EffectExecutor
{
    static constexpr const char* NAME = "gameEffectExecutor_AnimFeature";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<game::EffectExecutor>];
    CName key; // 48
    uint8_t unk_50[0x50 - (0x48 + sizeof(key))];
    Handle<anim::AnimFeature> animFeature; // 50
    uint8_t unk_60[0x60 - (0x50 + sizeof(animFeature))];
    game::EffectExecutor_AnimFeatureApplyTo applyTo; // 60
    uint8_t unk_64[0x64 - (0x60 + sizeof(applyTo))];
    bool ignoreWaterImpacts; // 64
#else
    CName key; // 48
    Handle<anim::AnimFeature> animFeature; // 50
    game::EffectExecutor_AnimFeatureApplyTo applyTo; // 60
    bool ignoreWaterImpacts; // 64
    uint8_t unk65[0x68 - 0x65]; // 65
#endif
};
RED4EXT_ASSERT_SIZE(EffectExecutor_AnimFeature, 0x68);
} // namespace game
using gameEffectExecutor_AnimFeature = game::EffectExecutor_AnimFeature;
} // namespace RED4ext

// clang-format on
