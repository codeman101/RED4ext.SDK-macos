#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
struct CDistantLightsResource;

namespace world
{
struct DistantLightsNode : world::Node
{
    static constexpr const char* NAME = "worldDistantLightsNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<world::Node>];
    RaRef<CDistantLightsResource> data; // 38
#else
    RaRef<CDistantLightsResource> data; // 38
#endif
};
RED4EXT_ASSERT_SIZE(DistantLightsNode, 0x40);
} // namespace world
using worldDistantLightsNode = world::DistantLightsNode;
} // namespace RED4ext

// clang-format on
