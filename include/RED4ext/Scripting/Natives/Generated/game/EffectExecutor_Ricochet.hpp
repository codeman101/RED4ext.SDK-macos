#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectExecutor.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectOutputParameter_Vector.hpp>

namespace RED4ext
{
namespace game
{
struct EffectExecutor_Ricochet : game::EffectExecutor
{
    static constexpr const char* NAME = "gameEffectExecutor_Ricochet";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<game::EffectExecutor>];
    game::EffectOutputParameter_Vector outputRicochetVector; // 48
#else
    game::EffectOutputParameter_Vector outputRicochetVector; // 48
#endif
};
RED4EXT_ASSERT_SIZE(EffectExecutor_Ricochet, 0x88);
} // namespace game
using gameEffectExecutor_Ricochet = game::EffectExecutor_Ricochet;
} // namespace RED4ext

// clang-format on
