#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/WidgetBaseComponent.hpp>

namespace RED4ext
{
namespace world::ui { struct MeshTargetBinding; }

struct __declspec(align(0x10)) IWorldWidgetComponent : WidgetBaseComponent
{
    static constexpr const char* NAME = "IWorldWidgetComponent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_1D0[0x1D0 - ::RED4ext::Detail::DataSize<WidgetBaseComponent>];
    float glitchValue; // 1D0
    uint8_t unk_200[0x200 - (0x1D0 + sizeof(glitchValue))];
    Handle<world::ui::MeshTargetBinding> meshTargetBinding; // 200
    uint8_t unk_290[0x290 - (0x200 + sizeof(meshTargetBinding))];
    Color tintColor; // 290
    uint8_t unk_294[0x294 - (0x290 + sizeof(tintColor))];
    float screenAreaMultiplier; // 294
    uint8_t unk_298[0x298 - (0x294 + sizeof(screenAreaMultiplier))];
    uint32_t textureMinMipBias; // 298
    uint8_t unk_29C[0x29C - (0x298 + sizeof(textureMinMipBias))];
    uint32_t textureMaxMipBias; // 29C
#else
    uint8_t unk1A0[0x1D0 - 0x1A0]; // 1A0
    float glitchValue; // 1D0
    uint8_t unk1D4[0x200 - 0x1D4]; // 1D4
    Handle<world::ui::MeshTargetBinding> meshTargetBinding; // 200
    uint8_t unk210[0x290 - 0x210]; // 210
    Color tintColor; // 290
    float screenAreaMultiplier; // 294
    uint32_t textureMinMipBias; // 298
    uint32_t textureMaxMipBias; // 29C
    uint8_t unk2A0[0x2B0 - 0x2A0]; // 2A0
#endif
};
RED4EXT_ASSERT_SIZE(IWorldWidgetComponent, 0x2B0);
} // namespace RED4ext

// clang-format on
