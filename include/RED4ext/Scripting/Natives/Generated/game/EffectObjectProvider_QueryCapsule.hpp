#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectProvider.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/QueryPreset.hpp>

namespace RED4ext
{
namespace game
{
struct EffectObjectProvider_QueryCapsule : game::EffectObjectProvider
{
    static constexpr const char* NAME = "gameEffectObjectProvider_QueryCapsule";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<game::EffectObjectProvider>];
    physics::QueryPreset queryPreset; // 40
    uint8_t unk_58[0x58 - (0x40 + sizeof(queryPreset))];
    bool gatherOnlyPuppets; // 58
#else
    physics::QueryPreset queryPreset; // 40
    uint8_t unk48[0x58 - 0x48]; // 48
    bool gatherOnlyPuppets; // 58
    uint8_t unk59[0x60 - 0x59]; // 59
#endif
};
RED4EXT_ASSERT_SIZE(EffectObjectProvider_QueryCapsule, 0x60);
} // namespace game
using gameEffectObjectProvider_QueryCapsule = game::EffectObjectProvider_QueryCapsule;
} // namespace RED4ext

// clang-format on
