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
struct MachineeventPostponedParameterBool : game::state::MachineeventPostponedParameterBase
{
    static constexpr const char* NAME = "gamestateMachineeventPostponedParameterBool";
    static constexpr const char* ALIAS = "PSMPostponedParameterBool";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_4C[0x4C - ::RED4ext::Detail::DataSize<game::state::MachineeventPostponedParameterBase>];
    bool value; // 4C
#else
    bool value; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
#endif
};
RED4EXT_ASSERT_SIZE(MachineeventPostponedParameterBool, 0x58);
} // namespace game::state
using gamestateMachineeventPostponedParameterBool = game::state::MachineeventPostponedParameterBool;
using PSMPostponedParameterBool = game::state::MachineeventPostponedParameterBool;
} // namespace RED4ext

// clang-format on
