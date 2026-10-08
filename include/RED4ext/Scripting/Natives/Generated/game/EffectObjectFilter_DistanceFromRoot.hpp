#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectGroupFilter.hpp>

namespace RED4ext
{
namespace game
{
struct EffectObjectFilter_DistanceFromRoot : game::EffectObjectGroupFilter
{
    static constexpr const char* NAME = "gameEffectObjectFilter_DistanceFromRoot";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<game::EffectObjectGroupFilter>];
    float rootZOffset; // 40
    uint8_t unk_44[0x44 - (0x40 + sizeof(rootZOffset))];
    float bonusRange; // 44
#else
    float rootZOffset; // 40
    float bonusRange; // 44
#endif
};
RED4EXT_ASSERT_SIZE(EffectObjectFilter_DistanceFromRoot, 0x48);
} // namespace game
using gameEffectObjectFilter_DistanceFromRoot = game::EffectObjectFilter_DistanceFromRoot;
} // namespace RED4ext

// clang-format on
