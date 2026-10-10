#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectExecutor.hpp>

namespace RED4ext
{
namespace game { struct EffectVectorEvaluator; }
namespace world { struct Effect; }

namespace game
{
struct EffectExecutor_VisualEffect : game::EffectExecutor
{
    static constexpr const char* NAME = "gameEffectExecutor_VisualEffect";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<game::EffectExecutor>];
    RaRef<world::Effect> effect; // 48
    uint8_t unk_50[0x50 - (0x48 + sizeof(effect))];
    bool attached; // 50
    uint8_t unk_51[0x51 - (0x50 + sizeof(attached))];
    bool breakLoopOnDetach; // 51
    uint8_t unk_58[0x58 - (0x51 + sizeof(breakLoopOnDetach))];
    CName effectTag; // 58
    uint8_t unk_60[0x60 - (0x58 + sizeof(effectTag))];
    Handle<game::EffectVectorEvaluator> vectorEvaluator; // 60
#else
    RaRef<world::Effect> effect; // 48
    bool attached; // 50
    bool breakLoopOnDetach; // 51
    uint8_t unk52[0x58 - 0x52]; // 52
    CName effectTag; // 58
    Handle<game::EffectVectorEvaluator> vectorEvaluator; // 60
#endif
};
RED4EXT_ASSERT_SIZE(EffectExecutor_VisualEffect, 0x70);
} // namespace game
using gameEffectExecutor_VisualEffect = game::EffectExecutor_VisualEffect;
} // namespace RED4ext

// clang-format on
