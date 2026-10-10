#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectExecutor.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/FractureFieldParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/ShapeType.hpp>

namespace RED4ext
{
namespace game
{
struct EffectExecutor_PhysicalFractureField : game::EffectExecutor
{
    static constexpr const char* NAME = "gameEffectExecutor_PhysicalFractureField";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_44[0x44 - ::RED4ext::Detail::DataSize<game::EffectExecutor>];
    physics::FractureFieldParams fieldParams; // 44
    uint8_t unk_5C[0x5C - (0x44 + sizeof(fieldParams))];
    Vector3 fieldDimensions; // 5C
    uint8_t unk_68[0x68 - (0x5C + sizeof(fieldDimensions))];
    physics::ShapeType fieldShape; // 68
    uint8_t unk_69[0x69 - (0x68 + sizeof(fieldShape))];
    bool fromHitPosition; // 69
#else
    physics::FractureFieldParams fieldParams; // 48
    Vector3 fieldDimensions; // 60
    physics::ShapeType fieldShape; // 6C
    bool fromHitPosition; // 6D
    uint8_t unk6E[0x70 - 0x6E]; // 6E
#endif
};
RED4EXT_ASSERT_SIZE(EffectExecutor_PhysicalFractureField, 0x70);
} // namespace game
using gameEffectExecutor_PhysicalFractureField = game::EffectExecutor_PhysicalFractureField;
} // namespace RED4ext

// clang-format on
