#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/FppRepDetachedObjectInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TppRepAttachedObjectInfo.hpp>

namespace RED4ext
{
namespace game
{
struct TPPRepresentationComponent : ent::IComponent
{
    static constexpr const char* NAME = "gameTPPRepresentationComponent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_90[0x90 - ::RED4ext::Detail::DataSize<ent::IComponent>];
    DynArray<game::FppRepDetachedObjectInfo> detachedObjectInfo; // 90
    uint8_t unk_A0[0xA0 - (0x90 + sizeof(detachedObjectInfo))];
    DynArray<game::TppRepAttachedObjectInfo> attachedObjectInfo; // A0
    uint8_t unk_B0[0xB0 - (0xA0 + sizeof(attachedObjectInfo))];
    DynArray<TweakDBID> affectedAppearanceSlots; // B0
#else
    DynArray<game::FppRepDetachedObjectInfo> detachedObjectInfo; // 90
    DynArray<game::TppRepAttachedObjectInfo> attachedObjectInfo; // A0
    DynArray<TweakDBID> affectedAppearanceSlots; // B0
    uint8_t unkC0[0x1D0 - 0xC0]; // C0
#endif
};
RED4EXT_ASSERT_SIZE(TPPRepresentationComponent, 0x1D0);
} // namespace game
using gameTPPRepresentationComponent = game::TPPRepresentationComponent;
} // namespace RED4ext

// clang-format on
