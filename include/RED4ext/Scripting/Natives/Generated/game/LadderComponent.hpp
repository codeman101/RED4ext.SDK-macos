#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace game
{
struct LadderComponent : ent::IComponent
{
    static constexpr const char* NAME = "gameLadderComponent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_94[0x94 - ::RED4ext::Detail::DataSize<ent::IComponent>];
    float heightOfBottomPart; // 94
    uint8_t unk_98[0x98 - (0x94 + sizeof(heightOfBottomPart))];
    float exitStepTop; // 98
    uint8_t unk_9C[0x9C - (0x98 + sizeof(exitStepTop))];
    float verticalStepTop; // 9C
    uint8_t unk_A0[0xA0 - (0x9C + sizeof(verticalStepTop))];
    float exitStepBottom; // A0
    uint8_t unk_A4[0xA4 - (0xA0 + sizeof(exitStepBottom))];
    float verticalStepBottom; // A4
    uint8_t unk_A8[0xA8 - (0xA4 + sizeof(verticalStepBottom))];
    float exitStepJump; // A8
    uint8_t unk_AC[0xAC - (0xA8 + sizeof(exitStepJump))];
    float verticalStepJump; // AC
    uint8_t unk_B0[0xB0 - (0xAC + sizeof(verticalStepJump))];
    float enterOffset; // B0
#else
    uint8_t unk90[0x94 - 0x90]; // 90
    float heightOfBottomPart; // 94
    float exitStepTop; // 98
    float verticalStepTop; // 9C
    float exitStepBottom; // A0
    float verticalStepBottom; // A4
    float exitStepJump; // A8
    float verticalStepJump; // AC
    float enterOffset; // B0
    uint8_t unkB4[0xB8 - 0xB4]; // B4
#endif
};
RED4EXT_ASSERT_SIZE(LadderComponent, 0xB8);
} // namespace game
using gameLadderComponent = game::LadderComponent;
} // namespace RED4ext

// clang-format on
