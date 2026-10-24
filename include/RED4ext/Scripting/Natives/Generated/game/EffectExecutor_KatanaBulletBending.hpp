#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectExecutor_KatanaBulletBendingEffectEntry.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectExecutor_Scripted.hpp>

namespace RED4ext
{
namespace game
{
struct EffectExecutor_KatanaBulletBending : game::EffectExecutor_Scripted
{
    static constexpr const char* NAME = "gameEffectExecutor_KatanaBulletBending";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<game::EffectExecutor_Scripted>];
    DynArray<game::EffectExecutor_KatanaBulletBendingEffectEntry> effects; // 48
#else
    DynArray<game::EffectExecutor_KatanaBulletBendingEffectEntry> effects; // 48
#endif
};
RED4EXT_ASSERT_SIZE(EffectExecutor_KatanaBulletBending, 0x58);
} // namespace game
using gameEffectExecutor_KatanaBulletBending = game::EffectExecutor_KatanaBulletBending;
} // namespace RED4ext

// clang-format on
