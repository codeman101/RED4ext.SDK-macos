#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Box.hpp>
#include <RED4ext/Scripting/Natives/Generated/vis/IOccluderResource.hpp>

namespace RED4ext
{
namespace vis
{
struct __declspec(align(0x10)) OccluderMeshResource : vis::IOccluderResource
{
    static constexpr const char* NAME = "visOccluderMeshResource";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<vis::IOccluderResource>];
    uint32_t resourceVersion; // 34
    uint8_t unk_38[0x38 - (0x34 + sizeof(resourceVersion))];
    DataBuffer vertices; // 38
    uint8_t unk_60[0x60 - (0x38 + sizeof(vertices))];
    DataBuffer indices; // 60
    uint8_t unk_90[0x90 - (0x60 + sizeof(indices))];
    Box boundingBox; // 90
    uint8_t unk_B0[0xB0 - (0x90 + sizeof(boundingBox))];
    bool twoSided; // B0
#else
    uint32_t resourceVersion; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
    DataBuffer vertices; // 40
    DataBuffer indices; // 68
    Box boundingBox; // 90
    bool twoSided; // B0
    uint8_t unkB1[0xC0 - 0xB1]; // B1
#endif
};
RED4EXT_ASSERT_SIZE(OccluderMeshResource, 0xC0);
} // namespace vis
using visOccluderMeshResource = vis::OccluderMeshResource;
} // namespace RED4ext

// clang-format on
