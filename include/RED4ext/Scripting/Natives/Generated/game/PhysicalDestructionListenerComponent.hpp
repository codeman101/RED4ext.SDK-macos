#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace game
{
struct PhysicalDestructionListenerComponent : ent::IComponent
{
    static constexpr const char* NAME = "gamePhysicalDestructionListenerComponent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_90[0x90 - ::RED4ext::Detail::DataSize<ent::IComponent>];
    CName physicalDestructionComponentName; // 90
    uint8_t unk_98[0x98 - (0x90 + sizeof(physicalDestructionComponentName))];
    DynArray<float> thresholdLevels; // 98
#else
    CName physicalDestructionComponentName; // 90
    DynArray<float> thresholdLevels; // 98
#endif
};
RED4EXT_ASSERT_SIZE(PhysicalDestructionListenerComponent, 0xA8);
} // namespace game
using gamePhysicalDestructionListenerComponent = game::PhysicalDestructionListenerComponent;
} // namespace RED4ext

// clang-format on
