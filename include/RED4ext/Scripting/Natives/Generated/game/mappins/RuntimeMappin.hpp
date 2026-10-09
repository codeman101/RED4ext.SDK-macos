#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/mappins/IMappin.hpp>

namespace RED4ext
{
namespace game::mappins
{
struct RuntimeMappin : game::mappins::IMappin
{
    static constexpr const char* NAME = "gamemappinsRuntimeMappin";
    static constexpr const char* ALIAS = "RuntimeMappin";

#if defined(__APPLE__)
    uint8_t unk88[0xFC - 0x88]; // 88
#else
    uint8_t unk88[0x108 - 0x88]; // 88
#endif // the game reuses this tail padding (see Detail::DataSize)
};
RED4EXT_ASSERT_SIZE(RuntimeMappin, 0x108);
} // namespace game::mappins
using gamemappinsRuntimeMappin = game::mappins::RuntimeMappin;
using RuntimeMappin = game::mappins::RuntimeMappin;
} // namespace RED4ext

// clang-format on
