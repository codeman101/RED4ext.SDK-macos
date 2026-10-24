#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace net
{
struct IComponentState
{
    static constexpr const char* NAME = "netIComponentState";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x10 - 0x0]; // 0
    CName componentName; // 10
    bool enabled; // 18
#if !defined(__APPLE__)
    uint8_t unk19[0x20 - 0x19]; // 19
#endif // the game reuses this tail padding (see Detail::DataSize)
};
RED4EXT_ASSERT_SIZE(IComponentState, 0x20);
} // namespace net
using netIComponentState = net::IComponentState;
} // namespace RED4ext

// clang-format on
