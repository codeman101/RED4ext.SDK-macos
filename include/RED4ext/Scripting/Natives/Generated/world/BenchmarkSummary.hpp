#if defined(__APPLE__)
#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace world
{
struct BenchmarkSummary : IScriptable
{
    static constexpr const char* NAME = "worldBenchmarkSummary";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<IScriptable>];
    CString gameVersion; // 40
    uint8_t unk_60[0x60 - (0x40 + sizeof(gameVersion))];
    CString benchmarkName; // 60
    uint8_t unk_80[0x80 - (0x60 + sizeof(benchmarkName))];
    CString gpuName; // 80
    uint8_t unk_A0[0xA0 - (0x80 + sizeof(gpuName))];
    uint64_t gpuMemory; // A0
    uint8_t unk_A8[0xA8 - (0xA0 + sizeof(gpuMemory))];
    CString gpuDriverVersion; // A8
    uint8_t unk_C8[0xC8 - (0xA8 + sizeof(gpuDriverVersion))];
    CString cpuName; // C8
    uint8_t unk_E8[0xE8 - (0xC8 + sizeof(cpuName))];
    uint64_t systemMemory; // E8
    uint8_t unk_F0[0xF0 - (0xE8 + sizeof(systemMemory))];
    CString osName; // F0
    uint8_t unk_110[0x110 - (0xF0 + sizeof(osName))];
    CString osVersion; // 110
    uint8_t unk_130[0x130 - (0x110 + sizeof(osVersion))];
    CString macProductName; // 130
    uint8_t unk_150[0x150 - (0x130 + sizeof(macProductName))];
    CString presetName; // 150
    uint8_t unk_170[0x170 - (0x150 + sizeof(presetName))];
    CName presetLocalizedName; // 170
    uint8_t unk_178[0x178 - (0x170 + sizeof(presetLocalizedName))];
    CName textureQualityPresetLocalizedName; // 178
    uint8_t unk_180[0x180 - (0x178 + sizeof(textureQualityPresetLocalizedName))];
    uint32_t renderWidth; // 180
    uint8_t unk_184[0x184 - (0x180 + sizeof(renderWidth))];
    uint32_t renderHeight; // 184
    uint8_t unk_188[0x188 - (0x184 + sizeof(renderHeight))];
    uint8_t windowMode; // 188
    uint8_t unk_189[0x189 - (0x188 + sizeof(windowMode))];
    bool verticalSync; // 189
    uint8_t unk_18C[0x18C - (0x189 + sizeof(verticalSync))];
    int32_t fpsClamp; // 18C
    uint8_t unk_190[0x190 - (0x18C + sizeof(fpsClamp))];
    float averageFps; // 190
    uint8_t unk_194[0x194 - (0x190 + sizeof(averageFps))];
    float minFps; // 194
    uint8_t unk_198[0x198 - (0x194 + sizeof(minFps))];
    float maxFps; // 198
    uint8_t unk_19C[0x19C - (0x198 + sizeof(maxFps))];
    float time; // 19C
    uint8_t unk_1A0[0x1A0 - (0x19C + sizeof(time))];
    uint32_t frameNumber; // 1A0
    uint8_t unk_1A4[0x1A4 - (0x1A0 + sizeof(frameNumber))];
    uint8_t upscalingType; // 1A4
    uint8_t unk_1A5[0x1A5 - (0x1A4 + sizeof(upscalingType))];
    uint8_t frameGenerationType; // 1A5
    uint8_t unk_1A6[0x1A6 - (0x1A5 + sizeof(frameGenerationType))];
    bool DLAAEnabled; // 1A6
    uint8_t unk_1A8[0x1A8 - (0x1A6 + sizeof(DLAAEnabled))];
    float DLAASharpness; // 1A8
    uint8_t unk_1AC[0x1AC - (0x1A8 + sizeof(DLAASharpness))];
    bool DLSSEnabled; // 1AC
    uint8_t unk_1B0[0x1B0 - (0x1AC + sizeof(DLSSEnabled))];
    int32_t DLSSPreset; // 1B0
    uint8_t unk_1B4[0x1B4 - (0x1B0 + sizeof(DLSSPreset))];
    bool DLSSDEnabled; // 1B4
    uint8_t unk_1B8[0x1B8 - (0x1B4 + sizeof(DLSSDEnabled))];
    int32_t DLSSQuality; // 1B8
    uint8_t unk_1BC[0x1BC - (0x1B8 + sizeof(DLSSQuality))];
    float DLSSSharpness; // 1BC
    uint8_t unk_1C0[0x1C0 - (0x1BC + sizeof(DLSSSharpness))];
    bool DLSSFrameGenEnabled; // 1C0
    uint8_t unk_1C1[0x1C1 - (0x1C0 + sizeof(DLSSFrameGenEnabled))];
    bool DLSSMultiFrameGenEnabled; // 1C1
    uint8_t unk_1C4[0x1C4 - (0x1C1 + sizeof(DLSSMultiFrameGenEnabled))];
    int32_t DLSSMultiFrameGenFrameToGenerate; // 1C4
    uint8_t unk_1CC[0x1CC - (0x1C4 + sizeof(DLSSMultiFrameGenFrameToGenerate))];
    bool FSR2Enabled; // 1CC
    uint8_t unk_1D0[0x1D0 - (0x1CC + sizeof(FSR2Enabled))];
    int32_t FSR2Quality; // 1D0
    uint8_t unk_1D4[0x1D4 - (0x1D0 + sizeof(FSR2Quality))];
    float FSR2Sharpness; // 1D4
    uint8_t unk_1D8[0x1D8 - (0x1D4 + sizeof(FSR2Sharpness))];
    bool FSR3Enabled; // 1D8
    uint8_t unk_1DC[0x1DC - (0x1D8 + sizeof(FSR3Enabled))];
    int32_t FSR3Quality; // 1DC
    uint8_t unk_1E0[0x1E0 - (0x1DC + sizeof(FSR3Quality))];
    float FSR3Sharpness; // 1E0
    uint8_t unk_1E4[0x1E4 - (0x1E0 + sizeof(FSR3Sharpness))];
    bool FSR3FrameGenEnabled; // 1E4
    uint8_t unk_1E5[0x1E5 - (0x1E4 + sizeof(FSR3FrameGenEnabled))];
    bool FSR4Enabled; // 1E5
    uint8_t unk_1E8[0x1E8 - (0x1E5 + sizeof(FSR4Enabled))];
    int32_t FSR4Quality; // 1E8
    uint8_t unk_1EC[0x1EC - (0x1E8 + sizeof(FSR4Quality))];
    float FSR4Sharpness; // 1EC
    uint8_t unk_1F0[0x1F0 - (0x1EC + sizeof(FSR4Sharpness))];
    bool XeSSEnabled; // 1F0
    uint8_t unk_1F4[0x1F4 - (0x1F0 + sizeof(XeSSEnabled))];
    int32_t XeSSQuality; // 1F4
    uint8_t unk_1F8[0x1F8 - (0x1F4 + sizeof(XeSSQuality))];
    float XeSSSharpness; // 1F8
    uint8_t unk_1FC[0x1FC - (0x1F8 + sizeof(XeSSSharpness))];
    bool XeSSFrameGenEnabled; // 1FC
    uint8_t unk_1FD[0x1FD - (0x1FC + sizeof(XeSSFrameGenEnabled))];
    bool MFXEnabled; // 1FD
    uint8_t unk_200[0x200 - (0x1FD + sizeof(MFXEnabled))];
    int32_t MFXQuality; // 200
    uint8_t unk_204[0x204 - (0x200 + sizeof(MFXQuality))];
    float MFXSharpness; // 204
    uint8_t unk_208[0x208 - (0x204 + sizeof(MFXSharpness))];
    bool MFXFrameGenEnabled; // 208
    uint8_t unk_209[0x209 - (0x208 + sizeof(MFXFrameGenEnabled))];
    bool DRSEnabled; // 209
    uint8_t unk_20C[0x20C - (0x209 + sizeof(DRSEnabled))];
    uint32_t DRSTargetFPS; // 20C
    uint8_t unk_210[0x210 - (0x20C + sizeof(DRSTargetFPS))];
    uint32_t DRSMinimalResolutionPercentage; // 210
    uint8_t unk_214[0x214 - (0x210 + sizeof(DRSMinimalResolutionPercentage))];
    uint32_t DRSMaximalResolutionPercentage; // 214
    uint8_t unk_218[0x218 - (0x214 + sizeof(DRSMaximalResolutionPercentage))];
    bool CASSharpeningEnabled; // 218
    uint8_t unk_219[0x219 - (0x218 + sizeof(CASSharpeningEnabled))];
    bool FSREnabled; // 219
    uint8_t unk_21C[0x21C - (0x219 + sizeof(FSREnabled))];
    int32_t FSRQuality; // 21C
    uint8_t unk_220[0x220 - (0x21C + sizeof(FSRQuality))];
    bool rayTracingEnabled; // 220
    uint8_t unk_221[0x221 - (0x220 + sizeof(rayTracingEnabled))];
    bool rayTracedReflections; // 221
    uint8_t unk_222[0x222 - (0x221 + sizeof(rayTracedReflections))];
    bool rayTracedSunShadows; // 222
    uint8_t unk_223[0x223 - (0x222 + sizeof(rayTracedSunShadows))];
    bool rayTracedLocalShadows; // 223
    uint8_t unk_224[0x224 - (0x223 + sizeof(rayTracedLocalShadows))];
    int32_t rayTracedLightingQuality; // 224
    uint8_t unk_228[0x228 - (0x224 + sizeof(rayTracedLightingQuality))];
    bool rayTracedPathTracingEnabled; // 228
#else
    CString gameVersion; // 40
    CString benchmarkName; // 60
    CString gpuName; // 80
    uint64_t gpuMemory; // A0
    CString gpuDriverVersion; // A8
    CString cpuName; // C8
    uint64_t systemMemory; // E8
    CString osName; // F0
    CString osVersion; // 110
    CString macProductName; // 130
    CString presetName; // 150
    CName presetLocalizedName; // 170
    CName textureQualityPresetLocalizedName; // 178
    uint32_t renderWidth; // 180
    uint32_t renderHeight; // 184
    uint8_t windowMode; // 188
    bool verticalSync; // 189
    uint8_t unk18A[0x18C - 0x18A]; // 18A
    int32_t fpsClamp; // 18C
    float averageFps; // 190
    float minFps; // 194
    float maxFps; // 198
    float time; // 19C
    uint32_t frameNumber; // 1A0
    uint8_t upscalingType; // 1A4
    uint8_t frameGenerationType; // 1A5
    bool DLAAEnabled; // 1A6
    uint8_t unk1A7[0x1A8 - 0x1A7]; // 1A7
    float DLAASharpness; // 1A8
    bool DLSSEnabled; // 1AC
    uint8_t unk1AD[0x1B0 - 0x1AD]; // 1AD
    int32_t DLSSPreset; // 1B0
    bool DLSSDEnabled; // 1B4
    uint8_t unk1B5[0x1B8 - 0x1B5]; // 1B5
    int32_t DLSSQuality; // 1B8
    float DLSSSharpness; // 1BC
    bool DLSSFrameGenEnabled; // 1C0
    bool DLSSMultiFrameGenEnabled; // 1C1
    uint8_t unk1C2[0x1C4 - 0x1C2]; // 1C2
    int32_t DLSSMultiFrameGenFrameToGenerate; // 1C4
    uint8_t unk1C8[0x1CC - 0x1C8]; // 1C8
    bool FSR2Enabled; // 1CC
    uint8_t unk1CD[0x1D0 - 0x1CD]; // 1CD
    int32_t FSR2Quality; // 1D0
    float FSR2Sharpness; // 1D4
    bool FSR3Enabled; // 1D8
    uint8_t unk1D9[0x1DC - 0x1D9]; // 1D9
    int32_t FSR3Quality; // 1DC
    float FSR3Sharpness; // 1E0
    bool FSR3FrameGenEnabled; // 1E4
    bool FSR4Enabled; // 1E5
    uint8_t unk1E6[0x1E8 - 0x1E6]; // 1E6
    int32_t FSR4Quality; // 1E8
    float FSR4Sharpness; // 1EC
    bool XeSSEnabled; // 1F0
    uint8_t unk1F1[0x1F4 - 0x1F1]; // 1F1
    int32_t XeSSQuality; // 1F4
    float XeSSSharpness; // 1F8
    bool XeSSFrameGenEnabled; // 1FC
    bool MFXEnabled; // 1FD
    uint8_t unk1FE[0x200 - 0x1FE]; // 1FE
    int32_t MFXQuality; // 200
    float MFXSharpness; // 204
    bool MFXFrameGenEnabled; // 208
    bool DRSEnabled; // 209
    uint8_t unk20A[0x20C - 0x20A]; // 20A
    uint32_t DRSTargetFPS; // 20C
    uint32_t DRSMinimalResolutionPercentage; // 210
    uint32_t DRSMaximalResolutionPercentage; // 214
    bool CASSharpeningEnabled; // 218
    bool FSREnabled; // 219
    uint8_t unk21A[0x21C - 0x21A]; // 21A
    int32_t FSRQuality; // 21C
    bool rayTracingEnabled; // 220
    bool rayTracedReflections; // 221
    bool rayTracedSunShadows; // 222
    bool rayTracedLocalShadows; // 223
    int32_t rayTracedLightingQuality; // 224
    bool rayTracedPathTracingEnabled; // 228
    uint8_t unk229[0x230 - 0x229]; // 229
#endif
};
RED4EXT_ASSERT_SIZE(BenchmarkSummary, 0x230);
} // namespace world
using worldBenchmarkSummary = world::BenchmarkSummary;
} // namespace RED4ext

// clang-format on

#else
#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace world
{
struct BenchmarkSummary : IScriptable
{
    static constexpr const char* NAME = "worldBenchmarkSummary";
    static constexpr const char* ALIAS = NAME;

    CString gameVersion; // 40
    CString benchmarkName; // 60
    CString gpuName; // 80
    uint64_t gpuMemory; // A0
    CString gpuDriverVersion; // A8
    CString cpuName; // C8
    uint64_t systemMemory; // E8
    CString osName; // F0
    CString osVersion; // 110
    CString presetName; // 130
    CName presetLocalizedName; // 150
    CName textureQualityPresetLocalizedName; // 158
    uint32_t renderWidth; // 160
    uint32_t renderHeight; // 164
    uint8_t windowMode; // 168
    bool verticalSync; // 169
    uint8_t unk16A[0x16C - 0x16A]; // 16A
    int32_t fpsClamp; // 16C
    float averageFps; // 170
    float minFps; // 174
    float maxFps; // 178
    float time; // 17C
    uint32_t frameNumber; // 180
    uint8_t upscalingType; // 184
    uint8_t frameGenerationType; // 185
    bool DLAAEnabled; // 186
    uint8_t unk187[0x188 - 0x187]; // 187
    float DLAASharpness; // 188
    bool DLSSEnabled; // 18C
    uint8_t unk18D[0x190 - 0x18D]; // 18D
    int32_t DLSSPreset; // 190
    bool DLSSDEnabled; // 194
    uint8_t unk195[0x198 - 0x195]; // 195
    int32_t DLSSQuality; // 198
    float DLSSSharpness; // 19C
    bool DLSSFrameGenEnabled; // 1A0
    bool DLSSMultiFrameGenEnabled; // 1A1
    uint8_t unk1A2[0x1A4 - 0x1A2]; // 1A2
    int32_t DLSSMultiFrameGenFrameToGenerate; // 1A4
    bool FSR2Enabled; // 1A8
    uint8_t unk1A9[0x1AC - 0x1A9]; // 1A9
    int32_t FSR2Quality; // 1AC
    float FSR2Sharpness; // 1B0
    bool FSR3Enabled; // 1B4
    uint8_t unk1B5[0x1B8 - 0x1B5]; // 1B5
    int32_t FSR3Quality; // 1B8
    float FSR3Sharpness; // 1BC
    bool FSR3FrameGenEnabled; // 1C0
    bool FSR4Enabled; // 1C1
    uint8_t unk1C2[0x1C4 - 0x1C2]; // 1C2
    int32_t FSR4Quality; // 1C4
    float FSR4Sharpness; // 1C8
    bool XeSSEnabled; // 1CC
    uint8_t unk1CD[0x1D0 - 0x1CD]; // 1CD
    int32_t XeSSQuality; // 1D0
    float XeSSSharpness; // 1D4
    bool XeSSFrameGenEnabled; // 1D8
    bool DRSEnabled; // 1D9
    uint8_t unk1DA[0x1DC - 0x1DA]; // 1DA
    uint32_t DRSTargetFPS; // 1DC
    uint32_t DRSMinimalResolutionPercentage; // 1E0
    uint32_t DRSMaximalResolutionPercentage; // 1E4
    bool CASSharpeningEnabled; // 1E8
    bool FSREnabled; // 1E9
    uint8_t unk1EA[0x1EC - 0x1EA]; // 1EA
    int32_t FSRQuality; // 1EC
    bool rayTracingEnabled; // 1F0
    bool rayTracedReflections; // 1F1
    bool rayTracedSunShadows; // 1F2
    bool rayTracedLocalShadows; // 1F3
    int32_t rayTracedLightingQuality; // 1F4
    bool rayTracedPathTracingEnabled; // 1F8
    uint8_t unk1F9[0x200 - 0x1F9]; // 1F9
};
RED4EXT_ASSERT_SIZE(BenchmarkSummary, 0x200);
} // namespace world
using worldBenchmarkSummary = world::BenchmarkSummary;
} // namespace RED4ext

// clang-format on

#endif
