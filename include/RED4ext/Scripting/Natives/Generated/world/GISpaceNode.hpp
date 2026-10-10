#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/GIGroup.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/AreaShapeNode.hpp>

namespace RED4ext
{
namespace world
{
struct GISpaceNode : world::AreaShapeNode
{
    static constexpr const char* NAME = "worldGISpaceNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<world::AreaShapeNode>];
    rend::GIGroup group; // 60
    uint8_t unk_64[0x64 - (0x60 + sizeof(group))];
    uint32_t priority; // 64
    uint8_t unk_68[0x68 - (0x64 + sizeof(priority))];
    bool interior; // 68
    uint8_t unk_69[0x69 - (0x68 + sizeof(interior))];
    bool runtime; // 69
    uint8_t unk_6B[0x6B - (0x69 + sizeof(runtime))];
    bool updated; // 6B
#else
    rend::GIGroup group; // 60
    uint8_t unk61[0x64 - 0x61]; // 61
    uint32_t priority; // 64
    bool interior; // 68
    bool runtime; // 69
    uint8_t unk6A[0x6B - 0x6A]; // 6A
    bool updated; // 6B
    uint8_t unk6C[0x70 - 0x6C]; // 6C
#endif
};
RED4EXT_ASSERT_SIZE(GISpaceNode, 0x70);
} // namespace world
using worldGISpaceNode = world::GISpaceNode;
} // namespace RED4ext

// clang-format on
