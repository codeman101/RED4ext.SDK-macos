#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ITriggerAreaNotifer.hpp>

namespace RED4ext
{
namespace world
{
struct LocationAreaNotifier : world::ITriggerAreaNotifer
{
    static constexpr const char* NAME = "worldLocationAreaNotifier";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_B4[0xB4 - ::RED4ext::Detail::DataSize<world::ITriggerAreaNotifer>];
    TweakDBID districtID; // B4
    uint8_t unk_BC[0xBC - (0xB4 + sizeof(districtID))];
    bool sendNewLocationNotification; // BC
#else
    TweakDBID districtID; // B8
    bool sendNewLocationNotification; // C0
    uint8_t unkC1[0xC8 - 0xC1]; // C1
#endif
};
RED4EXT_ASSERT_SIZE(LocationAreaNotifier, 0xC8);
} // namespace world
using worldLocationAreaNotifier = world::LocationAreaNotifier;
} // namespace RED4ext

// clang-format on
