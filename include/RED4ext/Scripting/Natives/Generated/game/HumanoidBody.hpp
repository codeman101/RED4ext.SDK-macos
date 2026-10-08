#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace game
{
struct HumanoidBody : ent::IComponent
{
    static constexpr const char* NAME = "gameHumanoidBody";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_90[0x90 - ::RED4ext::Detail::DataSize<ent::IComponent>];
    CName stanceAnimFeatureName; // 90
    uint8_t unk_98[0x98 - (0x90 + sizeof(stanceAnimFeatureName))];
    CName aimAnimFeatureName; // 98
    uint8_t unk_A0[0xA0 - (0x98 + sizeof(aimAnimFeatureName))];
    float basePersonalSpace; // A0
    uint8_t unk_A4[0xA4 - (0xA0 + sizeof(basePersonalSpace))];
    float baseHeight; // A4
    uint8_t unk_A8[0xA8 - (0xA4 + sizeof(baseHeight))];
    float baseEyesHeightRatio; // A8
#else
    CName stanceAnimFeatureName; // 90
    CName aimAnimFeatureName; // 98
    float basePersonalSpace; // A0
    float baseHeight; // A4
    float baseEyesHeightRatio; // A8
    uint8_t unkAC[0xE0 - 0xAC]; // AC
#endif
};
RED4EXT_ASSERT_SIZE(HumanoidBody, 0xE0);
} // namespace game
using gameHumanoidBody = game::HumanoidBody;
} // namespace RED4ext

// clang-format on
