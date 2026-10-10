#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/MeshComponent.hpp>

namespace RED4ext
{
namespace ent
{
struct __declspec(align(0x10)) Debug_MeshComponent : ent::MeshComponent
{
    static constexpr const char* NAME = "entDebug_MeshComponent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_1D8[0x1D8 - ::RED4ext::Detail::DataSize<ent::MeshComponent>];
    CString filterName; // 1D8
#else
    CString filterName; // 1E0
    uint8_t unk200[0x430 - 0x200]; // 200
#endif
};
RED4EXT_ASSERT_SIZE(Debug_MeshComponent, 0x430);
} // namespace ent
using entDebug_MeshComponent = ent::Debug_MeshComponent;
} // namespace RED4ext

// clang-format on
