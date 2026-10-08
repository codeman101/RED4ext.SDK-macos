#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/RenderSceneLayer.hpp>
#include <RED4ext/Scripting/Natives/Generated/WorldRenderAreaSettings.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/BaseCameraComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/RenderToTextureFeatures.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/RenderToTextureMode.hpp>

namespace RED4ext
{
struct DynamicTexture;
namespace world { struct EnvironmentAreaParameters; }

namespace ent
{
struct __declspec(align(0x10)) RenderToTextureCameraComponent : ent::BaseCameraComponent
{
    static constexpr const char* NAME = "entRenderToTextureCameraComponent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_1D8[0x1D8 - ::RED4ext::Detail::DataSize<ent::BaseCameraComponent>];
    RaRef<DynamicTexture> dynamicTextureRes; // 1D8
    uint8_t unk_1F0[0x1F0 - (0x1D8 + sizeof(dynamicTextureRes))];
    Ref<DynamicTexture> depthDynamicTextureRes; // 1F0
    uint8_t unk_208[0x208 - (0x1F0 + sizeof(depthDynamicTextureRes))];
    Ref<DynamicTexture> albedoDynamicTextureRes; // 208
    uint8_t unk_220[0x220 - (0x208 + sizeof(albedoDynamicTextureRes))];
    Ref<DynamicTexture> normalsDynamicTextureRes; // 220
    uint8_t unk_238[0x238 - (0x220 + sizeof(normalsDynamicTextureRes))];
    Ref<DynamicTexture> particlesDynamicTextureRes; // 238
    uint8_t unk_250[0x250 - (0x238 + sizeof(particlesDynamicTextureRes))];
    uint32_t resolutionWidth; // 250
    uint8_t unk_254[0x254 - (0x250 + sizeof(resolutionWidth))];
    uint32_t resolutionHeight; // 254
    uint8_t unk_258[0x258 - (0x254 + sizeof(resolutionHeight))];
    CName virtualCameraName; // 258
    uint8_t unk_260[0x260 - (0x258 + sizeof(virtualCameraName))];
    Ref<world::EnvironmentAreaParameters> env; // 260
    uint8_t unk_278[0x278 - (0x260 + sizeof(env))];
    WorldRenderAreaSettings params; // 278
    uint8_t unk_288[0x288 - (0x278 + sizeof(params))];
    ent::RenderToTextureMode renderingMode; // 288
    uint8_t unk_9D4[0x9D4 - (0x288 + sizeof(renderingMode))];
    float streamingDistance; // 9D4
    uint8_t unk_9D8[0x9D8 - (0x9D4 + sizeof(streamingDistance))];
    float aspectRatio; // 9D8
    uint8_t unk_9DC[0x9DC - (0x9D8 + sizeof(aspectRatio))];
    Color backgroundColor; // 9DC
    uint8_t unk_9E0[0x9E0 - (0x9DC + sizeof(backgroundColor))];
    float depthCutDistance; // 9E0
    uint8_t unk_9E4[0x9E4 - (0x9E0 + sizeof(depthCutDistance))];
    RenderSceneLayer renderSceneLayer; // 9E4
    uint8_t unk_9E5[0x9E5 - (0x9E4 + sizeof(renderSceneLayer))];
    bool overrideBackgroundColor; // 9E5
    uint8_t unk_9E6[0x9E6 - (0x9E5 + sizeof(overrideBackgroundColor))];
    ent::RenderToTextureFeatures features; // 9E6
#else
    RaRef<DynamicTexture> dynamicTextureRes; // 1E0
    uint8_t unk1E8[0x1F8 - 0x1E8]; // 1E8
    Ref<DynamicTexture> depthDynamicTextureRes; // 1F8
    Ref<DynamicTexture> albedoDynamicTextureRes; // 210
    Ref<DynamicTexture> normalsDynamicTextureRes; // 228
    Ref<DynamicTexture> particlesDynamicTextureRes; // 240
    uint32_t resolutionWidth; // 258
    uint32_t resolutionHeight; // 25C
    CName virtualCameraName; // 260
    Ref<world::EnvironmentAreaParameters> env; // 268
    WorldRenderAreaSettings params; // 280
    ent::RenderToTextureMode renderingMode; // 290
    uint8_t unk291[0x9E4 - 0x291]; // 291
    float streamingDistance; // 9E4
    float aspectRatio; // 9E8
    Color backgroundColor; // 9EC
    float depthCutDistance; // 9F0
    RenderSceneLayer renderSceneLayer; // 9F4
    bool overrideBackgroundColor; // 9F5
    ent::RenderToTextureFeatures features; // 9F6
    uint8_t unk9FE[0xA10 - 0x9FE]; // 9FE
#endif
};
RED4EXT_ASSERT_SIZE(RenderToTextureCameraComponent, 0xA10);
} // namespace ent
using entRenderToTextureCameraComponent = ent::RenderToTextureCameraComponent;
} // namespace RED4ext

// clang-format on
