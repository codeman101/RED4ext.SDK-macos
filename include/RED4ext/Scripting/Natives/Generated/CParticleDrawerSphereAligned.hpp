#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/IParticleDrawer.hpp>

namespace RED4ext
{
struct CParticleDrawerSphereAligned : IParticleDrawer
{
    static constexpr const char* NAME = "CParticleDrawerSphereAligned";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<IParticleDrawer>];
    bool verticalFixed; // 34
    uint8_t unk_35[0x35 - (0x34 + sizeof(verticalFixed))];
    bool isGPUBased; // 35
#else
    bool verticalFixed; // 38
    bool isGPUBased; // 39
    uint8_t unk3A[0x40 - 0x3A]; // 3A
#endif
};
RED4EXT_ASSERT_SIZE(CParticleDrawerSphereAligned, 0x40);
} // namespace RED4ext

// clang-format on
