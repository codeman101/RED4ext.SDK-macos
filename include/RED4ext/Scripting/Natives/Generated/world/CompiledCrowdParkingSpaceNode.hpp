#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
namespace world
{
struct CompiledCrowdParkingSpaceNode : world::Node
{
    static constexpr const char* NAME = "worldCompiledCrowdParkingSpaceNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<world::Node>];
    uint32_t crowdCreationIndex; // 34
    uint8_t unk_38[0x38 - (0x34 + sizeof(crowdCreationIndex))];
    uint32_t parkingSpaceId; // 38
#else
    uint32_t crowdCreationIndex; // 38
    uint32_t parkingSpaceId; // 3C
#endif
};
RED4EXT_ASSERT_SIZE(CompiledCrowdParkingSpaceNode, 0x40);
} // namespace world
using worldCompiledCrowdParkingSpaceNode = world::CompiledCrowdParkingSpaceNode;
} // namespace RED4ext

// clang-format on
