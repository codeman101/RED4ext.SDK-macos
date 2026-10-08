#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace anim { struct FacialCustomizationSet; }

namespace ent
{
struct FacialCustomizationComponent : ent::IComponent
{
    static constexpr const char* NAME = "entFacialCustomizationComponent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_90[0x90 - ::RED4ext::Detail::DataSize<ent::IComponent>];
    RaRef<anim::FacialCustomizationSet> customizationSet; // 90
    uint8_t unk_F0[0xF0 - (0x90 + sizeof(customizationSet))];
    bool debugIgnoreComponent; // F0
    uint8_t unk_F4[0xF4 - (0xF0 + sizeof(debugIgnoreComponent))];
    uint32_t eyes; // F4
    uint8_t unk_F8[0xF8 - (0xF4 + sizeof(eyes))];
    uint32_t nose; // F8
    uint8_t unk_FC[0xFC - (0xF8 + sizeof(nose))];
    uint32_t mouth; // FC
    uint8_t unk_100[0x100 - (0xFC + sizeof(mouth))];
    uint32_t jaw; // 100
    uint8_t unk_104[0x104 - (0x100 + sizeof(jaw))];
    uint32_t ears; // 104
#else
    RaRef<anim::FacialCustomizationSet> customizationSet; // 90
    uint8_t unk98[0xF0 - 0x98]; // 98
    bool debugIgnoreComponent; // F0
    uint8_t unkF1[0xF4 - 0xF1]; // F1
    uint32_t eyes; // F4
    uint32_t nose; // F8
    uint32_t mouth; // FC
    uint32_t jaw; // 100
    uint32_t ears; // 104
    uint8_t unk108[0x148 - 0x108]; // 108
#endif
};
RED4EXT_ASSERT_SIZE(FacialCustomizationComponent, 0x148);
} // namespace ent
using entFacialCustomizationComponent = ent::FacialCustomizationComponent;
} // namespace RED4ext

// clang-format on
