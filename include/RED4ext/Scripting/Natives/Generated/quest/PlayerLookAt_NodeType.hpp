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
struct PlayerLookAt_NodeType : quest::ISceneManagerNodeType
{
    static constexpr const char* NAME = "questPlayerLookAt_NodeType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<quest::ISceneManagerNodeType>];
    bool useOffsetToPlayer; // 34
    uint8_t unk_38[0x38 - (0x34 + sizeof(useOffsetToPlayer))];
    game::EntityReference objectRef; // 38
    uint8_t unk_70[0x70 - (0x38 + sizeof(objectRef))];
    CName slotName; // 70
    uint8_t unk_78[0x78 - (0x70 + sizeof(slotName))];
    Vector3 offsetPos; // 78
    uint8_t unk_84[0x84 - (0x78 + sizeof(offsetPos))];
    float duration; // 84
    uint8_t unk_88[0x88 - (0x84 + sizeof(duration))];
    bool adjustPitch; // 88
    uint8_t unk_89[0x89 - (0x88 + sizeof(adjustPitch))];
    bool adjustYaw; // 89
    uint8_t unk_8A[0x8A - (0x89 + sizeof(adjustYaw))];
    bool endOnTargetReached; // 8A
    uint8_t unk_8B[0x8B - (0x8A + sizeof(endOnTargetReached))];
    bool endOnCameraInputApplied; // 8B
    uint8_t unk_8C[0x8C - (0x8B + sizeof(endOnCameraInputApplied))];
    bool endOnTimeExceeded; // 8C
    uint8_t unk_90[0x90 - (0x8C + sizeof(endOnTimeExceeded))];
    float cameraInputMagToBreak; // 90
    uint8_t unk_94[0x94 - (0x90 + sizeof(cameraInputMagToBreak))];
    float precision; // 94
    uint8_t unk_98[0x98 - (0x94 + sizeof(precision))];
    float maxDuration; // 98
    uint8_t unk_9C[0x9C - (0x98 + sizeof(maxDuration))];
    bool easeIn; // 9C
    uint8_t unk_9D[0x9D - (0x9C + sizeof(easeIn))];
    bool easeOut; // 9D
#else
    bool useOffsetToPlayer; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
    game::EntityReference objectRef; // 40
    CName slotName; // 78
    Vector3 offsetPos; // 80
    float duration; // 8C
    bool adjustPitch; // 90
    bool adjustYaw; // 91
    bool endOnTargetReached; // 92
    bool endOnCameraInputApplied; // 93
    bool endOnTimeExceeded; // 94
    uint8_t unk95[0x98 - 0x95]; // 95
    float cameraInputMagToBreak; // 98
    float precision; // 9C
    float maxDuration; // A0
    bool easeIn; // A4
    bool easeOut; // A5
    uint8_t unkA6[0xA8 - 0xA6]; // A6
#endif
};
RED4EXT_ASSERT_SIZE(PlayerLookAt_NodeType, 0xA8);
} // namespace quest
using questPlayerLookAt_NodeType = quest::PlayerLookAt_NodeType;
} // namespace RED4ext

// clang-format on
