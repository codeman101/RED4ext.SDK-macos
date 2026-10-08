#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineActionParameterInt.hpp>

namespace RED4ext
{
namespace game::state
{
struct MachineConsumableParameterInt : game::state::MachineActionParameterInt
{
    static constexpr const char* NAME = "gamestateMachineConsumableParameterInt";
    static constexpr const char* ALIAS = "ConsumableParameterInt";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_14[0x14 - ::RED4ext::Detail::DataSize<game::state::MachineActionParameterInt>];
    bool consumed; // 14
#else
    bool consumed; // 18
    uint8_t unk19[0x20 - 0x19]; // 19
#endif
};
RED4EXT_ASSERT_SIZE(MachineConsumableParameterInt, 0x20);
} // namespace game::state
using gamestateMachineConsumableParameterInt = game::state::MachineConsumableParameterInt;
using ConsumableParameterInt = game::state::MachineConsumableParameterInt;
} // namespace RED4ext

// clang-format on
