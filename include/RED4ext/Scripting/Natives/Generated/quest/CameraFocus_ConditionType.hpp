#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISystemConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct CameraFocus_ConditionType : quest::ISystemConditionType
{
    static constexpr const char* NAME = "questCameraFocus_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::ISystemConditionType>];
    game::EntityReference objectRef; // 38
    uint8_t unk_70[0x70 - (0x38 + sizeof(objectRef))];
    float timeInterval; // 70
    uint8_t unk_74[0x74 - (0x70 + sizeof(timeInterval))];
    bool onScreenTest; // 74
    uint8_t unk_75[0x75 - (0x74 + sizeof(onScreenTest))];
    bool useFrustrumCheck; // 75
    uint8_t unk_78[0x78 - (0x75 + sizeof(useFrustrumCheck))];
    float angleTolerance; // 78
    uint8_t unk_7C[0x7C - (0x78 + sizeof(angleTolerance))];
    bool inverted; // 7C
    uint8_t unk_7D[0x7D - (0x7C + sizeof(inverted))];
    bool zoomed; // 7D
#else
    game::EntityReference objectRef; // 38
    float timeInterval; // 70
    bool onScreenTest; // 74
    bool useFrustrumCheck; // 75
    uint8_t unk76[0x78 - 0x76]; // 76
    float angleTolerance; // 78
    bool inverted; // 7C
    bool zoomed; // 7D
    uint8_t unk7E[0x80 - 0x7E]; // 7E
#endif
};
RED4EXT_ASSERT_SIZE(CameraFocus_ConditionType, 0x80);
} // namespace quest
using questCameraFocus_ConditionType = quest::CameraFocus_ConditionType;
} // namespace RED4ext

// clang-format on
