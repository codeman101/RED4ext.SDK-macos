#pragma once

#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/AcousticDataResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/CookedNode.hpp>
#include <RED4ext/Views/DynArrayView.hpp>

namespace RED4ext
{
namespace world
{
#pragma pack(push, 1)
struct CookedAcousticSectorInnerNode
{
    RaRef<AcousticDataResource> data; // 00
    uint32_t inSectorCoordsX;         // 08
    uint32_t inSectorCoordsY;         // 0C
    uint32_t inSectorCoordsZ;         // 10
    uint8_t edgeMask;                 // 14
};
RED4EXT_ASSERT_SIZE(CookedAcousticSectorInnerNode, 0x15);
#pragma pack(pop)

struct CookedAcousticSectorNode : CookedNode
{
    static constexpr const char* NAME = "worldCookedAcousticSectorNode";
    static constexpr const char* ALIAS = NAME;

    DynArrayView<CookedAcousticSectorInnerNode> GetInnerNodes()
    {
        return {cookedData};
    }

    uint8_t unk38[0x40 - 0x38];   // 38
    DynArray<uint8_t> cookedData; // 40
    uint8_t unk50[0x58 - 0x50];   // 48
    uint32_t generatorId;         // 58
};
RED4EXT_ASSERT_SIZE(CookedAcousticSectorNode, 0x60);
RED4EXT_ASSERT_OFFSET(CookedAcousticSectorNode, cookedData, 0x40);
} // namespace world
using worldCookedAcousticSectorNode = world::CookedAcousticSectorNode;
using worldCookedAcousticSectorInnerNode = world::CookedAcousticSectorInnerNode;
} // namespace RED4ext
