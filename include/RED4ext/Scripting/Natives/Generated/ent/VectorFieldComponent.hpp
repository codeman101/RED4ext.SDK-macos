#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IVisualComponent.hpp>

namespace RED4ext
{
namespace ent
{
struct __declspec(align(0x10)) VectorFieldComponent : ent::IVisualComponent
{
    static constexpr const char* NAME = "entVectorFieldComponent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_13C[0x13C - ::RED4ext::Detail::DataSize<ent::IVisualComponent>];
    Vector3 direction; // 13C
#else
    Vector3 direction; // 140
    uint8_t unk14C[0x160 - 0x14C]; // 14C
#endif
};
RED4EXT_ASSERT_SIZE(VectorFieldComponent, 0x160);
} // namespace ent
using entVectorFieldComponent = ent::VectorFieldComponent;
} // namespace RED4ext

// clang-format on
