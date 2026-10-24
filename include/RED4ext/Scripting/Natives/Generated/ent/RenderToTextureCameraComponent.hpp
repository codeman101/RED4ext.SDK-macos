#if defined(__APPLE__)
#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/ECameraRenderingQuality.hpp>
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
    uint8_t unk_268[0x268 - (0x254 + sizeof(resolutionHeight))];
    CName virtualCameraName; // 268
    uint8_t unk_270[0x270 - (0x268 + sizeof(virtualCameraName))];
    Ref<world::EnvironmentAreaParameters> env; // 270
    uint8_t unk_288[0x288 - (0x270 + sizeof(env))];
    WorldRenderAreaSettings params; // 288
    uint8_t unk_298[0x298 - (0x288 + sizeof(params))];
    ent::RenderToTextureMode renderingMode; // 298
    uint8_t unk_29C[0x29C - (0x298 + sizeof(renderingMode))];
    ECameraRenderingQuality renderingQuality; // 29C
    uint8_t unk_9E4[0x9E4 - (0x29C + sizeof(renderingQuality))];
    float streamingDistance; // 9E4
    uint8_t unk_9E8[0x9E8 - (0x9E4 + sizeof(streamingDistance))];
    float aspectRatio; // 9E8
    uint8_t unk_9EC[0x9EC - (0x9E8 + sizeof(aspectRatio))];
    Color backgroundColor; // 9EC
    uint8_t unk_9F0[0x9F0 - (0x9EC + sizeof(backgroundColor))];
    float depthCutDistance; // 9F0
    uint8_t unk_9F4[0x9F4 - (0x9F0 + sizeof(depthCutDistance))];
    RenderSceneLayer renderSceneLayer; // 9F4
    uint8_t unk_9F5[0x9F5 - (0x9F4 + sizeof(renderSceneLayer))];
    bool overrideBackgroundColor; // 9F5
    uint8_t unk_9F8[0x9F8 - (0x9F5 + sizeof(overrideBackgroundColor))];
    uint32_t renderFrequency; // 9F8
    uint8_t unk_9FC[0x9FC - (0x9F8 + sizeof(renderFrequency))];
    uint32_t renderPhase; // 9FC
    uint8_t unk_A01[0xA01 - (0x9FC + sizeof(renderPhase))];
    ent::RenderToTextureFeatures features; // A01
#else
    RaRef<DynamicTexture> dynamicTextureRes; // 1E0
    uint8_t unk1E8[0x1F8 - 0x1E8]; // 1E8
    Ref<DynamicTexture> depthDynamicTextureRes; // 1F8
    Ref<DynamicTexture> albedoDynamicTextureRes; // 210
    Ref<DynamicTexture> normalsDynamicTextureRes; // 228
    Ref<DynamicTexture> particlesDynamicTextureRes; // 240
    uint32_t resolutionWidth; // 258
    uint32_t resolutionHeight; // 25C
    uint8_t unk260[0x270 - 0x260]; // 260
    CName virtualCameraName; // 270
    Ref<world::EnvironmentAreaParameters> env; // 278
    WorldRenderAreaSettings params; // 290
    ent::RenderToTextureMode renderingMode; // 2A0
    uint8_t unk2A1[0x2A4 - 0x2A1]; // 2A1
    ECameraRenderingQuality renderingQuality; // 2A4
    uint8_t unk2A8[0xA34 - 0x2A8]; // 2A8
    float streamingDistance; // A34
    float aspectRatio; // A38
    Color backgroundColor; // A3C
    float depthCutDistance; // A40
    RenderSceneLayer renderSceneLayer; // A44
    bool overrideBackgroundColor; // A45
    uint8_t unkA46[0xA48 - 0xA46]; // A46
    uint32_t renderFrequency; // A48
    uint32_t renderPhase; // A4C
    uint8_t unkA50[0xA51 - 0xA50]; // A50
    ent::RenderToTextureFeatures features; // A51
    uint8_t unkA5C[0xA70 - 0xA5C]; // A5C
#endif
};
RED4EXT_ASSERT_SIZE(RenderToTextureCameraComponent, 0xA70);
} // namespace ent
using entRenderToTextureCameraComponent = ent::RenderToTextureCameraComponent;
} // namespace RED4ext

// clang-format on

#else
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
};
RED4EXT_ASSERT_SIZE(RenderToTextureCameraComponent, 0xA10);
} // namespace ent
using entRenderToTextureCameraComponent = ent::RenderToTextureCameraComponent;
} // namespace RED4ext

// clang-format on

#endif
