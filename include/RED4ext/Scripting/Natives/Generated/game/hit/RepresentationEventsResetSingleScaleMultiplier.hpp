#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::hit
{
struct RepresentationEventsResetSingleScaleMultiplier : red::Event
{
    static constexpr const char* NAME = "gamehitRepresentationEventsResetSingleScaleMultiplier";
    static constexpr const char* ALIAS = "HitRepresentation_ResetSingleScaleMultiplier";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    CName shapeName; // 40
#else
    CName shapeName; // 40
#endif
};
RED4EXT_ASSERT_SIZE(RepresentationEventsResetSingleScaleMultiplier, 0x48);
} // namespace game::hit
using gamehitRepresentationEventsResetSingleScaleMultiplier = game::hit::RepresentationEventsResetSingleScaleMultiplier;
using HitRepresentation_ResetSingleScaleMultiplier = game::hit::RepresentationEventsResetSingleScaleMultiplier;
} // namespace RED4ext

// clang-format on
