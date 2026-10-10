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
struct PatrolNearbyStrategyRequest : vehicle::BaseStrategyRequest
{
    static constexpr const char* NAME = "vehiclePatrolNearbyStrategyRequest";
    static constexpr const char* ALIAS = "PatrolNearbyStrategyRequest";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_54[0x54 - ::RED4ext::Detail::DataSize<vehicle::BaseStrategyRequest>];
    Vector2 angleRange; // 54
#else
    Vector2 angleRange; // 58
#endif
};
RED4EXT_ASSERT_SIZE(PatrolNearbyStrategyRequest, 0x60);
} // namespace vehicle
using vehiclePatrolNearbyStrategyRequest = vehicle::PatrolNearbyStrategyRequest;
using PatrolNearbyStrategyRequest = vehicle::PatrolNearbyStrategyRequest;
} // namespace RED4ext

// clang-format on
