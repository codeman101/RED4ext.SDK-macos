#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/IParticleDrawer.hpp>

namespace RED4ext
{
struct CParticleDrawerScreen : IParticleDrawer
{
    static constexpr const char* NAME = "CParticleDrawerScreen";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<IParticleDrawer>];
    bool isGPUBased; // 34
#else
    bool isGPUBased; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
#endif
};
RED4EXT_ASSERT_SIZE(CParticleDrawerScreen, 0x40);
} // namespace RED4ext

// clang-format on
