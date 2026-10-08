#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectInputParameter_Float.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectSingleFilter.hpp>

namespace RED4ext
{
namespace game
{
struct EffectFilter_ReachableByAcousticGraph : game::EffectObjectSingleFilter
{
    static constexpr const char* NAME = "gameEffectFilter_ReachableByAcousticGraph";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<game::EffectObjectSingleFilter>];
    game::EffectInputParameter_Float maxPathLength; // 40
#else
    game::EffectInputParameter_Float maxPathLength; // 40
#endif
};
RED4EXT_ASSERT_SIZE(EffectFilter_ReachableByAcousticGraph, 0x58);
} // namespace game
using gameEffectFilter_ReachableByAcousticGraph = game::EffectFilter_ReachableByAcousticGraph;
} // namespace RED4ext

// clang-format on
