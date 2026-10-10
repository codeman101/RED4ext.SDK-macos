#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
namespace rend
{
struct __declspec(align(0x10)) RenderMorphTargetMeshBlobTextureData
{
    static constexpr const char* NAME = "rendRenderMorphTargetMeshBlobTextureData";
    static constexpr const char* ALIAS = NAME;

#pragma warning(suppress : 4324)
    alignas(16) StaticArray<Vector4, 3> targetDiffScale; // 00
#pragma warning(suppress : 4324)
    alignas(16) StaticArray<Vector4, 3> targetDiffOffset; // 40
#if defined(__APPLE__)
    // R22. MSVC rounds an alignas(16) member up to 16 bytes (the game has targetDiffsDataOffset at 0x80), clang keeps the member at the size of
    // the type (52 bytes), so the next member would sit at 0x74. The R21 generated block here was wrong (a 0x80 byte pad).
    uint8_t unk_74[0x80 - (0x40 + sizeof(targetDiffOffset))];
#endif
    StaticArray<uint32_t, 3> targetDiffsDataOffset; // 80
    StaticArray<uint32_t, 3> targetDiffsDataSize; // 90
    StaticArray<uint16_t, 3> targetDiffsWidth; // A0
    StaticArray<uint8_t, 3> targetDiffsMipLevelCounts; // AC
    uint8_t unkB4[0xC0 - 0xB4]; // B4
};
RED4EXT_ASSERT_SIZE(RenderMorphTargetMeshBlobTextureData, 0xC0);
} // namespace rend
using rendRenderMorphTargetMeshBlobTextureData = rend::RenderMorphTargetMeshBlobTextureData;
} // namespace RED4ext

// clang-format on
