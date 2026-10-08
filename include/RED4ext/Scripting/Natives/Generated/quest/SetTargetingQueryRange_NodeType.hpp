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
struct SetTargetingQueryRange_NodeType : quest::ISceneManagerNodeType
{
    static constexpr const char* NAME = "questSetTargetingQueryRange_NodeType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<quest::ISceneManagerNodeType>];
    float targetingQueryRange; // 34
    uint8_t unk_38[0x38 - (0x34 + sizeof(targetingQueryRange))];
    bool resetToDefault; // 38
#else
    float targetingQueryRange; // 38
    bool resetToDefault; // 3C
    uint8_t unk3D[0x40 - 0x3D]; // 3D
#endif
};
RED4EXT_ASSERT_SIZE(SetTargetingQueryRange_NodeType, 0x40);
} // namespace quest
using questSetTargetingQueryRange_NodeType = quest::SetTargetingQueryRange_NodeType;
} // namespace RED4ext

// clang-format on
