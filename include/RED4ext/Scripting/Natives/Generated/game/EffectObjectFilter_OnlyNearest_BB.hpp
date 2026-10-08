#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectInputParameter_Int.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectFilter_OnlyNearest.hpp>

namespace RED4ext
{
namespace game
{
struct EffectObjectFilter_OnlyNearest_BB : game::EffectObjectFilter_OnlyNearest
{
    static constexpr const char* NAME = "gameEffectObjectFilter_OnlyNearest_BB";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<game::EffectObjectFilter_OnlyNearest>];
    game::EffectInputParameter_Int parameter; // 48
#else
    game::EffectInputParameter_Int parameter; // 48
#endif
};
RED4EXT_ASSERT_SIZE(EffectObjectFilter_OnlyNearest_BB, 0x60);
} // namespace game
using gameEffectObjectFilter_OnlyNearest_BB = game::EffectObjectFilter_OnlyNearest_BB;
} // namespace RED4ext

// clang-format on
