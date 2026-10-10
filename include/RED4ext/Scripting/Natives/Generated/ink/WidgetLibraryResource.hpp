#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ETextureResolution.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLibraryItem.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetResourceVersion.hpp>

namespace RED4ext
{
struct CResource;
namespace ink::anim { struct AnimationLibraryResource; }
namespace ink::anim { struct Sequence; }

namespace ink
{
struct WidgetLibraryResource : CResource
{
    static constexpr const char* NAME = "inkWidgetLibraryResource";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_39[0x39 - ::RED4ext::Detail::DataSize<CResource>];
    ink::ETextureResolution rootResolution; // 39
    uint8_t unk_3C[0x3C - (0x39 + sizeof(rootResolution))];
    uint32_t rootDefinitionIndex; // 3C
    uint8_t unk_40[0x40 - (0x3C + sizeof(rootDefinitionIndex))];
    DynArray<ink::WidgetLibraryItem> libraryItems; // 40
    uint8_t unk_50[0x50 - (0x40 + sizeof(libraryItems))];
    DynArray<Ref<ink::WidgetLibraryResource>> externalLibraries; // 50
    uint8_t unk_60[0x60 - (0x50 + sizeof(externalLibraries))];
    RaRef<ink::anim::AnimationLibraryResource> animationLibraryResRef; // 60
    uint8_t unk_78[0x78 - (0x60 + sizeof(animationLibraryResRef))];
    DynArray<Handle<ink::anim::Sequence>> sequences; // 78
    uint8_t unk_88[0x88 - (0x78 + sizeof(sequences))];
    DynArray<RaRef<CResource>> externalDependenciesForInternalItems; // 88
    uint8_t unk_98[0x98 - (0x88 + sizeof(externalDependenciesForInternalItems))];
    ink::WidgetResourceVersion version; // 98
#else
    ink::ETextureResolution rootResolution; // 40
    uint8_t unk41[0x44 - 0x41]; // 41
    uint32_t rootDefinitionIndex; // 44
    DynArray<ink::WidgetLibraryItem> libraryItems; // 48
    DynArray<Ref<ink::WidgetLibraryResource>> externalLibraries; // 58
    RaRef<ink::anim::AnimationLibraryResource> animationLibraryResRef; // 68
    uint8_t unk70[0x80 - 0x70]; // 70
    DynArray<Handle<ink::anim::Sequence>> sequences; // 80
    DynArray<RaRef<CResource>> externalDependenciesForInternalItems; // 90
    ink::WidgetResourceVersion version; // A0
    uint8_t unkA1[0xA8 - 0xA1]; // A1
#endif
};
RED4EXT_ASSERT_SIZE(WidgetLibraryResource, 0xA8);
} // namespace ink
using inkWidgetLibraryResource = ink::WidgetLibraryResource;
} // namespace RED4ext

// clang-format on
