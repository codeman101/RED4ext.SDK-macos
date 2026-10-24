#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/LocalizationStringMapEntry.hpp>

namespace RED4ext
{
namespace ent
{
struct LocalizationStringComponent : ent::IComponent
{
    static constexpr const char* NAME = "entLocalizationStringComponent";
    static constexpr const char* ALIAS = "LocalizationStringComponent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_90[0x90 - ::RED4ext::Detail::DataSize<ent::IComponent>];
    DynArray<ent::LocalizationStringMapEntry> Strings; // 90
#else
    DynArray<ent::LocalizationStringMapEntry> Strings; // 90
#endif
};
RED4EXT_ASSERT_SIZE(LocalizationStringComponent, 0xA0);
} // namespace ent
using entLocalizationStringComponent = ent::LocalizationStringComponent;
using LocalizationStringComponent = ent::LocalizationStringComponent;
} // namespace RED4ext

// clang-format on
