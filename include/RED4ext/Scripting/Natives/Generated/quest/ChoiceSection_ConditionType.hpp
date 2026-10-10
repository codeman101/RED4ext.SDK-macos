#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ChoiceSection_ConditionTypeMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISceneConditionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/NodeId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneVersionCheck.hpp>

namespace RED4ext
{
namespace scn { struct SceneResource; }

namespace quest
{
struct ChoiceSection_ConditionType : quest::ISceneConditionType
{
    static constexpr const char* NAME = "questChoiceSection_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::ISceneConditionType>];
    RaRef<scn::SceneResource> sceneFile; // 38
    uint8_t unk_40[0x40 - (0x38 + sizeof(sceneFile))];
    scn::SceneVersionCheck SceneVersion; // 40
    uint8_t unk_44[0x44 - (0x40 + sizeof(SceneVersion))];
    scn::NodeId choiceSectionId; // 44
    uint8_t unk_48[0x48 - (0x44 + sizeof(choiceSectionId))];
    CName choiceSectionName; // 48
    uint8_t unk_50[0x50 - (0x48 + sizeof(choiceSectionName))];
    CName optionName; // 50
    uint8_t unk_58[0x58 - (0x50 + sizeof(optionName))];
    quest::ChoiceSection_ConditionTypeMode mode; // 58
#else
    RaRef<scn::SceneResource> sceneFile; // 38
    scn::SceneVersionCheck SceneVersion; // 40
    uint8_t unk41[0x44 - 0x41]; // 41
    scn::NodeId choiceSectionId; // 44
    CName choiceSectionName; // 48
    CName optionName; // 50
    quest::ChoiceSection_ConditionTypeMode mode; // 58
    uint8_t unk59[0x60 - 0x59]; // 59
#endif
};
RED4EXT_ASSERT_SIZE(ChoiceSection_ConditionType, 0x60);
} // namespace quest
using questChoiceSection_ConditionType = quest::ChoiceSection_ConditionType;
} // namespace RED4ext

// clang-format on
