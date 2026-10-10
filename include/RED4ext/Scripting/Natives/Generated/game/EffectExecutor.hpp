#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectNode.hpp>

namespace RED4ext
{
namespace game
{
struct EffectExecutor : game::EffectNode
{
    static constexpr const char* NAME = "gameEffectExecutor";
    static constexpr const char* ALIAS = "EffectExecutor";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<game::EffectNode>];
    bool usesHitCooldown; // 40
#else
    bool usesHitCooldown; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
#endif
};
RED4EXT_ASSERT_SIZE(EffectExecutor, 0x48);
} // namespace game
using gameEffectExecutor = game::EffectExecutor;
using EffectExecutor = game::EffectExecutor;
} // namespace RED4ext

// clang-format on
