#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace game::events
{
struct __declspec(align(0x10)) DeviceStartPlayerCameraControlEvent : red::Event
{
    static constexpr const char* NAME = "gameeventsDeviceStartPlayerCameraControlEvent";
    static constexpr const char* ALIAS = "DeviceStartPlayerCameraControlEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    WeakHandle<game::Object> playerController; // 40
    uint8_t unk_50[0x50 - (0x40 + sizeof(playerController))];
    Vector4 initialRotation; // 50
    uint8_t unk_60[0x60 - (0x50 + sizeof(initialRotation))];
    float minYaw; // 60
    uint8_t unk_64[0x64 - (0x60 + sizeof(minYaw))];
    float maxYaw; // 64
    uint8_t unk_68[0x68 - (0x64 + sizeof(maxYaw))];
    float minPitch; // 68
    uint8_t unk_6C[0x6C - (0x68 + sizeof(minPitch))];
    float maxPitch; // 6C
#else
    WeakHandle<game::Object> playerController; // 40
    Vector4 initialRotation; // 50
    float minYaw; // 60
    float maxYaw; // 64
    float minPitch; // 68
    float maxPitch; // 6C
#endif
};
RED4EXT_ASSERT_SIZE(DeviceStartPlayerCameraControlEvent, 0x70);
} // namespace game::events
using gameeventsDeviceStartPlayerCameraControlEvent = game::events::DeviceStartPlayerCameraControlEvent;
using DeviceStartPlayerCameraControlEvent = game::events::DeviceStartPlayerCameraControlEvent;
} // namespace RED4ext

// clang-format on
