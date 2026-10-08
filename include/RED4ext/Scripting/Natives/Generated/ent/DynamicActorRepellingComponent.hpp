#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/RepellingShape.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/RepellingType.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/WindShapeAnchorPointDepth.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/WindShapeAnchorPointHorz.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/WindShapeAnchorPointVert.hpp>

namespace RED4ext
{
namespace ent
{
struct __declspec(align(0x10)) DynamicActorRepellingComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "entDynamicActorRepellingComponent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_1B0[0x1B0 - ::RED4ext::Detail::DataSize<ent::IPlacedComponent>];
    float magnitude; // 1B0
    uint8_t unk_1B4[0x1B4 - (0x1B0 + sizeof(magnitude))];
    ent::RepellingType type; // 1B4
    uint8_t unk_1B8[0x1B8 - (0x1B4 + sizeof(type))];
    ent::RepellingShape shape; // 1B8
    uint8_t unk_1BC[0x1BC - (0x1B8 + sizeof(shape))];
    float bendIntensity; // 1BC
    uint8_t unk_1C0[0x1C0 - (0x1BC + sizeof(bendIntensity))];
    rend::WindShapeAnchorPointVert anchorPointVert; // 1C0
    uint8_t unk_1C4[0x1C4 - (0x1C0 + sizeof(anchorPointVert))];
    rend::WindShapeAnchorPointHorz anchorPointHorz; // 1C4
    uint8_t unk_1C8[0x1C8 - (0x1C4 + sizeof(anchorPointHorz))];
    rend::WindShapeAnchorPointDepth anchorPointDepth; // 1C8
    uint8_t unk_1CC[0x1CC - (0x1C8 + sizeof(anchorPointDepth))];
    float radius; // 1CC
    uint8_t unk_1D0[0x1D0 - (0x1CC + sizeof(radius))];
    float capsuleRadius; // 1D0
    uint8_t unk_1D4[0x1D4 - (0x1D0 + sizeof(capsuleRadius))];
    float capsuleHeight; // 1D4
#else
    uint8_t unk120[0x1B0 - 0x120]; // 120
    float magnitude; // 1B0
    ent::RepellingType type; // 1B4
    uint8_t unk1B5[0x1B8 - 0x1B5]; // 1B5
    ent::RepellingShape shape; // 1B8
    float bendIntensity; // 1BC
    rend::WindShapeAnchorPointVert anchorPointVert; // 1C0
    rend::WindShapeAnchorPointHorz anchorPointHorz; // 1C4
    rend::WindShapeAnchorPointDepth anchorPointDepth; // 1C8
    float radius; // 1CC
    float capsuleRadius; // 1D0
    float capsuleHeight; // 1D4
    uint8_t unk1D8[0x1E0 - 0x1D8]; // 1D8
#endif
};
RED4EXT_ASSERT_SIZE(DynamicActorRepellingComponent, 0x1E0);
} // namespace ent
using entDynamicActorRepellingComponent = ent::DynamicActorRepellingComponent;
} // namespace RED4ext

// clang-format on
