#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/CurvePathBakerUserInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/SplineNode.hpp>

namespace RED4ext
{
namespace anim { struct AnimSet; }
namespace anim { struct Rig; }

namespace world
{
struct __declspec(align(0x10)) CurvePathNode : world::SplineNode
{
    static constexpr const char* NAME = "worldCurvePathNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_A8[0xA8 - ::RED4ext::Detail::DataSize<world::SplineNode>];
    anim::CurvePathBakerUserInput userInput; // A8
    uint8_t unk_C0[0xC0 - (0xA8 + sizeof(userInput))];
    Vector4 defaultForwardVector; // C0
    uint8_t unk_D0[0xD0 - (0xC0 + sizeof(defaultForwardVector))];
    float globalInBlendTime; // D0
    uint8_t unk_D4[0xD4 - (0xD0 + sizeof(globalInBlendTime))];
    float globalOutBlendTime; // D4
    uint8_t unk_D8[0xD8 - (0xD4 + sizeof(globalOutBlendTime))];
    CName defaultPoseAnimationName; // D8
    uint8_t unk_E0[0xE0 - (0xD8 + sizeof(defaultPoseAnimationName))];
    float defaultPoseSampleTime; // E0
    uint8_t unk_E4[0xE4 - (0xE0 + sizeof(defaultPoseSampleTime))];
    float initialDiffYaw; // E4
    uint8_t unk_E8[0xE8 - (0xE4 + sizeof(initialDiffYaw))];
    bool turnCharacterToMatchVelocity; // E8
    uint8_t unk_F0[0xF0 - (0xE8 + sizeof(turnCharacterToMatchVelocity))];
    Ref<anim::Rig> rig; // F0
    uint8_t unk_108[0x108 - (0xF0 + sizeof(rig))];
    DynArray<Ref<anim::AnimSet>> animSets; // 108
    uint8_t unk_118[0x118 - (0x108 + sizeof(animSets))];
    float timeDeltaMultiplier; // 118
#else
    uint8_t unk70[0xA8 - 0x70]; // 70
    anim::CurvePathBakerUserInput userInput; // A8
    uint8_t unkB8[0xC0 - 0xB8]; // B8
    Vector4 defaultForwardVector; // C0
    float globalInBlendTime; // D0
    float globalOutBlendTime; // D4
    CName defaultPoseAnimationName; // D8
    float defaultPoseSampleTime; // E0
    float initialDiffYaw; // E4
    bool turnCharacterToMatchVelocity; // E8
    uint8_t unkE9[0xF0 - 0xE9]; // E9
    Ref<anim::Rig> rig; // F0
    DynArray<Ref<anim::AnimSet>> animSets; // 108
    float timeDeltaMultiplier; // 118
    uint8_t unk11C[0x2C0 - 0x11C]; // 11C
#endif
};
RED4EXT_ASSERT_SIZE(CurvePathNode, 0x2C0);
} // namespace world
using worldCurvePathNode = world::CurvePathNode;
} // namespace RED4ext

// clang-format on
