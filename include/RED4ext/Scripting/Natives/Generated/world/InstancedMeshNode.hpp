#if defined(__APPLE__)
#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/CookedNode.hpp>

namespace RED4ext
{
struct CMesh;
namespace world
{
struct InstancedMeshNode : world::CookedNode
{
    static constexpr const char* NAME = "worldInstancedMeshNode";
    static constexpr const char* ALIAS = NAME;

// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<world::CookedNode>];
    DataBuffer cookedWorldTransformsBuffer; // 38
    uint8_t unk_90[0x90 - (0x38 + sizeof(cookedWorldTransformsBuffer))];
    uint8_t version; // 90

};
RED4EXT_ASSERT_SIZE(InstancedMeshNode, 0x98);
} // namespace world
using worldInstancedMeshNode = world::InstancedMeshNode;
} // namespace RED4ext

// clang-format on
#else
#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/CookedNode.hpp>

namespace RED4ext
{
namespace world
{
struct InstancedMeshNode : world::CookedNode
{
    static constexpr const char* NAME = "worldInstancedMeshNode";
    static constexpr const char* ALIAS = NAME;

    DataBuffer cookedWorldTransformsBuffer; // 38
    uint8_t unk60[0x90 - 0x60]; // 60
    uint8_t version; // 90
    uint8_t unk91[0x98 - 0x91]; // 91
};
RED4EXT_ASSERT_SIZE(InstancedMeshNode, 0x98);
} // namespace world
using worldInstancedMeshNode = world::InstancedMeshNode;
} // namespace RED4ext

// clang-format on
#endif
