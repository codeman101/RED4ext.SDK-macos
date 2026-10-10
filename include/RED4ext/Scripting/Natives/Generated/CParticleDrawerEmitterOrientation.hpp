#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/EulerAngles.hpp>
#include <RED4ext/Scripting/Natives/Generated/IParticleDrawer.hpp>

namespace RED4ext
{
struct CParticleDrawerEmitterOrientation : IParticleDrawer
{
    static constexpr const char* NAME = "CParticleDrawerEmitterOrientation";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<IParticleDrawer>];
    EulerAngles coordinateSystem; // 34
    uint8_t unk_40[0x40 - (0x34 + sizeof(coordinateSystem))];
    bool isGPUBased; // 40
#else
    EulerAngles coordinateSystem; // 38
    bool isGPUBased; // 44
    uint8_t unk45[0x48 - 0x45]; // 45
#endif
};
RED4EXT_ASSERT_SIZE(CParticleDrawerEmitterOrientation, 0x48);
} // namespace RED4ext

// clang-format on
