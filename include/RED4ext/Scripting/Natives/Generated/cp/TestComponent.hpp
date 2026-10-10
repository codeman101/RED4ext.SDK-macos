#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Component.hpp>

namespace RED4ext
{
namespace cp
{
struct TestComponent : game::Component
{
    static constexpr const char* NAME = "cpTestComponent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_A8[0xA8 - ::RED4ext::Detail::DataSize<game::Component>];
    float whatever; // A8
    uint8_t unk_AC[0xAC - (0xA8 + sizeof(whatever))];
    float whateverIE; // AC
#else
    float whatever; // A8
    float whateverIE; // AC
#endif
};
RED4EXT_ASSERT_SIZE(TestComponent, 0xB0);
} // namespace cp
using cpTestComponent = cp::TestComponent;
} // namespace RED4ext

// clang-format on
