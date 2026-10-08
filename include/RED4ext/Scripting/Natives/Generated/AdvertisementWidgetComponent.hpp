#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/AdvertisementFormat.hpp>
#include <RED4ext/Scripting/Natives/Generated/IWorldWidgetComponent.hpp>

namespace RED4ext
{
struct __declspec(align(0x10)) AdvertisementWidgetComponent : IWorldWidgetComponent
{
    static constexpr const char* NAME = "AdvertisementWidgetComponent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_2AC[0x2AC - ::RED4ext::Detail::DataSize<IWorldWidgetComponent>];
    AdvertisementFormat format; // 2AC
    uint8_t unk_2B0[0x2B0 - (0x2AC + sizeof(format))];
    TweakDBID adGroupTDBID; // 2B0
    uint8_t unk_2C0[0x2C0 - (0x2B0 + sizeof(adGroupTDBID))];
    bool enableOverride; // 2C0
    uint8_t unk_2C4[0x2C4 - (0x2C0 + sizeof(enableOverride))];
    TweakDBID adOverrideTDBID; // 2C4
    uint8_t unk_2CC[0x2CC - (0x2C4 + sizeof(adOverrideTDBID))];
    uint32_t adVersion; // 2CC
    uint8_t unk_2D0[0x2D0 - (0x2CC + sizeof(adVersion))];
    bool useOnlyAttachedLights; // 2D0
#else
    AdvertisementFormat format; // 2B0
    uint8_t unk2B1[0x2B4 - 0x2B1]; // 2B1
    TweakDBID adGroupTDBID; // 2B4
    uint8_t unk2BC[0x2C4 - 0x2BC]; // 2BC
    bool enableOverride; // 2C4
    uint8_t unk2C5[0x2C8 - 0x2C5]; // 2C5
    TweakDBID adOverrideTDBID; // 2C8
    uint32_t adVersion; // 2D0
    bool useOnlyAttachedLights; // 2D4
    uint8_t unk2D5[0x330 - 0x2D5]; // 2D5
#endif
};
RED4EXT_ASSERT_SIZE(AdvertisementWidgetComponent, 0x330);
} // namespace RED4ext

// clang-format on
