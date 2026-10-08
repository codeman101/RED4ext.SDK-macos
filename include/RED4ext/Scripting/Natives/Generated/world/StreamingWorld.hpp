#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Box.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>

namespace RED4ext
{
struct CResource;
namespace world { struct AutoFoliageMapping; }
namespace world { struct EnvironmentDefinition; }
namespace world { struct StreamingBlock; }
namespace world { struct StreamingQueryDataResource; }

namespace world
{
struct __declspec(align(0x10)) StreamingWorld : CResource
{
    static constexpr const char* NAME = "worldStreamingWorld";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_3C[0x3C - ::RED4ext::Detail::DataSize<CResource>];
    uint32_t version; // 3C
    uint8_t unk_40[0x40 - (0x3C + sizeof(version))];
    Box worldBoundingBox; // 40
    uint8_t unk_60[0x60 - (0x40 + sizeof(worldBoundingBox))];
    DynArray<Ref<world::StreamingBlock>> blockRefs; // 60
    uint8_t unk_80[0x80 - (0x60 + sizeof(blockRefs))];
    Ref<world::EnvironmentDefinition> environmentDefinition; // 80
    uint8_t unk_98[0x98 - (0x80 + sizeof(environmentDefinition))];
    Ref<CResource> persistentStateData; // 98
    uint8_t unk_B0[0xB0 - (0x98 + sizeof(persistentStateData))];
    Ref<CResource> deviceResource; // B0
    uint8_t unk_C8[0xC8 - (0xB0 + sizeof(deviceResource))];
    Ref<CResource> deviceInitResource; // C8
    uint8_t unk_E0[0xE0 - (0xC8 + sizeof(deviceInitResource))];
    Ref<CResource> mappinResource; // E0
    uint8_t unk_F8[0xF8 - (0xE0 + sizeof(mappinResource))];
    Ref<CResource> poiMappinResource; // F8
    uint8_t unk_110[0x110 - (0xF8 + sizeof(poiMappinResource))];
    Ref<CResource> areaResource; // 110
    uint8_t unk_128[0x128 - (0x110 + sizeof(areaResource))];
    Ref<CResource> lootResource; // 128
    uint8_t unk_140[0x140 - (0x128 + sizeof(lootResource))];
    Ref<CResource> locationResource; // 140
    uint8_t unk_158[0x158 - (0x140 + sizeof(locationResource))];
    Ref<CResource> geometryCacheResource; // 158
    uint8_t unk_170[0x170 - (0x158 + sizeof(geometryCacheResource))];
    RaRef<CResource> locomotionPathResource; // 170
    uint8_t unk_178[0x178 - (0x170 + sizeof(locomotionPathResource))];
    RaRef<world::AutoFoliageMapping> autoFoliageMapping; // 178
    uint8_t unk_180[0x180 - (0x178 + sizeof(autoFoliageMapping))];
    RaRef<CResource> trafficPersistentResource; // 180
    uint8_t unk_188[0x188 - (0x180 + sizeof(trafficPersistentResource))];
    RaRef<CResource> trafficLaneConnectivityResource; // 188
    uint8_t unk_190[0x190 - (0x188 + sizeof(trafficLaneConnectivityResource))];
    RaRef<CResource> trafficLanePolygonsResource; // 190
    uint8_t unk_198[0x198 - (0x190 + sizeof(trafficLanePolygonsResource))];
    RaRef<CResource> trafficLaneSpotsResource; // 198
    uint8_t unk_1A0[0x1A0 - (0x198 + sizeof(trafficLaneSpotsResource))];
    RaRef<CResource> trafficSpatialRepresentationResource; // 1A0
    uint8_t unk_1A8[0x1A8 - (0x1A0 + sizeof(trafficSpatialRepresentationResource))];
    RaRef<CResource> trafficCollisionResource; // 1A8
    uint8_t unk_1B0[0x1B0 - (0x1A8 + sizeof(trafficCollisionResource))];
    RaRef<CResource> trafficNullAreaCollisionResource; // 1B0
    uint8_t unk_1B8[0x1B8 - (0x1B0 + sizeof(trafficNullAreaCollisionResource))];
    RaRef<CResource> smartObjectCompiledRootResource; // 1B8
    uint8_t unk_1C0[0x1C0 - (0x1B8 + sizeof(smartObjectCompiledRootResource))];
    RaRef<world::StreamingQueryDataResource> streamingQueryDataResource; // 1C0
    uint8_t unk_1F8[0x1F8 - (0x1C0 + sizeof(streamingQueryDataResource))];
    bool wasBuiltForSceneRecording; // 1F8
#else
    uint32_t version; // 40
    uint8_t unk44[0x50 - 0x44]; // 44
    Box worldBoundingBox; // 50
    DynArray<Ref<world::StreamingBlock>> blockRefs; // 70
    uint8_t unk80[0x90 - 0x80]; // 80
    Ref<world::EnvironmentDefinition> environmentDefinition; // 90
    Ref<CResource> persistentStateData; // A8
    Ref<CResource> deviceResource; // C0
    Ref<CResource> deviceInitResource; // D8
    Ref<CResource> mappinResource; // F0
    Ref<CResource> poiMappinResource; // 108
    Ref<CResource> areaResource; // 120
    Ref<CResource> lootResource; // 138
    Ref<CResource> locationResource; // 150
    Ref<CResource> geometryCacheResource; // 168
    RaRef<CResource> locomotionPathResource; // 180
    RaRef<world::AutoFoliageMapping> autoFoliageMapping; // 188
    RaRef<CResource> trafficPersistentResource; // 190
    RaRef<CResource> trafficLaneConnectivityResource; // 198
    RaRef<CResource> trafficLanePolygonsResource; // 1A0
    RaRef<CResource> trafficLaneSpotsResource; // 1A8
    RaRef<CResource> trafficSpatialRepresentationResource; // 1B0
    RaRef<CResource> trafficCollisionResource; // 1B8
    RaRef<CResource> trafficNullAreaCollisionResource; // 1C0
    RaRef<CResource> smartObjectCompiledRootResource; // 1C8
    RaRef<world::StreamingQueryDataResource> streamingQueryDataResource; // 1D0
    uint8_t unk1D8[0x208 - 0x1D8]; // 1D8
    bool wasBuiltForSceneRecording; // 208
    uint8_t unk209[0x210 - 0x209]; // 209
#endif
};
RED4EXT_ASSERT_SIZE(StreamingWorld, 0x210);
} // namespace world
using worldStreamingWorld = world::StreamingWorld;
} // namespace RED4ext

// clang-format on
