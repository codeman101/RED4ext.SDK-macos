#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/OffMeshConnectionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/SplineNode.hpp>

namespace RED4ext
{
namespace world
{
struct OffMeshConnectionNode : world::SplineNode
{
    static constexpr const char* NAME = "worldOffMeshConnectionNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_70[0x70 - ::RED4ext::Detail::DataSize<world::SplineNode>];
    float radius; // 70
    uint8_t unk_74[0x74 - (0x70 + sizeof(radius))];
    bool isBidirectional; // 74
    uint8_t unk_78[0x78 - (0x74 + sizeof(isBidirectional))];
    world::OffMeshConnectionType type; // 78
    uint8_t unk_80[0x80 - (0x78 + sizeof(type))];
    DynArray<CName> tags; // 80
#else
    float radius; // 70
    bool isBidirectional; // 74
    uint8_t unk75[0x78 - 0x75]; // 75
    world::OffMeshConnectionType type; // 78
    uint8_t unk7C[0x80 - 0x7C]; // 7C
    DynArray<CName> tags; // 80
#endif
};
RED4EXT_ASSERT_SIZE(OffMeshConnectionNode, 0x90);
} // namespace world
using worldOffMeshConnectionNode = world::OffMeshConnectionNode;
} // namespace RED4ext

// clang-format on
