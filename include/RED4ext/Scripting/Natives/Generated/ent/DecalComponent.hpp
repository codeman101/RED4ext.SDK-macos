#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/EDecalRenderMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/ERenderObjectType.hpp>
#include <RED4ext/Scripting/Natives/Generated/RenderDecalNormalsBlendingMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IVisualComponent.hpp>

namespace RED4ext
{
struct IMaterial;

namespace ent
{
struct __declspec(align(0x10)) DecalComponent : ent::IVisualComponent
{
    static constexpr const char* NAME = "entDecalComponent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_150[0x150 - ::RED4ext::Detail::DataSize<ent::IVisualComponent>];
    Ref<IMaterial> material; // 150
    uint8_t unk_168[0x168 - (0x150 + sizeof(material))];
    Vector3 visualScale; // 168
    uint8_t unk_174[0x174 - (0x168 + sizeof(visualScale))];
    float aspectRatio; // 174
    uint8_t unk_178[0x178 - (0x174 + sizeof(aspectRatio))];
    float scale; // 178
    uint8_t unk_17C[0x17C - (0x178 + sizeof(scale))];
    float alpha; // 17C
    uint8_t unk_180[0x180 - (0x17C + sizeof(alpha))];
    float normalThreshold; // 180
    uint8_t unk_184[0x184 - (0x180 + sizeof(normalThreshold))];
    float roughnessScale; // 184
    uint8_t unk_188[0x188 - (0x184 + sizeof(roughnessScale))];
    uint16_t orderNo; // 188
    uint8_t unk_18A[0x18A - (0x188 + sizeof(orderNo))];
    RenderDecalNormalsBlendingMode normalsBlendingMode; // 18A
    uint8_t unk_18B[0x18B - (0x18A + sizeof(normalsBlendingMode))];
    ERenderObjectType surfaceType; // 18B
    uint8_t unk_18C[0x18C - (0x18B + sizeof(surfaceType))];
    EDecalRenderMode decalRenderMode; // 18C
    uint8_t unk_18D[0x18D - (0x18C + sizeof(decalRenderMode))];
    bool verticalFlip; // 18D
    uint8_t unk_18E[0x18E - (0x18D + sizeof(verticalFlip))];
    bool horizontalFlip; // 18E
    uint8_t unk_18F[0x18F - (0x18E + sizeof(horizontalFlip))];
    bool isStretchingEnabled; // 18F
    uint8_t unk_190[0x190 - (0x18F + sizeof(isStretchingEnabled))];
    bool shouldCollectWithRayTracing; // 190
#else
    uint8_t unk140[0x150 - 0x140]; // 140
    Ref<IMaterial> material; // 150
    Vector3 visualScale; // 168
    float aspectRatio; // 174
    float scale; // 178
    float alpha; // 17C
    float normalThreshold; // 180
    float roughnessScale; // 184
    uint16_t orderNo; // 188
    RenderDecalNormalsBlendingMode normalsBlendingMode; // 18A
    ERenderObjectType surfaceType; // 18B
    EDecalRenderMode decalRenderMode; // 18C
    bool verticalFlip; // 18D
    bool horizontalFlip; // 18E
    bool isStretchingEnabled; // 18F
    bool shouldCollectWithRayTracing; // 190
    uint8_t unk191[0x1A0 - 0x191]; // 191
#endif
};
RED4EXT_ASSERT_SIZE(DecalComponent, 0x1A0);
} // namespace ent
using entDecalComponent = ent::DecalComponent;
} // namespace RED4ext

// clang-format on
