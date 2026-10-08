#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TriggerAreaNode.hpp>

namespace RED4ext
{
namespace game
{
struct CyberspaceBoundaryNode : world::TriggerAreaNode
{
    static constexpr const char* NAME = "gameCyberspaceBoundaryNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_70[0x70 - ::RED4ext::Detail::DataSize<world::TriggerAreaNode>];
    NodeRef marker1Ref; // 70
    uint8_t unk_78[0x78 - (0x70 + sizeof(marker1Ref))];
    NodeRef marker2Ref; // 78
#else
    NodeRef marker1Ref; // 70
    NodeRef marker2Ref; // 78
#endif
};
RED4EXT_ASSERT_SIZE(CyberspaceBoundaryNode, 0x80);
} // namespace game
using gameCyberspaceBoundaryNode = game::CyberspaceBoundaryNode;
} // namespace RED4ext

// clang-format on
