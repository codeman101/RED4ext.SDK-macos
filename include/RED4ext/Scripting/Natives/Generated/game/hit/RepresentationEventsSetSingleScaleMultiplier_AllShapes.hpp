#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::hit
{
struct __declspec(align(0x10)) RepresentationEventsSetSingleScaleMultiplier_AllShapes : red::Event
{
    static constexpr const char* NAME = "gamehitRepresentationEventsSetSingleScaleMultiplier_AllShapes";
    static constexpr const char* ALIAS = "HitRepresentation_SetSingleScaleMultiplier_AllShapes";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    Vector4 scaleMultiplier; // 40
#else
    Vector4 scaleMultiplier; // 40
#endif
};
RED4EXT_ASSERT_SIZE(RepresentationEventsSetSingleScaleMultiplier_AllShapes, 0x50);
} // namespace game::hit
using gamehitRepresentationEventsSetSingleScaleMultiplier_AllShapes = game::hit::RepresentationEventsSetSingleScaleMultiplier_AllShapes;
using HitRepresentation_SetSingleScaleMultiplier_AllShapes = game::hit::RepresentationEventsSetSingleScaleMultiplier_AllShapes;
} // namespace RED4ext

// clang-format on
