#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/DangleConstraint_Simulation.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/DyngParticlesContainer.hpp>

namespace RED4ext
{
namespace anim { struct IDyngConstraint; }

namespace anim
{
struct DangleConstraint_SimulationDyng : anim::DangleConstraint_Simulation
{
    static constexpr const char* NAME = "animDangleConstraint_SimulationDyng";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_78[0x78 - ::RED4ext::Detail::DataSize<anim::DangleConstraint_Simulation>];
    bool HACK_checkDangleTeleport; // 78
    uint8_t unk_7C[0x7C - (0x78 + sizeof(HACK_checkDangleTeleport))];
    float substepTime; // 7C
    uint8_t unk_80[0x80 - (0x7C + sizeof(substepTime))];
    uint32_t solverIterations; // 80
    uint8_t unk_88[0x88 - (0x80 + sizeof(solverIterations))];
    anim::DyngParticlesContainer particlesContainer; // 88
    uint8_t unk_140[0x140 - (0x88 + sizeof(particlesContainer))];
    Handle<anim::IDyngConstraint> dyngConstraint; // 140
#else
    bool HACK_checkDangleTeleport; // 78
    uint8_t unk79[0x7C - 0x79]; // 79
    float substepTime; // 7C
    uint32_t solverIterations; // 80
    uint8_t unk84[0x88 - 0x84]; // 84
    anim::DyngParticlesContainer particlesContainer; // 88
    Handle<anim::IDyngConstraint> dyngConstraint; // 148
    uint8_t unk158[0x1C8 - 0x158]; // 158
#endif
};
RED4EXT_ASSERT_SIZE(DangleConstraint_SimulationDyng, 0x1C8);
} // namespace anim
using animDangleConstraint_SimulationDyng = anim::DangleConstraint_SimulationDyng;
} // namespace RED4ext

// clang-format on
