#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/EDecalRenderMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/ERenderObjectType.hpp>
#include <RED4ext/Scripting/Natives/Generated/HDRColor.hpp>
#include <RED4ext/Scripting/Natives/Generated/RenderDecalNormalsBlendingMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
struct IMaterial;

namespace world
{
struct __declspec(align(0x10)) StaticDecalNode : world::Node
{
    static constexpr const char* NAME = "worldStaticDecalNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<world::Node>];
    RaRef<IMaterial> material; // 38
    uint8_t unk_40[0x40 - (0x38 + sizeof(material))];
    HDRColor diffuseColorScale; // 40
    uint8_t unk_50[0x50 - (0x40 + sizeof(diffuseColorScale))];
    float autoHideDistance; // 50
    uint8_t unk_54[0x54 - (0x50 + sizeof(autoHideDistance))];
    float forcedAutoHideDistance; // 54
    uint8_t unk_58[0x58 - (0x54 + sizeof(forcedAutoHideDistance))];
    float alpha; // 58
    uint8_t unk_5C[0x5C - (0x58 + sizeof(alpha))];
    float normalThreshold; // 5C
    uint8_t unk_60[0x60 - (0x5C + sizeof(normalThreshold))];
    float roughnessScale; // 60
    uint8_t unk_64[0x64 - (0x60 + sizeof(roughnessScale))];
    uint16_t orderNo; // 64
    uint8_t unk_66[0x66 - (0x64 + sizeof(orderNo))];
    ERenderObjectType surfaceType; // 66
    uint8_t unk_67[0x67 - (0x66 + sizeof(surfaceType))];
    EDecalRenderMode decalRenderMode; // 67
    uint8_t unk_68[0x68 - (0x67 + sizeof(decalRenderMode))];
    RenderDecalNormalsBlendingMode normalsBlendingMode; // 68
    uint8_t unk_69[0x69 - (0x68 + sizeof(normalsBlendingMode))];
    uint8_t decalNodeVersion; // 69
    uint8_t unk_6A[0x6A - (0x69 + sizeof(decalNodeVersion))];
    bool isStretchingEnabled; // 6A
    uint8_t unk_6B[0x6B - (0x6A + sizeof(isStretchingEnabled))];
    bool verticalFlip; // 6B
    uint8_t unk_6C[0x6C - (0x6B + sizeof(verticalFlip))];
    bool horizontalFlip; // 6C
    uint8_t unk_6D[0x6D - (0x6C + sizeof(horizontalFlip))];
    bool enableNormalTreshold; // 6D
    uint8_t unk_6E[0x6E - (0x6D + sizeof(enableNormalTreshold))];
    bool shouldCollectWithRayTracing; // 6E
#else
    RaRef<IMaterial> material; // 38
    HDRColor diffuseColorScale; // 40
    float autoHideDistance; // 50
    float forcedAutoHideDistance; // 54
    float alpha; // 58
    float normalThreshold; // 5C
    float roughnessScale; // 60
    uint16_t orderNo; // 64
    ERenderObjectType surfaceType; // 66
    EDecalRenderMode decalRenderMode; // 67
    RenderDecalNormalsBlendingMode normalsBlendingMode; // 68
    uint8_t decalNodeVersion; // 69
    bool isStretchingEnabled; // 6A
    bool verticalFlip; // 6B
    bool horizontalFlip; // 6C
    bool enableNormalTreshold; // 6D
    bool shouldCollectWithRayTracing; // 6E
    uint8_t unk6F[0x70 - 0x6F]; // 6F
#endif
};
RED4EXT_ASSERT_SIZE(StaticDecalNode, 0x70);
} // namespace world
using worldStaticDecalNode = world::StaticDecalNode;
} // namespace RED4ext

// clang-format on
