#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/BendedMeshNode.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) CableMeshNode : world::BendedMeshNode
{
    static constexpr const char* NAME = "worldCableMeshNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_A0[0xA0 - ::RED4ext::Detail::DataSize<world::BendedMeshNode>];
    NativeArray<uint64_t, 2> destructionHashes; // A0
    uint8_t unk_B0[0xB0 - (0xA0 + sizeof(destructionHashes))];
    float cableLength; // B0
    uint8_t unk_B4[0xB4 - (0xB0 + sizeof(cableLength))];
    float cableRadius; // B4
#else
    NativeArray<uint64_t, 2> destructionHashes; // A0
    float cableLength; // B0
    float cableRadius; // B4
    uint8_t unkB8[0xC0 - 0xB8]; // B8
#endif
};
RED4EXT_ASSERT_SIZE(CableMeshNode, 0xC0);
} // namespace world
using worldCableMeshNode = world::CableMeshNode;
} // namespace RED4ext

// clang-format on
