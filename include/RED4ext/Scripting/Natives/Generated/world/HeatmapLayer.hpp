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
struct HeatmapLayer : CResource
{
    static constexpr const char* NAME = "worldHeatmapLayer";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_50[0x50 - ::RED4ext::Detail::DataSize<CResource>];
    uint32_t minValue; // 50
    uint8_t unk_54[0x54 - (0x50 + sizeof(minValue))];
    uint32_t maxValue; // 54
    uint8_t unk_58[0x58 - (0x54 + sizeof(maxValue))];
    CString name; // 58
    uint8_t unk_78[0x78 - (0x58 + sizeof(name))];
    CString units; // 78
    uint8_t unk_98[0x98 - (0x78 + sizeof(units))];
    bool invert; // 98
#else
    uint8_t unk40[0x50 - 0x40]; // 40
    uint32_t minValue; // 50
    uint32_t maxValue; // 54
    CString name; // 58
    CString units; // 78
    bool invert; // 98
    uint8_t unk99[0xA0 - 0x99]; // 99
#endif
};
RED4EXT_ASSERT_SIZE(HeatmapLayer, 0xA0);
} // namespace world
using worldHeatmapLayer = world::HeatmapLayer;
} // namespace RED4ext

// clang-format on
