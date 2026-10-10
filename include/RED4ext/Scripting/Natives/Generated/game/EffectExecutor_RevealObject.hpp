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
struct EffectExecutor_RevealObject : game::EffectExecutor
{
    static constexpr const char* NAME = "gameEffectExecutor_RevealObject";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<game::EffectExecutor>];
    CName reason; // 48
#else
    CName reason; // 48
#endif
};
RED4EXT_ASSERT_SIZE(EffectExecutor_RevealObject, 0x50);
} // namespace game
using gameEffectExecutor_RevealObject = game::EffectExecutor_RevealObject;
} // namespace RED4ext

// clang-format on
