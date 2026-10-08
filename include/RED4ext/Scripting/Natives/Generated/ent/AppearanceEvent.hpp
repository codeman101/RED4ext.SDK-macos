#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent
{
struct AppearanceEvent : red::Event
{
    static constexpr const char* NAME = "entAppearanceEvent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    CName appearanceName; // 40
    uint8_t unk_48[0x48 - (0x40 + sizeof(appearanceName))];
    CName componentName; // 48
#else
    CName appearanceName; // 40
    CName componentName; // 48
#endif
};
RED4EXT_ASSERT_SIZE(AppearanceEvent, 0x50);
} // namespace ent
using entAppearanceEvent = ent::AppearanceEvent;
} // namespace RED4ext

// clang-format on
