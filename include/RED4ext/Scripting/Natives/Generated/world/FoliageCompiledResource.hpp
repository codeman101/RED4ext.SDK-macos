#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>

namespace RED4ext
{
namespace world
{
struct FoliageCompiledResource : CResource
{
    static constexpr const char* NAME = "worldFoliageCompiledResource";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_3C[0x3C - ::RED4ext::Detail::DataSize<CResource>];
    uint32_t version; // 3C
    uint8_t unk_40[0x40 - (0x3C + sizeof(version))];
    uint32_t populationCount; // 40
    uint8_t unk_44[0x44 - (0x40 + sizeof(populationCount))];
    uint32_t bucketCount; // 44
    uint8_t unk_48[0x48 - (0x44 + sizeof(bucketCount))];
    DataBuffer dataBuffer; // 48
#else
    uint32_t version; // 40
    uint32_t populationCount; // 44
    uint32_t bucketCount; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
    DataBuffer dataBuffer; // 50
#endif
};
RED4EXT_ASSERT_SIZE(FoliageCompiledResource, 0x78);
} // namespace world
using worldFoliageCompiledResource = world::FoliageCompiledResource;
} // namespace RED4ext

// clang-format on
