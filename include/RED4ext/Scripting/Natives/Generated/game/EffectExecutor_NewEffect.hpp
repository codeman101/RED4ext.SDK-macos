#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectExecutor.hpp>

namespace RED4ext
{
namespace game
{
struct EffectExecutor_NewEffect : game::EffectExecutor
{
    static constexpr const char* NAME = "gameEffectExecutor_NewEffect";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<game::EffectExecutor>];
    CName tagInThisFile; // 48
    uint8_t unk_50[0x50 - (0x48 + sizeof(tagInThisFile))];
    float forwardOffset; // 50
    uint8_t unk_54[0x54 - (0x50 + sizeof(forwardOffset))];
    bool childEffect; // 54
    uint8_t unk_58[0x58 - (0x54 + sizeof(childEffect))];
    CName childEffectTag; // 58
#else
    CName tagInThisFile; // 48
    float forwardOffset; // 50
    bool childEffect; // 54
    uint8_t unk55[0x58 - 0x55]; // 55
    CName childEffectTag; // 58
#endif
};
RED4EXT_ASSERT_SIZE(EffectExecutor_NewEffect, 0x60);
} // namespace game
using gameEffectExecutor_NewEffect = game::EffectExecutor_NewEffect;
} // namespace RED4ext

// clang-format on
