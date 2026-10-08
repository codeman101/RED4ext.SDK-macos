#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/TaskDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct SelectCoverTaskDefinition : AI::behavior::TaskDefinition
{
    static constexpr const char* NAME = "AIbehaviorSelectCoverTaskDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<AI::behavior::TaskDefinition>];
    CName sectorSelection; // 38
    uint8_t unk_40[0x40 - (0x38 + sizeof(sectorSelection))];
    Handle<AI::ArgumentMapping> cover; // 40
    uint8_t unk_50[0x50 - (0x40 + sizeof(cover))];
    Handle<AI::ArgumentMapping> coverID; // 50
    uint8_t unk_60[0x60 - (0x50 + sizeof(coverID))];
    Handle<AI::ArgumentMapping> multiCoverID; // 60
    uint8_t unk_70[0x70 - (0x60 + sizeof(multiCoverID))];
    Handle<AI::ArgumentMapping> combatTarget; // 70
    uint8_t unk_80[0x80 - (0x70 + sizeof(combatTarget))];
    Handle<AI::ArgumentMapping> friendlyTarget; // 80
    uint8_t unk_90[0x90 - (0x80 + sizeof(friendlyTarget))];
    Handle<AI::ArgumentMapping> combatZone; // 90
    uint8_t unk_A0[0xA0 - (0x90 + sizeof(combatZone))];
    Handle<AI::ArgumentMapping> ignoreRestrictMovementArea; // A0
    uint8_t unk_B0[0xB0 - (0xA0 + sizeof(ignoreRestrictMovementArea))];
    Handle<AI::ArgumentMapping> selectionPreset; // B0
    uint8_t unk_C0[0xC0 - (0xB0 + sizeof(selectionPreset))];
    Handle<AI::ArgumentMapping> onActivationSelectionPreset; // C0
    uint8_t unk_D0[0xD0 - (0xC0 + sizeof(onActivationSelectionPreset))];
    Handle<AI::ArgumentMapping> secondStagePreset; // D0
    uint8_t unk_E0[0xE0 - (0xD0 + sizeof(secondStagePreset))];
    Handle<AI::ArgumentMapping> coverChangeThreshold; // E0
    uint8_t unk_F0[0xF0 - (0xE0 + sizeof(coverChangeThreshold))];
    Handle<AI::ArgumentMapping> coverGatheringCenterObject; // F0
    uint8_t unk_100[0x100 - (0xF0 + sizeof(coverGatheringCenterObject))];
    Handle<AI::ArgumentMapping> coverDisablingDuration; // 100
#else
    CName sectorSelection; // 38
    Handle<AI::ArgumentMapping> cover; // 40
    Handle<AI::ArgumentMapping> coverID; // 50
    Handle<AI::ArgumentMapping> multiCoverID; // 60
    Handle<AI::ArgumentMapping> combatTarget; // 70
    Handle<AI::ArgumentMapping> friendlyTarget; // 80
    Handle<AI::ArgumentMapping> combatZone; // 90
    Handle<AI::ArgumentMapping> ignoreRestrictMovementArea; // A0
    Handle<AI::ArgumentMapping> selectionPreset; // B0
    Handle<AI::ArgumentMapping> onActivationSelectionPreset; // C0
    Handle<AI::ArgumentMapping> secondStagePreset; // D0
    Handle<AI::ArgumentMapping> coverChangeThreshold; // E0
    Handle<AI::ArgumentMapping> coverGatheringCenterObject; // F0
    Handle<AI::ArgumentMapping> coverDisablingDuration; // 100
#endif
};
RED4EXT_ASSERT_SIZE(SelectCoverTaskDefinition, 0x110);
} // namespace AI::behavior
using AIbehaviorSelectCoverTaskDefinition = AI::behavior::SelectCoverTaskDefinition;
} // namespace RED4ext

// clang-format on
