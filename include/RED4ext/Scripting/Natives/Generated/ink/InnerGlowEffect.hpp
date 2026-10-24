#if defined(__APPLE__)
#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/IEffect.hpp>

namespace RED4ext
{
namespace ink
{
struct InnerGlowEffect : ink::IEffect
{
    static constexpr const char* NAME = "inkInnerGlowEffect";
    static constexpr const char* ALIAS = NAME;

    float colorR; // 60
    float colorG; // 64
    float colorB; // 68
    float colorA; // 6C
    float offsetX; // 70
    float offsetY; // 74
};
RED4EXT_ASSERT_SIZE(InnerGlowEffect, 0x78);
} // namespace ink
using inkInnerGlowEffect = ink::InnerGlowEffect;
} // namespace RED4ext

// clang-format on

#else
#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/IEffect.hpp>

namespace RED4ext
{
namespace ink
{
struct InnerGlowEffect : ink::IEffect
{
    static constexpr const char* NAME = "inkInnerGlowEffect";
    static constexpr const char* ALIAS = NAME;

    float colorR; // 50
    float colorG; // 54
    float colorB; // 58
    float colorA; // 5C
    float offsetX; // 60
    float offsetY; // 64
};
RED4EXT_ASSERT_SIZE(InnerGlowEffect, 0x68);
} // namespace ink
using inkInnerGlowEffect = ink::InnerGlowEffect;
} // namespace RED4ext

// clang-format on

#endif
