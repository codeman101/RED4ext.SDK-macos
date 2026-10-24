#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/SkinnedMeshComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/TagList.hpp>

namespace RED4ext
{
namespace ent
{
struct __declspec(align(0x10)) CharacterCustomizationSkinnedMeshComponent : ent::SkinnedMeshComponent
{
    static constexpr const char* NAME = "entCharacterCustomizationSkinnedMeshComponent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_270[0x270 - ::RED4ext::Detail::DataSize<ent::SkinnedMeshComponent>];
    red::TagList tags; // 270
#else
    red::TagList tags; // 270
#endif
};
RED4EXT_ASSERT_SIZE(CharacterCustomizationSkinnedMeshComponent, 0x280);
} // namespace ent
using entCharacterCustomizationSkinnedMeshComponent = ent::CharacterCustomizationSkinnedMeshComponent;
} // namespace RED4ext

// clang-format on
