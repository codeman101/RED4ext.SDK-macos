#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/AreaShapeNode.hpp>

namespace RED4ext
{
namespace world
{
struct CrowdNullAreaNode : world::AreaShapeNode
{
    static constexpr const char* NAME = "worldCrowdNullAreaNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<world::AreaShapeNode>];
    bool IsForBlockade; // 60
    uint8_t unk_61[0x61 - (0x60 + sizeof(IsForBlockade))];
    bool permanentlyEnabledByDefault; // 61
#else
    bool IsForBlockade; // 60
    bool permanentlyEnabledByDefault; // 61
    uint8_t unk62[0x68 - 0x62]; // 62
#endif
};
RED4EXT_ASSERT_SIZE(CrowdNullAreaNode, 0x68);
} // namespace world
using worldCrowdNullAreaNode = world::CrowdNullAreaNode;
} // namespace RED4ext

// clang-format on
