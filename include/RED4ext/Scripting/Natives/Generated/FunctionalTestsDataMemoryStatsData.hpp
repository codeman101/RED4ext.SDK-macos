#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/FunctionalTestsDataMemoryPoolRuntimeData.hpp>
#include <RED4ext/Scripting/Natives/Generated/FunctionalTestsDataMemoryPoolStaticData.hpp>

namespace RED4ext
{
struct FunctionalTestsDataMemoryStatsData : ISerializable
{
    static constexpr const char* NAME = "FunctionalTestsDataMemoryStatsData";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_30[0x30 - ::RED4ext::Detail::DataSize<ISerializable>];
    uint64_t totalPhysicalMemory; // 30
    uint8_t unk_38[0x38 - (0x30 + sizeof(totalPhysicalMemory))];
    uint64_t availablePhysicalMemory; // 38
    uint8_t unk_40[0x40 - (0x38 + sizeof(availablePhysicalMemory))];
    uint64_t runtimeTotalBytesAllocated; // 40
    uint8_t unk_48[0x48 - (0x40 + sizeof(runtimeTotalBytesAllocated))];
    uint64_t cpuBytesAllocated; // 48
    uint8_t unk_50[0x50 - (0x48 + sizeof(cpuBytesAllocated))];
    uint64_t gpuBytesAllocated; // 50
    uint8_t unk_68[0x68 - (0x50 + sizeof(gpuBytesAllocated))];
    uint32_t totalAllocationCount; // 68
    uint8_t unk_6C[0x6C - (0x68 + sizeof(totalAllocationCount))];
    uint32_t cpuAllocationCount; // 6C
    uint8_t unk_70[0x70 - (0x6C + sizeof(cpuAllocationCount))];
    uint32_t gpuAllocationCount; // 70
    uint8_t unk_80[0x80 - (0x70 + sizeof(gpuAllocationCount))];
    uint64_t engineTick; // 80
    uint8_t unk_88[0x88 - (0x80 + sizeof(engineTick))];
    float lastTimeDelta; // 88
    uint8_t unk_90[0x90 - (0x88 + sizeof(lastTimeDelta))];
    double engineTime; // 90
    uint8_t unk_98[0x98 - (0x90 + sizeof(engineTime))];
    uint64_t rawLocalTime; // 98
    uint8_t unk_A0[0xA0 - (0x98 + sizeof(rawLocalTime))];
    CString playerPosition; // A0
    uint8_t unk_C0[0xC0 - (0xA0 + sizeof(playerPosition))];
    CString playerOrientation; // C0
    uint8_t unk_E0[0xE0 - (0xC0 + sizeof(playerOrientation))];
    DynArray<FunctionalTestsDataMemoryPoolRuntimeData> poolsRuntimeInfo; // E0
    uint8_t unk_F0[0xF0 - (0xE0 + sizeof(poolsRuntimeInfo))];
    DynArray<FunctionalTestsDataMemoryPoolStaticData> poolsCurrentInfo; // F0
#else
    uint8_t unk30[0x38 - 0x30]; // 30
    uint64_t totalPhysicalMemory; // 38
    uint64_t availablePhysicalMemory; // 40
    uint64_t runtimeTotalBytesAllocated; // 48
    uint64_t cpuBytesAllocated; // 50
    uint64_t gpuBytesAllocated; // 58
    uint8_t unk60[0x70 - 0x60]; // 60
    uint32_t totalAllocationCount; // 70
    uint32_t cpuAllocationCount; // 74
    uint32_t gpuAllocationCount; // 78
    uint8_t unk7C[0x80 - 0x7C]; // 7C
    uint64_t engineTick; // 80
    float lastTimeDelta; // 88
    uint8_t unk8C[0x90 - 0x8C]; // 8C
    double engineTime; // 90
    uint64_t rawLocalTime; // 98
    CString playerPosition; // A0
    CString playerOrientation; // C0
    DynArray<FunctionalTestsDataMemoryPoolRuntimeData> poolsRuntimeInfo; // E0
    DynArray<FunctionalTestsDataMemoryPoolStaticData> poolsCurrentInfo; // F0
    uint8_t unk100[0x140 - 0x100]; // 100
#endif
};
RED4EXT_ASSERT_SIZE(FunctionalTestsDataMemoryStatsData, 0x140);
} // namespace RED4ext

// clang-format on
