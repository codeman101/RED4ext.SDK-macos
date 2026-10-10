#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectProvider.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/QueryPreset.hpp>

namespace RED4ext
{
namespace physics { struct FilterData; }

namespace game
{
struct EffectObjectProvider_Sweep_Box : game::EffectObjectProvider
{
    static constexpr const char* NAME = "gameEffectObjectProvider_Sweep_Box";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<game::EffectObjectProvider>];
    Handle<physics::FilterData> filterData; // 40
    uint8_t unk_50[0x50 - (0x40 + sizeof(filterData))];
    physics::QueryPreset queryPreset; // 50
#else
    Handle<physics::FilterData> filterData; // 40
    physics::QueryPreset queryPreset; // 50
    uint8_t unk58[0x68 - 0x58]; // 58
#endif
};
RED4EXT_ASSERT_SIZE(EffectObjectProvider_Sweep_Box, 0x68);
} // namespace game
using gameEffectObjectProvider_Sweep_Box = game::EffectObjectProvider_Sweep_Box;
} // namespace RED4ext

// clang-format on
