#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/CameraComponent.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) FPPCameraComponent : game::CameraComponent
{
    static constexpr const char* NAME = "gameFPPCameraComponent";
    static constexpr const char* ALIAS = "FPPCameraComponent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_3E0[0x3E0 - ::RED4ext::Detail::DataSize<game::CameraComponent>];
    float pitchMin; // 3E0
    uint8_t unk_3E4[0x3E4 - (0x3E0 + sizeof(pitchMin))];
    float pitchMax; // 3E4
    uint8_t unk_3E8[0x3E8 - (0x3E4 + sizeof(pitchMax))];
    float yawMaxLeft; // 3E8
    uint8_t unk_3EC[0x3EC - (0x3E8 + sizeof(yawMaxLeft))];
    float yawMaxRight; // 3EC
    uint8_t unk_3F6[0x3F6 - (0x3EC + sizeof(yawMaxRight))];
    bool headingLocked; // 3F6
    uint8_t unk_498[0x498 - (0x3F6 + sizeof(headingLocked))];
    float sensitivityMultX; // 498
    uint8_t unk_49C[0x49C - (0x498 + sizeof(sensitivityMultX))];
    float sensitivityMultY; // 49C
    uint8_t unk_4B0[0x4B0 - (0x49C + sizeof(sensitivityMultY))];
    CName timeDilationCurveName; // 4B0
#else
    uint8_t unk320[0x3E0 - 0x320]; // 320
    float pitchMin; // 3E0
    float pitchMax; // 3E4
    float yawMaxLeft; // 3E8
    float yawMaxRight; // 3EC
    uint8_t unk3F0[0x3F6 - 0x3F0]; // 3F0
    bool headingLocked; // 3F6
    uint8_t unk3F7[0x498 - 0x3F7]; // 3F7
    float sensitivityMultX; // 498
    float sensitivityMultY; // 49C
    uint8_t unk4A0[0x4B0 - 0x4A0]; // 4A0
    CName timeDilationCurveName; // 4B0
    uint8_t unk4B8[0x510 - 0x4B8]; // 4B8
#endif
};
RED4EXT_ASSERT_SIZE(FPPCameraComponent, 0x510);
} // namespace game
using gameFPPCameraComponent = game::FPPCameraComponent;
using FPPCameraComponent = game::FPPCameraComponent;
} // namespace RED4ext

// clang-format on
