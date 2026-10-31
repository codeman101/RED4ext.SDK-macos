#pragma once

#include <RED4ext/Scripting/Natives/Generated/world/CookedMeshNode.hpp>

namespace RED4ext
{
namespace world
{
struct CookedStaticMeshNode : world::CookedMeshNode
{
    static constexpr const char* NAME = "worldCookedStaticMeshNode";
    static constexpr const char* ALIAS = NAME;

    DynArrayView<CookedMeshInnerNode> GetInnerNodes()
    {
        return {cookedData};
    }
};
RED4EXT_ASSERT_SIZE(CookedStaticMeshNode, 0x58);
} // namespace world
using worldCookedStaticMeshNode = world::CookedStaticMeshNode;
} // namespace RED4ext
