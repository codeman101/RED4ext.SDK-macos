#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/NavGenNavigationSetting.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/AreaShapeNode.hpp>

namespace RED4ext
{
namespace physics { struct FilterData; }

namespace world
{
struct CollisionAreaNode : world::AreaShapeNode
{
    static constexpr const char* NAME = "worldCollisionAreaNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<world::AreaShapeNode>];
    Handle<physics::FilterData> filterData; // 60
    uint8_t unk_70[0x70 - (0x60 + sizeof(filterData))];
    NavGenNavigationSetting navigationSetting; // 70
    uint8_t unk_78[0x78 - (0x70 + sizeof(navigationSetting))];
    CName material; // 78
#else
    Handle<physics::FilterData> filterData; // 60
    NavGenNavigationSetting navigationSetting; // 70
    uint8_t unk72[0x78 - 0x72]; // 72
    CName material; // 78
#endif
};
RED4EXT_ASSERT_SIZE(CollisionAreaNode, 0x80);
} // namespace world
using worldCollisionAreaNode = world::CollisionAreaNode;
} // namespace RED4ext

// clang-format on
