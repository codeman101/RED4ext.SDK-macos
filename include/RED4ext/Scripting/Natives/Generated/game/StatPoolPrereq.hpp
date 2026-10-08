#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IComparisonPrereq.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/StatPoolType.hpp>

namespace RED4ext
{
namespace game
{
struct StatPoolPrereq : game::IComparisonPrereq
{
    static constexpr const char* NAME = "gameStatPoolPrereq";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_44[0x44 - ::RED4ext::Detail::DataSize<game::IComparisonPrereq>];
    game::data::StatPoolType statPoolType; // 44
    uint8_t unk_48[0x48 - (0x44 + sizeof(statPoolType))];
    float valueToCheck; // 48
#else
    game::data::StatPoolType statPoolType; // 48
    float valueToCheck; // 4C
#endif
};
RED4EXT_ASSERT_SIZE(StatPoolPrereq, 0x50);
} // namespace game
using gameStatPoolPrereq = game::StatPoolPrereq;
} // namespace RED4ext

// clang-format on
