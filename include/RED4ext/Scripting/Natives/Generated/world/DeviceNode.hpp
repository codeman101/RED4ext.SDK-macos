#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/DeviceConnections.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/EntityNode.hpp>

namespace RED4ext
{
namespace world
{
struct DeviceNode : world::EntityNode
{
    static constexpr const char* NAME = "worldDeviceNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<world::EntityNode>];
    CName deviceClassName; // 60
    uint8_t unk_68[0x68 - (0x60 + sizeof(deviceClassName))];
    float alphaHackStreamingDistanceOverride; // 68
    uint8_t unk_70[0x70 - (0x68 + sizeof(alphaHackStreamingDistanceOverride))];
    DynArray<world::DeviceConnections> deviceConnections; // 70
#else
    CName deviceClassName; // 60
    float alphaHackStreamingDistanceOverride; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
    DynArray<world::DeviceConnections> deviceConnections; // 70
#endif
};
RED4EXT_ASSERT_SIZE(DeviceNode, 0x80);
} // namespace world
using worldDeviceNode = world::DeviceNode;
} // namespace RED4ext

// clang-format on
