#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/BaseStrategyRequest.hpp>

namespace RED4ext
{
namespace vehicle
{
struct SearchFromAnywhereStrategyRequest : vehicle::BaseStrategyRequest
{
    static constexpr const char* NAME = "vehicleSearchFromAnywhereStrategyRequest";
    static constexpr const char* ALIAS = "SearchFromAnywhereStrategyRequest";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_54[0x54 - ::RED4ext::Detail::DataSize<vehicle::BaseStrategyRequest>];
    Vector2 angleRange; // 54
#else
    Vector2 angleRange; // 58
#endif
};
RED4EXT_ASSERT_SIZE(SearchFromAnywhereStrategyRequest, 0x60);
} // namespace vehicle
using vehicleSearchFromAnywhereStrategyRequest = vehicle::SearchFromAnywhereStrategyRequest;
using SearchFromAnywhereStrategyRequest = vehicle::SearchFromAnywhereStrategyRequest;
} // namespace RED4ext

// clang-format on
