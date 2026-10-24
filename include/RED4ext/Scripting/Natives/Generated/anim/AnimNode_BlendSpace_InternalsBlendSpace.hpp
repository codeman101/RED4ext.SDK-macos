#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_BlendSpace_InternalsBlendSpaceCoordinateDescription.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_BlendSpace_InternalsBlendSpacePoint.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_BlendSpace_InternalsBlendSpace
{
    static constexpr const char* NAME = "animAnimNode_BlendSpace_InternalsBlendSpace";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint32_t spaceDimension; // 0
    uint8_t unk_8[0x8 - (0x0 + sizeof(spaceDimension))];
    DynArray<anim::AnimNode_BlendSpace_InternalsBlendSpaceCoordinateDescription> coordinatesDescriptions; // 8
    uint8_t unk_18[0x18 - (0x8 + sizeof(coordinatesDescriptions))];
    DynArray<anim::AnimNode_BlendSpace_InternalsBlendSpacePoint> spacePoints; // 18
    uint8_t unk_28[0x28 - (0x18 + sizeof(spacePoints))];
    uint32_t boundaryPointsCount; // 28
    uint8_t unk_2C[0x2C - (0x28 + sizeof(boundaryPointsCount))];
    bool fireAnimEndEvent; // 2C
    uint8_t unk_30[0x30 - (0x2C + sizeof(fireAnimEndEvent))];
    CName animEndEventName; // 30
    uint8_t unk_38[0x38 - (0x30 + sizeof(animEndEventName))];
    bool isLooped; // 38
    uint8_t unk_39[0x39 - (0x38 + sizeof(isLooped))];
    bool needsRuntimeTriangulation; // 39
    uint8_t unk_3A[0x3A - (0x39 + sizeof(needsRuntimeTriangulation))];
    bool wasRuntimeTriangulationResaveDone; // 3A
    uint8_t unk_A0[0xA0 - (0x3A + sizeof(wasRuntimeTriangulationResaveDone))];
    DynArray<float> cachedSpacePoints_coordinates; // A0
    uint8_t unk_C0[0xC0 - (0xA0 + sizeof(cachedSpacePoints_coordinates))];
    DynArray<uint32_t> cachedSpaceSimplexes_pointsIndices; // C0
    uint8_t unk_E0[0xE0 - (0xC0 + sizeof(cachedSpaceSimplexes_pointsIndices))];
    DynArray<int32_t> cachedSamplesForGridPoints_simplexIndex; // E0
    uint8_t unk_100[0x100 - (0xE0 + sizeof(cachedSamplesForGridPoints_simplexIndex))];
    DynArray<float> cachedSamplesForGridPoints_weightsForPoints; // 100
#else
    uint32_t spaceDimension; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    DynArray<anim::AnimNode_BlendSpace_InternalsBlendSpaceCoordinateDescription> coordinatesDescriptions; // 08
    DynArray<anim::AnimNode_BlendSpace_InternalsBlendSpacePoint> spacePoints; // 18
    uint32_t boundaryPointsCount; // 28
    bool fireAnimEndEvent; // 2C
    uint8_t unk2D[0x30 - 0x2D]; // 2D
    CName animEndEventName; // 30
    bool isLooped; // 38
    bool needsRuntimeTriangulation; // 39
    bool wasRuntimeTriangulationResaveDone; // 3A
    uint8_t unk3B[0xB8 - 0x3B]; // 3B
    DynArray<float> cachedSpacePoints_coordinates; // B8
    uint8_t unkC8[0xE0 - 0xC8]; // C8
    DynArray<uint32_t> cachedSpaceSimplexes_pointsIndices; // E0
    uint8_t unkF0[0x108 - 0xF0]; // F0
    DynArray<int32_t> cachedSamplesForGridPoints_simplexIndex; // 108
    uint8_t unk118[0x130 - 0x118]; // 118
    DynArray<float> cachedSamplesForGridPoints_weightsForPoints; // 130
    uint8_t unk140[0x1C8 - 0x140]; // 140
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_BlendSpace_InternalsBlendSpace, 0x1C8);
} // namespace anim
using animAnimNode_BlendSpace_InternalsBlendSpace = anim::AnimNode_BlendSpace_InternalsBlendSpace;
} // namespace RED4ext

// clang-format on
