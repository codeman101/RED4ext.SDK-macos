#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace ent
{
struct ExternalComponent : ent::IComponent
{
    static constexpr const char* NAME = "entExternalComponent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_90[0x90 - ::RED4ext::Detail::DataSize<ent::IComponent>];
    CName externalComponentName; // 90
#else
    CName externalComponentName; // 90
#endif
};
RED4EXT_ASSERT_SIZE(ExternalComponent, 0x98);
} // namespace ent
using entExternalComponent = ent::ExternalComponent;
} // namespace RED4ext

// clang-format on
