#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/GameTime.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/LightComponent.hpp>

namespace RED4ext
{
namespace cp
{
struct __declspec(align(0x10)) GameplayLightComponent : ent::LightComponent
{
    static constexpr const char* NAME = "cpGameplayLightComponent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_1F8[0x1F8 - ::RED4ext::Detail::DataSize<ent::LightComponent>];
    bool reactToTime; // 1F8
    uint8_t unk_1FC[0x1FC - (0x1F8 + sizeof(reactToTime))];
    GameTime begin; // 1FC
    uint8_t unk_200[0x200 - (0x1FC + sizeof(begin))];
    GameTime end; // 200
    uint8_t unk_204[0x204 - (0x200 + sizeof(end))];
    float probability; // 204
    uint8_t unk_208[0x208 - (0x204 + sizeof(probability))];
    GameTime delayRange; // 208
#else
    bool reactToTime; // 200
    uint8_t unk201[0x204 - 0x201]; // 201
    GameTime begin; // 204
    GameTime end; // 208
    float probability; // 20C
    GameTime delayRange; // 210
    uint8_t unk214[0x220 - 0x214]; // 214
#endif
};
RED4EXT_ASSERT_SIZE(GameplayLightComponent, 0x220);
} // namespace cp
using cpGameplayLightComponent = cp::GameplayLightComponent;
} // namespace RED4ext

// clang-format on
