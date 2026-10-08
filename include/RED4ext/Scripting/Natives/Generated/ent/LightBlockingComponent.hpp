#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IVisualComponent.hpp>

namespace RED4ext
{
namespace ent
{
struct __declspec(align(0x10)) LightBlockingComponent : ent::IVisualComponent
{
    static constexpr const char* NAME = "entLightBlockingComponent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_150[0x150 - ::RED4ext::Detail::DataSize<ent::IVisualComponent>];
    float radius; // 150
    uint8_t unk_154[0x154 - (0x150 + sizeof(radius))];
    uint8_t lightBlockerComponentVersion; // 154
#else
    uint8_t unk140[0x150 - 0x140]; // 140
    float radius; // 150
    uint8_t lightBlockerComponentVersion; // 154
    uint8_t unk155[0x160 - 0x155]; // 155
#endif
};
RED4EXT_ASSERT_SIZE(LightBlockingComponent, 0x160);
} // namespace ent
using entLightBlockingComponent = ent::LightBlockingComponent;
} // namespace RED4ext

// clang-format on
