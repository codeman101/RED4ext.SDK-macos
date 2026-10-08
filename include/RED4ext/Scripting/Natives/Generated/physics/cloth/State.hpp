#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/cloth/PhaseConfig.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/cloth/RuntimeInfo.hpp>

namespace RED4ext
{
namespace physics::cloth
{
struct __declspec(align(0x10)) State
{
    static constexpr const char* NAME = "physicsclothState";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_8[0x8];
    physics::cloth::PhaseConfig bendPhaseData; // 8
    uint8_t unk_18[0x18 - (0x8 + sizeof(bendPhaseData))];
    physics::cloth::PhaseConfig shearPhaseData; // 18
    uint8_t unk_28[0x28 - (0x18 + sizeof(shearPhaseData))];
    physics::cloth::PhaseConfig horizontalPhaseData; // 28
    uint8_t unk_38[0x38 - (0x28 + sizeof(horizontalPhaseData))];
    physics::cloth::PhaseConfig verticalPhaseData; // 38
    uint8_t unk_50[0x50 - (0x38 + sizeof(verticalPhaseData))];
    physics::cloth::RuntimeInfo runtimeInfo; // 50
#else
    uint8_t unk00[0x10 - 0x0]; // 0
    physics::cloth::PhaseConfig bendPhaseData; // 10
    physics::cloth::PhaseConfig shearPhaseData; // 20
    physics::cloth::PhaseConfig horizontalPhaseData; // 30
    physics::cloth::PhaseConfig verticalPhaseData; // 40
    physics::cloth::RuntimeInfo runtimeInfo; // 50
#endif
};
RED4EXT_ASSERT_SIZE(State, 0xC0);
} // namespace physics::cloth
using physicsclothState = physics::cloth::State;
} // namespace RED4ext

// clang-format on
