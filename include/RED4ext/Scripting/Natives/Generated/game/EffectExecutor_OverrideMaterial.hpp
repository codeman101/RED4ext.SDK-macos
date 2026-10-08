#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectExecutor.hpp>

namespace RED4ext
{
struct IMaterial;

namespace game
{
struct EffectExecutor_OverrideMaterial : game::EffectExecutor
{
    static constexpr const char* NAME = "gameEffectExecutor_OverrideMaterial";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<game::EffectExecutor>];
    Ref<IMaterial> material; // 48
#else
    Ref<IMaterial> material; // 48
#endif
};
RED4EXT_ASSERT_SIZE(EffectExecutor_OverrideMaterial, 0x60);
} // namespace game
using gameEffectExecutor_OverrideMaterial = game::EffectExecutor_OverrideMaterial;
} // namespace RED4ext

// clang-format on
