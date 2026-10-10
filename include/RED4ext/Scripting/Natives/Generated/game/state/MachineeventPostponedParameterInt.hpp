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
struct MachineeventPostponedParameterInt : game::state::MachineeventPostponedParameterBase
{
    static constexpr const char* NAME = "gamestateMachineeventPostponedParameterInt";
    static constexpr const char* ALIAS = "PSMPostponedParameterInt";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_4C[0x4C - ::RED4ext::Detail::DataSize<game::state::MachineeventPostponedParameterBase>];
    int32_t value; // 4C
#else
    int32_t value; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
#endif
};
RED4EXT_ASSERT_SIZE(MachineeventPostponedParameterInt, 0x58);
} // namespace game::state
using gamestateMachineeventPostponedParameterInt = game::state::MachineeventPostponedParameterInt;
using PSMPostponedParameterInt = game::state::MachineeventPostponedParameterInt;
} // namespace RED4ext

// clang-format on
