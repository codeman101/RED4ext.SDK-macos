#if defined(__APPLE__)
#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace gsm
{
struct State : IScriptable
{
    static constexpr const char* NAME = "gsmState";
    static constexpr const char* ALIAS = NAME;

#if !defined(__APPLE__)
    uint8_t unk40[0xB8 - 0x40]; // 40
#endif // the game reuses this tail padding (see Detail::DataSize)
};
RED4EXT_ASSERT_SIZE(State, 0xB8);
} // namespace gsm
using gsmState = gsm::State;
} // namespace RED4ext

// clang-format on

#else
#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace gsm
{
struct State : IScriptable
{
    static constexpr const char* NAME = "gsmState";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0xB8 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(State, 0xB8);
} // namespace gsm
using gsmState = gsm::State;
} // namespace RED4ext

// clang-format on

#endif
