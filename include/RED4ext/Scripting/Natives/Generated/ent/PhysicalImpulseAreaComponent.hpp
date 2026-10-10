#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/PhysicalTriggerComponent.hpp>

namespace RED4ext
{
namespace ent
{
struct __declspec(align(0x10)) PhysicalImpulseAreaComponent : ent::PhysicalTriggerComponent
{
    static constexpr const char* NAME = "entPhysicalImpulseAreaComponent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_188[0x188 - ::RED4ext::Detail::DataSize<ent::PhysicalTriggerComponent>];
    Vector3 impulse; // 188
    uint8_t unk_194[0x194 - (0x188 + sizeof(impulse))];
    float impulseRadius; // 194
#else
    Vector3 impulse; // 190
    float impulseRadius; // 19C
#endif
};
RED4EXT_ASSERT_SIZE(PhysicalImpulseAreaComponent, 0x1A0);
} // namespace ent
using entPhysicalImpulseAreaComponent = ent::PhysicalImpulseAreaComponent;
} // namespace RED4ext

// clang-format on
