#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectFilter_OnlyNearest.hpp>

namespace RED4ext
{
namespace game
{
struct EffectObjectFilter_OnlyNearest_Pierce : game::EffectObjectFilter_OnlyNearest
{
    static constexpr const char* NAME = "gameEffectObjectFilter_OnlyNearest_Pierce";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_45[0x45 - ::RED4ext::Detail::DataSize<game::EffectObjectFilter_OnlyNearest>];
    bool alwaysApplyFullWeaponCharge; // 45
    uint8_t unk_46[0x46 - (0x45 + sizeof(alwaysApplyFullWeaponCharge))];
    bool includePierced; // 46
#else
    bool alwaysApplyFullWeaponCharge; // 48
    bool includePierced; // 49
    uint8_t unk4A[0x50 - 0x4A]; // 4A
#endif
};
RED4EXT_ASSERT_SIZE(EffectObjectFilter_OnlyNearest_Pierce, 0x50);
} // namespace game
using gameEffectObjectFilter_OnlyNearest_Pierce = game::EffectObjectFilter_OnlyNearest_Pierce;
} // namespace RED4ext

// clang-format on
