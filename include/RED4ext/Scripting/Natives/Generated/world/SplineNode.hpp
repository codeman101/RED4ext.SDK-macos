#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/SocketNode.hpp>

namespace RED4ext
{
struct Spline;

namespace world
{
struct SplineNode : world::SocketNode
{
    static constexpr const char* NAME = "worldSplineNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<world::SocketNode>];
    Handle<Spline> splineData; // 40
    uint8_t unk_50[0x50 - (0x40 + sizeof(splineData))];
    NodeRef destSnapedNode; // 50
    uint8_t unk_58[0x58 - (0x50 + sizeof(destSnapedNode))];
    CName destSnapedSocketName; // 58
    uint8_t unk_60[0x60 - (0x58 + sizeof(destSnapedSocketName))];
    NodeRef entrySnapedNode; // 60
    uint8_t unk_68[0x68 - (0x60 + sizeof(entrySnapedNode))];
    CName entrySnapedSocketName; // 68
#else
    uint8_t unk38[0x40 - 0x38]; // 38
    Handle<Spline> splineData; // 40
    NodeRef destSnapedNode; // 50
    CName destSnapedSocketName; // 58
    NodeRef entrySnapedNode; // 60
    CName entrySnapedSocketName; // 68
#endif
};
RED4EXT_ASSERT_SIZE(SplineNode, 0x70);
} // namespace world
using worldSplineNode = world::SplineNode;
} // namespace RED4ext

// clang-format on
