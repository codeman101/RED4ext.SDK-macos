#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
namespace game::state
{
struct __declspec(align(0x10)) MachineActionParameterVector
{
    static constexpr const char* NAME = "gamestateMachineActionParameterVector";
    static constexpr const char* ALIAS = "ActionParameterVector";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_8[0x8];
    CName name; // 8
    uint8_t unk_10[0x10 - (0x8 + sizeof(name))];
    Vector4 value; // 10
#else
    uint8_t unk00[0x10 - 0x0]; // 0
    CName name; // 10
    uint8_t unk18[0x20 - 0x18]; // 18
    Vector4 value; // 20
#endif
};
RED4EXT_ASSERT_SIZE(MachineActionParameterVector, 0x30);
} // namespace game::state
using gamestateMachineActionParameterVector = game::state::MachineActionParameterVector;
using ActionParameterVector = game::state::MachineActionParameterVector;
} // namespace RED4ext

// clang-format on
