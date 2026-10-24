#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/WorldTransform.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/CameraComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/CinematicCameraShotGroup.hpp>

namespace RED4ext
{
namespace vehicle
{
struct __declspec(align(0x10)) CinematicCameraComponent : game::CameraComponent
{
    static constexpr const char* NAME = "vehicleCinematicCameraComponent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_318[0x318 - ::RED4ext::Detail::DataSize<game::CameraComponent>];
    DynArray<vehicle::CinematicCameraShotGroup> groups; // 318
    uint8_t unk_368[0x368 - (0x318 + sizeof(groups))];
    bool teleportThisFrame; // 368
    uint8_t unk_370[0x370 - (0x368 + sizeof(teleportThisFrame))];
    WorldTransform targetTransform; // 370
#else
    DynArray<vehicle::CinematicCameraShotGroup> groups; // 320
    uint8_t unk330[0x370 - 0x330]; // 330
    bool teleportThisFrame; // 370
    uint8_t unk371[0x380 - 0x371]; // 371
    WorldTransform targetTransform; // 380
    uint8_t unk3A0[0x410 - 0x3A0]; // 3A0
#endif
};
RED4EXT_ASSERT_SIZE(CinematicCameraComponent, 0x410);
} // namespace vehicle
using vehicleCinematicCameraComponent = vehicle::CinematicCameraComponent;
} // namespace RED4ext

// clang-format on
