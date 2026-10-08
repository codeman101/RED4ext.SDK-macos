#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineActionParameterVector.hpp>

namespace RED4ext
{
namespace game::state
{
struct __declspec(align(0x10)) MachineConsumableParameterVector : game::state::MachineActionParameterVector
{
    static constexpr const char* NAME = "gamestateMachineConsumableParameterVector";
    static constexpr const char* ALIAS = "ConsumableParameterVector";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_20[0x20 - ::RED4ext::Detail::DataSize<game::state::MachineActionParameterVector>];
    bool consumed; // 20
#else
    bool consumed; // 30
    uint8_t unk31[0x40 - 0x31]; // 31
#endif
};
RED4EXT_ASSERT_SIZE(MachineConsumableParameterVector, 0x40);
} // namespace game::state
using gamestateMachineConsumableParameterVector = game::state::MachineConsumableParameterVector;
using ConsumableParameterVector = game::state::MachineConsumableParameterVector;
} // namespace RED4ext

// clang-format on
