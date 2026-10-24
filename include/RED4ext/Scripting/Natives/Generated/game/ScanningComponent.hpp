#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Sphere.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Component.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ScanningTooltipElementDef.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) ScanningComponent : game::Component
{
    static constexpr const char* NAME = "gameScanningComponent";
    static constexpr const char* ALIAS = "ScanningComponent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_A8[0xA8 - ::RED4ext::Detail::DataSize<game::Component>];
    bool cpoEnableMultiplePlayersScanningModifier; // A8
    uint8_t unk_A9[0xA9 - (0xA8 + sizeof(cpoEnableMultiplePlayersScanningModifier))];
    bool autoGenerateBoundingSphere; // A9
    uint8_t unk_AA[0xAA - (0xA9 + sizeof(autoGenerateBoundingSphere))];
    bool ignoresScanningDistanceLimit; // AA
    uint8_t unk_B0[0xB0 - (0xAA + sizeof(ignoresScanningDistanceLimit))];
    float timeNeeded; // B0
    uint8_t unk_C0[0xC0 - (0xB0 + sizeof(timeNeeded))];
    Sphere boundingSphere; // C0
    uint8_t unk_D8[0xD8 - (0xC0 + sizeof(boundingSphere))];
    DynArray<game::ScanningTooltipElementDef> scannableData; // D8
#else
    bool cpoEnableMultiplePlayersScanningModifier; // A8
    bool autoGenerateBoundingSphere; // A9
    bool ignoresScanningDistanceLimit; // AA
    uint8_t unkAB[0xB0 - 0xAB]; // AB
    float timeNeeded; // B0
    uint8_t unkB4[0xC0 - 0xB4]; // B4
    Sphere boundingSphere; // C0
    uint8_t unkD0[0xD8 - 0xD0]; // D0
    DynArray<game::ScanningTooltipElementDef> scannableData; // D8
    uint8_t unkE8[0x110 - 0xE8]; // E8
#endif
};
RED4EXT_ASSERT_SIZE(ScanningComponent, 0x110);
} // namespace game
using gameScanningComponent = game::ScanningComponent;
using ScanningComponent = game::ScanningComponent;
} // namespace RED4ext

// clang-format on
