#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ITriggerAreaNotifer.hpp>

namespace RED4ext
{
namespace world
{
struct WeatherAreaNotifier : world::ITriggerAreaNotifer
{
    static constexpr const char* NAME = "worldWeatherAreaNotifier";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_B4[0xB4 - ::RED4ext::Detail::DataSize<world::ITriggerAreaNotifer>];
    float horizontalFadeDistance; // B4
    uint8_t unk_B8[0xB8 - (0xB4 + sizeof(horizontalFadeDistance))];
    float verticalFadeDistance; // B8
    uint8_t unk_C0[0xC0 - (0xB8 + sizeof(verticalFadeDistance))];
    DynArray<CName> weatherStateNames; // C0
    uint8_t unk_D0[0xD0 - (0xC0 + sizeof(weatherStateNames))];
    DynArray<float> weatherStateValues; // D0
#else
    float horizontalFadeDistance; // B8
    float verticalFadeDistance; // BC
    DynArray<CName> weatherStateNames; // C0
    DynArray<float> weatherStateValues; // D0
#endif
};
RED4EXT_ASSERT_SIZE(WeatherAreaNotifier, 0xE0);
} // namespace world
using worldWeatherAreaNotifier = world::WeatherAreaNotifier;
} // namespace RED4ext

// clang-format on
