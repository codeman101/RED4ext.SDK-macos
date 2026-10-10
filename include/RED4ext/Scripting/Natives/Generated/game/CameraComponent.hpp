#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/BaseCameraComponent.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) CameraComponent : ent::BaseCameraComponent
{
    static constexpr const char* NAME = "gameCameraComponent";
    static constexpr const char* ALIAS = "CameraComponent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_1E0[0x1E0 - ::RED4ext::Detail::DataSize<ent::BaseCameraComponent>];
    CName animParamFovOverrideWeight; // 1E0
    uint8_t unk_1E8[0x1E8 - (0x1E0 + sizeof(animParamFovOverrideWeight))];
    CName animParamFovOverrideValue; // 1E8
    uint8_t unk_1F0[0x1F0 - (0x1E8 + sizeof(animParamFovOverrideValue))];
    CName animParamZoomOverrideWeight; // 1F0
    uint8_t unk_1F8[0x1F8 - (0x1F0 + sizeof(animParamZoomOverrideWeight))];
    CName animParamZoomOverrideValue; // 1F8
    uint8_t unk_200[0x200 - (0x1F8 + sizeof(animParamZoomOverrideValue))];
    CName animParamZoomWeaponOverrideWeight; // 200
    uint8_t unk_208[0x208 - (0x200 + sizeof(animParamZoomWeaponOverrideWeight))];
    CName animParamZoomWeaponOverrideValue; // 208
    uint8_t unk_210[0x210 - (0x208 + sizeof(animParamZoomWeaponOverrideValue))];
    CName animParamdofIntensity; // 210
    uint8_t unk_218[0x218 - (0x210 + sizeof(animParamdofIntensity))];
    CName animParamdofNearBlur; // 218
    uint8_t unk_220[0x220 - (0x218 + sizeof(animParamdofNearBlur))];
    CName animParamdofNearFocus; // 220
    uint8_t unk_228[0x228 - (0x220 + sizeof(animParamdofNearFocus))];
    CName animParamdofFarBlur; // 228
    uint8_t unk_230[0x230 - (0x228 + sizeof(animParamdofFarBlur))];
    CName animParamdofFarFocus; // 230
    uint8_t unk_238[0x238 - (0x230 + sizeof(animParamdofFarFocus))];
    CName animParamWeaponNearPlaneCM; // 238
    uint8_t unk_240[0x240 - (0x238 + sizeof(animParamWeaponNearPlaneCM))];
    CName animParamWeaponFarPlaneCM; // 240
    uint8_t unk_248[0x248 - (0x240 + sizeof(animParamWeaponFarPlaneCM))];
    CName animParamWeaponEdgesSharpness; // 248
    uint8_t unk_250[0x250 - (0x248 + sizeof(animParamWeaponEdgesSharpness))];
    CName animParamWeaponVignetteIntensity; // 250
    uint8_t unk_258[0x258 - (0x250 + sizeof(animParamWeaponVignetteIntensity))];
    CName animParamWeaponVignetteRadius; // 258
    uint8_t unk_260[0x260 - (0x258 + sizeof(animParamWeaponVignetteRadius))];
    CName animParamWeaponVignetteCircular; // 260
    uint8_t unk_268[0x268 - (0x260 + sizeof(animParamWeaponVignetteCircular))];
    CName animParamWeaponBlurIntensity; // 268
    uint8_t unk_270[0x270 - (0x268 + sizeof(animParamWeaponBlurIntensity))];
    float zoomOverrideWeight; // 270
    uint8_t unk_274[0x274 - (0x270 + sizeof(zoomOverrideWeight))];
    float zoomOverrideValue; // 274
    uint8_t unk_278[0x278 - (0x274 + sizeof(zoomOverrideValue))];
    float zoomWeaponOverrideWeight; // 278
    uint8_t unk_27C[0x27C - (0x278 + sizeof(zoomWeaponOverrideWeight))];
    float zoomWeaponOverrideValue; // 27C
    uint8_t unk_2A4[0x2A4 - (0x27C + sizeof(zoomWeaponOverrideValue))];
    float fovOverrideWeight; // 2A4
    uint8_t unk_2A8[0x2A8 - (0x2A4 + sizeof(fovOverrideWeight))];
    float fovOverrideValue; // 2A8
#else
    uint8_t unk1E0[0x1E8 - 0x1E0]; // 1E0
    CName animParamFovOverrideWeight; // 1E8
    CName animParamFovOverrideValue; // 1F0
    CName animParamZoomOverrideWeight; // 1F8
    CName animParamZoomOverrideValue; // 200
    CName animParamZoomWeaponOverrideWeight; // 208
    CName animParamZoomWeaponOverrideValue; // 210
    CName animParamdofIntensity; // 218
    CName animParamdofNearBlur; // 220
    CName animParamdofNearFocus; // 228
    CName animParamdofFarBlur; // 230
    CName animParamdofFarFocus; // 238
    CName animParamWeaponNearPlaneCM; // 240
    CName animParamWeaponFarPlaneCM; // 248
    CName animParamWeaponEdgesSharpness; // 250
    CName animParamWeaponVignetteIntensity; // 258
    CName animParamWeaponVignetteRadius; // 260
    CName animParamWeaponVignetteCircular; // 268
    CName animParamWeaponBlurIntensity; // 270
    float zoomOverrideWeight; // 278
    float zoomOverrideValue; // 27C
    float zoomWeaponOverrideWeight; // 280
    float zoomWeaponOverrideValue; // 284
    uint8_t unk288[0x2AC - 0x288]; // 288
    float fovOverrideWeight; // 2AC
    float fovOverrideValue; // 2B0
    uint8_t unk2B4[0x320 - 0x2B4]; // 2B4
#endif
};
RED4EXT_ASSERT_SIZE(CameraComponent, 0x320);
} // namespace game
using gameCameraComponent = game::CameraComponent;
using CameraComponent = game::CameraComponent;
} // namespace RED4ext

// clang-format on
