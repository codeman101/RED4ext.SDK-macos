#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/hit/RepresentationEventsSetSingleScaleMultiplier_AllShapes.hpp>

namespace RED4ext
{
namespace game::hit
{
struct __declspec(align(0x10)) RepresentationEventsSetSingleScaleMultiplier_SingleShape : game::hit::RepresentationEventsSetSingleScaleMultiplier_AllShapes
{
    static constexpr const char* NAME = "gamehitRepresentationEventsSetSingleScaleMultiplier_SingleShape";
    static constexpr const char* ALIAS = "HitRepresentation_SetSingleScaleMultiplier_SingleShape";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_50[0x50 - ::RED4ext::Detail::DataSize<game::hit::RepresentationEventsSetSingleScaleMultiplier_AllShapes>];
    CName shapeName; // 50
#else
    CName shapeName; // 50
    uint8_t unk58[0x60 - 0x58]; // 58
#endif
};
RED4EXT_ASSERT_SIZE(RepresentationEventsSetSingleScaleMultiplier_SingleShape, 0x60);
} // namespace game::hit
using gamehitRepresentationEventsSetSingleScaleMultiplier_SingleShape = game::hit::RepresentationEventsSetSingleScaleMultiplier_SingleShape;
using HitRepresentation_SetSingleScaleMultiplier_SingleShape = game::hit::RepresentationEventsSetSingleScaleMultiplier_SingleShape;
} // namespace RED4ext

// clang-format on
