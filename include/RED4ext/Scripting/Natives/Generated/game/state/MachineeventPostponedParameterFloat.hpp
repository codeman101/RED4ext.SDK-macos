#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineeventPostponedParameterBase.hpp>

namespace RED4ext
{
namespace game::state
{
struct MachineeventPostponedParameterFloat : game::state::MachineeventPostponedParameterBase
{
    static constexpr const char* NAME = "gamestateMachineeventPostponedParameterFloat";
    static constexpr const char* ALIAS = "PSMPostponedParameterFloat";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_4C[0x4C - ::RED4ext::Detail::DataSize<game::state::MachineeventPostponedParameterBase>];
    float value; // 4C
#else
    float value; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
#endif
};
RED4EXT_ASSERT_SIZE(MachineeventPostponedParameterFloat, 0x58);
} // namespace game::state
using gamestateMachineeventPostponedParameterFloat = game::state::MachineeventPostponedParameterFloat;
using PSMPostponedParameterFloat = game::state::MachineeventPostponedParameterFloat;
} // namespace RED4ext

// clang-format on
