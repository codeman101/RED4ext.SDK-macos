#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectHitDataType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectFilter_HitTypeAction.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectSingleFilter.hpp>

namespace RED4ext
{
namespace game
{
struct EffectObjectFilter_HitType : game::EffectObjectSingleFilter
{
    static constexpr const char* NAME = "gameEffectObjectFilter_HitType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<game::EffectObjectSingleFilter>];
    game::EffectObjectFilter_HitTypeAction action; // 40
    uint8_t unk_44[0x44 - (0x40 + sizeof(action))];
    game::EffectHitDataType hitType; // 44
#else
    game::EffectObjectFilter_HitTypeAction action; // 40
    game::EffectHitDataType hitType; // 44
    uint8_t unk45[0x48 - 0x45]; // 45
#endif
};
RED4EXT_ASSERT_SIZE(EffectObjectFilter_HitType, 0x48);
} // namespace game
using gameEffectObjectFilter_HitType = game::EffectObjectFilter_HitType;
} // namespace RED4ext

// clang-format on
