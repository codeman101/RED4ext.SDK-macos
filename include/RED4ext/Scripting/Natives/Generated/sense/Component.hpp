#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>

namespace RED4ext
{
namespace sense { struct SensorObject; }
namespace sense { struct VisibleObject; }

namespace sense
{
struct __declspec(align(0x10)) Component : ent::IPlacedComponent
{
    static constexpr const char* NAME = "senseComponent";
    static constexpr const char* ALIAS = "SenseComponent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_120[0x120 - ::RED4ext::Detail::DataSize<ent::IPlacedComponent>];
    Handle<sense::SensorObject> sensorObject; // 120
    uint8_t unk_130[0x130 - (0x120 + sizeof(sensorObject))];
    Handle<sense::VisibleObject> visibleObject; // 130
    uint8_t unk_140[0x140 - (0x130 + sizeof(visibleObject))];
    bool enableBeingDetectable; // 140
    uint8_t unk_141[0x141 - (0x140 + sizeof(enableBeingDetectable))];
    bool forceDisableUI; // 141
#else
    Handle<sense::SensorObject> sensorObject; // 120
    Handle<sense::VisibleObject> visibleObject; // 130
    bool enableBeingDetectable; // 140
    bool forceDisableUI; // 141
    uint8_t unk142[0x1A0 - 0x142]; // 142
#endif
};
RED4EXT_ASSERT_SIZE(Component, 0x1A0);
} // namespace sense
using senseComponent = sense::Component;
using SenseComponent = sense::Component;
} // namespace RED4ext

// clang-format on
