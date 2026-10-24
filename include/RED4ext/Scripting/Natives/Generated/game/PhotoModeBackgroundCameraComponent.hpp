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

namespace RED4ext
{
struct DynamicTexture;
namespace world { struct EnvironmentAreaParameters; }

namespace game
{
struct __declspec(align(0x10)) PhotoModeBackgroundCameraComponent : ent::BaseCameraComponent
{
    static constexpr const char* NAME = "gamePhotoModeBackgroundCameraComponent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_1D8[0x1D8 - ::RED4ext::Detail::DataSize<ent::BaseCameraComponent>];
    RaRef<DynamicTexture> dynamicTextureRes; // 1D8
    uint8_t unk_1F8[0x1F8 - (0x1D8 + sizeof(dynamicTextureRes))];
    CName virtualCameraName; // 1F8
    uint8_t unk_200[0x200 - (0x1F8 + sizeof(virtualCameraName))];
    Ref<world::EnvironmentAreaParameters> env; // 200
    uint8_t unk_218[0x218 - (0x200 + sizeof(env))];
    WorldRenderAreaSettings params; // 218
    uint8_t unk_900[0x900 - (0x218 + sizeof(params))];
    float streamingDistance; // 900
    uint8_t unk_904[0x904 - (0x900 + sizeof(streamingDistance))];
    Color backgroundColor; // 904
    uint8_t unk_908[0x908 - (0x904 + sizeof(backgroundColor))];
    float depthCutDistance; // 908
    uint8_t unk_90C[0x90C - (0x908 + sizeof(depthCutDistance))];
    RenderSceneLayer renderSceneLayer; // 90C
    uint8_t unk_90D[0x90D - (0x90C + sizeof(renderSceneLayer))];
    bool overrideBackgroundColor; // 90D
#else
    RaRef<DynamicTexture> dynamicTextureRes; // 1E0
    uint8_t unk1E8[0x200 - 0x1E8]; // 1E8
    CName virtualCameraName; // 200
    Ref<world::EnvironmentAreaParameters> env; // 208
    WorldRenderAreaSettings params; // 220
    uint8_t unk230[0x950 - 0x230]; // 230
    float streamingDistance; // 950
    Color backgroundColor; // 954
    float depthCutDistance; // 958
    RenderSceneLayer renderSceneLayer; // 95C
    bool overrideBackgroundColor; // 95D
    uint8_t unk95E[0x960 - 0x95E]; // 95E
#endif
};
RED4EXT_ASSERT_SIZE(PhotoModeBackgroundCameraComponent, 0x960);
} // namespace game
using gamePhotoModeBackgroundCameraComponent = game::PhotoModeBackgroundCameraComponent;
} // namespace RED4ext

// clang-format on
