#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IVisualComponent.hpp>

namespace RED4ext
{
struct CMesh;

namespace ent
{
struct __declspec(align(0x10)) ClothComponent : ent::IVisualComponent
{
    static constexpr const char* NAME = "entClothComponent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_140[0x140 - ::RED4ext::Detail::DataSize<ent::IVisualComponent>];
    Ref<CMesh> mesh; // 140
#else
    Ref<CMesh> mesh; // 140
    uint8_t unk158[0x160 - 0x158]; // 158
#endif
};
RED4EXT_ASSERT_SIZE(ClothComponent, 0x160);
} // namespace ent
using entClothComponent = ent::ClothComponent;
} // namespace RED4ext

// clang-format on
