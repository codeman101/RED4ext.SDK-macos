#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectInputParameter_Float.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectInputParameter_Vector.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectProvider.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectOutputParameter_Vector.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/QueryPreset.hpp>

namespace RED4ext
{
namespace physics { struct FilterData; }

namespace game
{
struct EffectObjectProvider_PhysicalRay : game::EffectObjectProvider
{
    static constexpr const char* NAME = "gameEffectObjectProvider_PhysicalRay";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<game::EffectObjectProvider>];
    game::EffectInputParameter_Vector inputPosition; // 40
    uint8_t unk_58[0x58 - (0x40 + sizeof(inputPosition))];
    game::EffectInputParameter_Vector inputForward; // 58
    uint8_t unk_70[0x70 - (0x58 + sizeof(inputForward))];
    game::EffectInputParameter_Float inputRange; // 70
    uint8_t unk_88[0x88 - (0x70 + sizeof(inputRange))];
    game::EffectOutputParameter_Vector outputRaycastEnd; // 88
    uint8_t unk_C8[0xC8 - (0x88 + sizeof(outputRaycastEnd))];
    Handle<physics::FilterData> filterData; // C8
    uint8_t unk_D8[0xD8 - (0xC8 + sizeof(filterData))];
    physics::QueryPreset queryPreset; // D8
#else
    game::EffectInputParameter_Vector inputPosition; // 40
    game::EffectInputParameter_Vector inputForward; // 58
    game::EffectInputParameter_Float inputRange; // 70
    game::EffectOutputParameter_Vector outputRaycastEnd; // 88
    Handle<physics::FilterData> filterData; // C8
    physics::QueryPreset queryPreset; // D8
    uint8_t unkE0[0xF0 - 0xE0]; // E0
#endif
};
RED4EXT_ASSERT_SIZE(EffectObjectProvider_PhysicalRay, 0xF0);
} // namespace game
using gameEffectObjectProvider_PhysicalRay = game::EffectObjectProvider_PhysicalRay;
} // namespace RED4ext

// clang-format on
