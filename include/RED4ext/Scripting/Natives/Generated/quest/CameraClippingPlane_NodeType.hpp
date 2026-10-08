#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/CameraPlanesPreset.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISceneManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct CameraClippingPlane_NodeType : quest::ISceneManagerNodeType
{
    static constexpr const char* NAME = "questCameraClippingPlane_NodeType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<quest::ISceneManagerNodeType>];
    quest::CameraPlanesPreset preset; // 34
#else
    quest::CameraPlanesPreset preset; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
#endif
};
RED4EXT_ASSERT_SIZE(CameraClippingPlane_NodeType, 0x40);
} // namespace quest
using questCameraClippingPlane_NodeType = quest::CameraClippingPlane_NodeType;
} // namespace RED4ext

// clang-format on
