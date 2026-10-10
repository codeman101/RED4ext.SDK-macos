#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/LightComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EMaterialZone.hpp>

namespace RED4ext
{
struct CurveSet;
namespace world { struct Effect; }

namespace game
{
struct __declspec(align(0x10)) LightComponent : ent::LightComponent
{
    static constexpr const char* NAME = "gameLightComponent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_1F8[0x1F8 - ::RED4ext::Detail::DataSize<ent::LightComponent>];
    bool emissiveOnly; // 1F8
    uint8_t unk_1F9[0x1F9 - (0x1F8 + sizeof(emissiveOnly))];
    bool turnOnByDefault; // 1F9
    uint8_t unk_1FA[0x1FA - (0x1F9 + sizeof(turnOnByDefault))];
    game::EMaterialZone materialZone; // 1FA
    uint8_t unk_200[0x200 - (0x1FA + sizeof(materialZone))];
    CName meshBrokenAppearance; // 200
    uint8_t unk_208[0x208 - (0x200 + sizeof(meshBrokenAppearance))];
    float onStrength; // 208
    uint8_t unk_20C[0x20C - (0x208 + sizeof(onStrength))];
    float turnOnTime; // 20C
    uint8_t unk_210[0x210 - (0x20C + sizeof(turnOnTime))];
    CName turnOnCurve; // 210
    uint8_t unk_218[0x218 - (0x210 + sizeof(turnOnCurve))];
    float turnOffTime; // 218
    uint8_t unk_220[0x220 - (0x218 + sizeof(turnOffTime))];
    CName turnOffCurve; // 220
    uint8_t unk_228[0x228 - (0x220 + sizeof(turnOffCurve))];
    float loopTime; // 228
    uint8_t unk_230[0x230 - (0x228 + sizeof(loopTime))];
    CName loopCurve; // 230
    uint8_t unk_238[0x238 - (0x230 + sizeof(loopCurve))];
    bool synchronizedLoop; // 238
    uint8_t unk_239[0x239 - (0x238 + sizeof(synchronizedLoop))];
    bool isDestructible; // 239
    uint8_t unk_240[0x240 - (0x239 + sizeof(isDestructible))];
    CName colliderName; // 240
    uint8_t unk_248[0x248 - (0x240 + sizeof(colliderName))];
    CName colliderTag; // 248
    uint8_t unk_250[0x250 - (0x248 + sizeof(colliderTag))];
    RaRef<world::Effect> destructionEffect; // 250
    uint8_t unk_258[0x258 - (0x250 + sizeof(destructionEffect))];
    Ref<CurveSet> genericCurveSetOverride; // 258
#else
    bool emissiveOnly; // 200
    bool turnOnByDefault; // 201
    game::EMaterialZone materialZone; // 202
    uint8_t unk203[0x208 - 0x203]; // 203
    CName meshBrokenAppearance; // 208
    float onStrength; // 210
    float turnOnTime; // 214
    CName turnOnCurve; // 218
    float turnOffTime; // 220
    uint8_t unk224[0x228 - 0x224]; // 224
    CName turnOffCurve; // 228
    float loopTime; // 230
    uint8_t unk234[0x238 - 0x234]; // 234
    CName loopCurve; // 238
    bool synchronizedLoop; // 240
    bool isDestructible; // 241
    uint8_t unk242[0x248 - 0x242]; // 242
    CName colliderName; // 248
    CName colliderTag; // 250
    RaRef<world::Effect> destructionEffect; // 258
    Ref<CurveSet> genericCurveSetOverride; // 260
    uint8_t unk278[0x310 - 0x278]; // 278
#endif
};
RED4EXT_ASSERT_SIZE(LightComponent, 0x310);
} // namespace game
using gameLightComponent = game::LightComponent;
} // namespace RED4ext

// clang-format on
