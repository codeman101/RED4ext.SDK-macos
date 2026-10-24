#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/TagList.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/SocketNode.hpp>

namespace RED4ext
{
namespace AI { struct Spot; }
namespace world { struct TrafficSpotDefinition; }

namespace world
{
struct AISpotNode : world::SocketNode
{
    static constexpr const char* NAME = "worldAISpotNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<world::SocketNode>];
    Handle<world::TrafficSpotDefinition> spotDef; // 38
    uint8_t unk_48[0x48 - (0x38 + sizeof(spotDef))];
    Handle<AI::Spot> spot; // 48
    uint8_t unk_58[0x58 - (0x48 + sizeof(spot))];
    DynArray<CName> markings; // 58
    uint8_t unk_68[0x68 - (0x58 + sizeof(markings))];
    red::TagList crowdWhitelist; // 68
    uint8_t unk_78[0x78 - (0x68 + sizeof(crowdWhitelist))];
    red::TagList crowdBlacklist; // 78
    uint8_t unk_88[0x88 - (0x78 + sizeof(crowdBlacklist))];
    bool useCrowdWhitelist; // 88
    uint8_t unk_89[0x89 - (0x88 + sizeof(useCrowdWhitelist))];
    bool useCrowdBlacklist; // 89
    uint8_t unk_8A[0x8A - (0x89 + sizeof(useCrowdBlacklist))];
    bool isWorkspotInfinite; // 8A
    uint8_t unk_8B[0x8B - (0x8A + sizeof(isWorkspotInfinite))];
    bool isWorkspotStatic; // 8B
    uint8_t unk_8C[0x8C - (0x8B + sizeof(isWorkspotStatic))];
    bool disableBumps; // 8C
    uint8_t unk_90[0x90 - (0x8C + sizeof(disableBumps))];
    NodeRef lookAtTarget; // 90
#else
    Handle<world::TrafficSpotDefinition> spotDef; // 38
    Handle<AI::Spot> spot; // 48
    DynArray<CName> markings; // 58
    red::TagList crowdWhitelist; // 68
    red::TagList crowdBlacklist; // 78
    bool useCrowdWhitelist; // 88
    bool useCrowdBlacklist; // 89
    bool isWorkspotInfinite; // 8A
    bool isWorkspotStatic; // 8B
    bool disableBumps; // 8C
    uint8_t unk8D[0x90 - 0x8D]; // 8D
    NodeRef lookAtTarget; // 90
#endif
};
RED4EXT_ASSERT_SIZE(AISpotNode, 0x98);
} // namespace world
using worldAISpotNode = world::AISpotNode;
} // namespace RED4ext

// clang-format on
