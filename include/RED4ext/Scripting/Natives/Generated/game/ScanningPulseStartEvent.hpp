#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct ScanningPulseStartEvent : red::Event
{
    static constexpr const char* NAME = "gameScanningPulseStartEvent";
    static constexpr const char* ALIAS = "ScanningPulseStartEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    int32_t targetsAffected; // 40
#else
    int32_t targetsAffected; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
#endif
};
RED4EXT_ASSERT_SIZE(ScanningPulseStartEvent, 0x48);
} // namespace game
using gameScanningPulseStartEvent = game::ScanningPulseStartEvent;
using ScanningPulseStartEvent = game::ScanningPulseStartEvent;
} // namespace RED4ext

// clang-format on
