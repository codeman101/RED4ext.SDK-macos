#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FacialSetup_BufferInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FacialSetup_PosesBufferInfo.hpp>

namespace RED4ext
{
namespace anim { struct Rig; }

namespace anim
{
struct FacialSetup : CResource
{
    static constexpr const char* NAME = "animFacialSetup";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_2D8[0x2D8 - ::RED4ext::Detail::DataSize<CResource>];
    anim::FacialSetup_BufferInfo info; // 2D8
    uint8_t unk_344[0x344 - (0x2D8 + sizeof(info))];
    anim::FacialSetup_PosesBufferInfo posesInfo; // 344
    uint8_t unk_380[0x380 - (0x344 + sizeof(posesInfo))];
    DataBuffer bakedData; // 380
    uint8_t unk_718[0x718 - (0x380 + sizeof(bakedData))];
    DataBuffer mainPosesData; // 718
    uint8_t unk_740[0x740 - (0x718 + sizeof(mainPosesData))];
    DataBuffer correctivePosesData; // 740
    uint8_t unk_888[0x888 - (0x740 + sizeof(correctivePosesData))];
    DynArray<uint16_t> usedTransformIndices; // 888
    uint8_t unk_898[0x898 - (0x888 + sizeof(usedTransformIndices))];
    uint32_t version; // 898
    uint8_t unk_8A0[0x8A0 - (0x898 + sizeof(version))];
    Ref<anim::Rig> rig; // 8A0
    uint8_t unk_8B8[0x8B8 - (0x8A0 + sizeof(rig))];
    Ref<anim::Rig> inputRig; // 8B8
    uint8_t unk_8D0[0x8D0 - (0x8B8 + sizeof(inputRig))];
    bool useFemaleAnimSet; // 8D0
#else
    uint8_t unk40[0x2D8 - 0x40]; // 40
    anim::FacialSetup_BufferInfo info; // 2D8
    anim::FacialSetup_PosesBufferInfo posesInfo; // 344
    DataBuffer bakedData; // 380
    uint8_t unk3A8[0x718 - 0x3A8]; // 3A8
    DataBuffer mainPosesData; // 718
    DataBuffer correctivePosesData; // 740
    uint8_t unk768[0x888 - 0x768]; // 768
    DynArray<uint16_t> usedTransformIndices; // 888
    uint32_t version; // 898
    uint8_t unk89C[0x8A0 - 0x89C]; // 89C
    Ref<anim::Rig> rig; // 8A0
    Ref<anim::Rig> inputRig; // 8B8
    bool useFemaleAnimSet; // 8D0
    uint8_t unk8D1[0x8D8 - 0x8D1]; // 8D1
#endif
};
RED4EXT_ASSERT_SIZE(FacialSetup, 0x8D8);
} // namespace anim
using animFacialSetup = anim::FacialSetup;
} // namespace RED4ext

// clang-format on
