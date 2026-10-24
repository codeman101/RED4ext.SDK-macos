#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/SpotPersistentData.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/CommunitySpawnSetNameToID.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/CommunityRegistryItem.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
namespace game { struct CrowdCreationDataRegistry; }

namespace world
{
struct CommunityRegistryNode : world::Node
{
    static constexpr const char* NAME = "worldCommunityRegistryNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<world::Node>];
    game::CommunitySpawnSetNameToID spawnSetNameToCommunityID; // 38
    uint8_t unk_48[0x48 - (0x38 + sizeof(spawnSetNameToCommunityID))];
    Handle<game::CrowdCreationDataRegistry> crowdCreationRegistry; // 48
    uint8_t unk_58[0x58 - (0x48 + sizeof(crowdCreationRegistry))];
    DynArray<world::CommunityRegistryItem> communitiesData; // 58
    uint8_t unk_68[0x68 - (0x58 + sizeof(communitiesData))];
    DynArray<AI::SpotPersistentData> workspotsPersistentData; // 68
    uint8_t unk_78[0x78 - (0x68 + sizeof(workspotsPersistentData))];
    bool representsCrowd; // 78
#else
    game::CommunitySpawnSetNameToID spawnSetNameToCommunityID; // 38
    Handle<game::CrowdCreationDataRegistry> crowdCreationRegistry; // 48
    DynArray<world::CommunityRegistryItem> communitiesData; // 58
    DynArray<AI::SpotPersistentData> workspotsPersistentData; // 68
    bool representsCrowd; // 78
    uint8_t unk79[0x80 - 0x79]; // 79
#endif
};
RED4EXT_ASSERT_SIZE(CommunityRegistryNode, 0x80);
} // namespace world
using worldCommunityRegistryNode = world::CommunityRegistryNode;
} // namespace RED4ext

// clang-format on
