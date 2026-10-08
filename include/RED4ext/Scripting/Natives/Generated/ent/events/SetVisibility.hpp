#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/VisibilityParamSource.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent::events
{
struct SetVisibility : red::Event
{
    static constexpr const char* NAME = "enteventsSetVisibility";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    bool visible; // 40
    uint8_t unk_41[0x41 - (0x40 + sizeof(visible))];
    ent::VisibilityParamSource source; // 41
#else
    bool visible; // 40
    ent::VisibilityParamSource source; // 41
    uint8_t unk42[0x50 - 0x42]; // 42
#endif
};
RED4EXT_ASSERT_SIZE(SetVisibility, 0x50);
} // namespace ent::events
using enteventsSetVisibility = ent::events::SetVisibility;
} // namespace RED4ext

// clang-format on
