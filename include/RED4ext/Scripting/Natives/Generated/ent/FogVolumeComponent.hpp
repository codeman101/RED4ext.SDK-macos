#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IVisualComponent.hpp>

namespace RED4ext
{
namespace ent
{
struct __declspec(align(0x10)) FogVolumeComponent : ent::IVisualComponent
{
    static constexpr const char* NAME = "entFogVolumeComponent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_13C[0x13C - ::RED4ext::Detail::DataSize<ent::IVisualComponent>];
    float blendFalloff; // 13C
    uint8_t unk_140[0x140 - (0x13C + sizeof(blendFalloff))];
    float densityFalloff; // 140
    uint8_t unk_144[0x144 - (0x140 + sizeof(densityFalloff))];
    float densityFactor; // 144
    uint8_t unk_148[0x148 - (0x144 + sizeof(densityFactor))];
    float absorption; // 148
    uint8_t unk_14C[0x14C - (0x148 + sizeof(absorption))];
    Vector3 size; // 14C
    uint8_t unk_158[0x158 - (0x14C + sizeof(size))];
    Color color; // 158
#else
    float blendFalloff; // 140
    float densityFalloff; // 144
    float densityFactor; // 148
    float absorption; // 14C
    Vector3 size; // 150
    Color color; // 15C
    uint8_t unk160[0x170 - 0x160]; // 160
#endif
};
RED4EXT_ASSERT_SIZE(FogVolumeComponent, 0x170);
} // namespace ent
using entFogVolumeComponent = ent::FogVolumeComponent;
} // namespace RED4ext

// clang-format on
