#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISceneManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct SetFOV_NodeType : quest::ISceneManagerNodeType
{
    static constexpr const char* NAME = "questSetFOV_NodeType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<quest::ISceneManagerNodeType>];
    float FOV; // 34
#else
    float FOV; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
#endif
};
RED4EXT_ASSERT_SIZE(SetFOV_NodeType, 0x40);
} // namespace quest
using questSetFOV_NodeType = quest::SetFOV_NodeType;
} // namespace RED4ext

// clang-format on
