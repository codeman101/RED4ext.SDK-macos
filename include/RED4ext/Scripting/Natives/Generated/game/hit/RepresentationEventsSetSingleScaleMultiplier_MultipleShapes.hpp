#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/hit/RepresentationEventsSetSingleScaleMultiplier_AllShapes.hpp>

namespace RED4ext
{
namespace game::hit
{
struct __declspec(align(0x10)) RepresentationEventsSetSingleScaleMultiplier_MultipleShapes : game::hit::RepresentationEventsSetSingleScaleMultiplier_AllShapes
{
    static constexpr const char* NAME = "gamehitRepresentationEventsSetSingleScaleMultiplier_MultipleShapes";
    static constexpr const char* ALIAS = "HitRepresentation_SetSingleScaleMultiplier_MultipleShapes";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_50[0x50 - ::RED4ext::Detail::DataSize<game::hit::RepresentationEventsSetSingleScaleMultiplier_AllShapes>];
    DynArray<CName> shapeNames; // 50
#else
    DynArray<CName> shapeNames; // 50
#endif
};
RED4EXT_ASSERT_SIZE(RepresentationEventsSetSingleScaleMultiplier_MultipleShapes, 0x60);
} // namespace game::hit
using gamehitRepresentationEventsSetSingleScaleMultiplier_MultipleShapes = game::hit::RepresentationEventsSetSingleScaleMultiplier_MultipleShapes;
using HitRepresentation_SetSingleScaleMultiplier_MultipleShapes = game::hit::RepresentationEventsSetSingleScaleMultiplier_MultipleShapes;
} // namespace RED4ext

// clang-format on
