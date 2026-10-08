#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISceneManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct SetTier3Params_NodeType : quest::ISceneManagerNodeType
{
    static constexpr const char* NAME = "questSetTier3Params_NodeType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::ISceneManagerNodeType>];
    float yawLeftLimit; // 38
    uint8_t unk_3C[0x3C - (0x38 + sizeof(yawLeftLimit))];
    float yawRightLimit; // 3C
    uint8_t unk_40[0x40 - (0x3C + sizeof(yawRightLimit))];
    float pitchUpLimit; // 40
    uint8_t unk_44[0x44 - (0x40 + sizeof(pitchUpLimit))];
    float pitchDownLimit; // 44
    uint8_t unk_48[0x48 - (0x44 + sizeof(pitchDownLimit))];
    float yawSpeedMultiplier; // 48
    uint8_t unk_4C[0x4C - (0x48 + sizeof(yawSpeedMultiplier))];
    float pitchSpeedMultiplier; // 4C
    uint8_t unk_50[0x50 - (0x4C + sizeof(pitchSpeedMultiplier))];
    game::EntityReference objectRef; // 50
    uint8_t unk_88[0x88 - (0x50 + sizeof(objectRef))];
    CName slotName; // 88
    uint8_t unk_90[0x90 - (0x88 + sizeof(slotName))];
    Vector3 offsetPos; // 90
    uint8_t unk_9C[0x9C - (0x90 + sizeof(offsetPos))];
    float rotationTime; // 9C
    uint8_t unk_A0[0xA0 - (0x9C + sizeof(rotationTime))];
    bool rotateHeadOnly; // A0
    uint8_t unk_A1[0xA1 - (0xA0 + sizeof(rotateHeadOnly))];
    bool usePlayerWorkspot; // A1
    uint8_t unk_A2[0xA2 - (0xA1 + sizeof(usePlayerWorkspot))];
    bool useEnterAnim; // A2
    uint8_t unk_A3[0xA3 - (0xA2 + sizeof(useEnterAnim))];
    bool useExitAnim; // A3
#else
    uint8_t unk38[0x3C - 0x38]; // 38
    float yawLeftLimit; // 3C
    float yawRightLimit; // 40
    float pitchUpLimit; // 44
    float pitchDownLimit; // 48
    float yawSpeedMultiplier; // 4C
    float pitchSpeedMultiplier; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
    game::EntityReference objectRef; // 58
    CName slotName; // 90
    Vector3 offsetPos; // 98
    float rotationTime; // A4
    bool rotateHeadOnly; // A8
    bool usePlayerWorkspot; // A9
    bool useEnterAnim; // AA
    bool useExitAnim; // AB
    uint8_t unkAC[0xB0 - 0xAC]; // AC
#endif
};
RED4EXT_ASSERT_SIZE(SetTier3Params_NodeType, 0xB0);
} // namespace quest
using questSetTier3Params_NodeType = quest::SetTier3Params_NodeType;
} // namespace RED4ext

// clang-format on
