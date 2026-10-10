#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISceneConditionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SceneConditionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneVersionCheck.hpp>

namespace RED4ext
{
namespace scn { struct SceneResource; }

namespace quest
{
struct SectionNode_ConditionType : quest::ISceneConditionType
{
    static constexpr const char* NAME = "questSectionNode_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::ISceneConditionType>];
    RaRef<scn::SceneResource> sceneFile; // 38
    uint8_t unk_40[0x40 - (0x38 + sizeof(sceneFile))];
    scn::SceneVersionCheck SceneVersion; // 40
    uint8_t unk_48[0x48 - (0x40 + sizeof(SceneVersion))];
    CName sectionName; // 48
    uint8_t unk_50[0x50 - (0x48 + sizeof(sectionName))];
    quest::SceneConditionType type; // 50
#else
    RaRef<scn::SceneResource> sceneFile; // 38
    scn::SceneVersionCheck SceneVersion; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
    CName sectionName; // 48
    quest::SceneConditionType type; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
#endif
};
RED4EXT_ASSERT_SIZE(SectionNode_ConditionType, 0x58);
} // namespace quest
using questSectionNode_ConditionType = quest::SectionNode_ConditionType;
} // namespace RED4ext

// clang-format on
