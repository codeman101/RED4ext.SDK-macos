#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/SlotComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/HitRepresentationOverride.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/HitShapeBVH.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/HitShapeContainer.hpp>

namespace RED4ext
{
namespace game { struct HitRepresentationResource; }

namespace game
{
struct __declspec(align(0x10)) HitRepresentationComponent : ent::SlotComponent
{
    static constexpr const char* NAME = "gameHitRepresentationComponent";
    static constexpr const char* ALIAS = "HitRepresentationComponent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_1A0[0x1A0 - ::RED4ext::Detail::DataSize<ent::SlotComponent>];
    RaRef<game::HitRepresentationResource> resource; // 1A0
    uint8_t unk_1C0[0x1C0 - (0x1A0 + sizeof(resource))];
    DynArray<game::HitRepresentationOverride> appearanceOverrides; // 1C0
    uint8_t unk_1D0[0x1D0 - (0x1C0 + sizeof(appearanceOverrides))];
    DynArray<game::HitShapeContainer> representations; // 1D0
    uint8_t unk_200[0x200 - (0x1D0 + sizeof(representations))];
    CName physicsMaterial; // 200
    uint8_t unk_208[0x208 - (0x200 + sizeof(physicsMaterial))];
    bool useResourceData; // 208
    uint8_t unk_220[0x220 - (0x208 + sizeof(useResourceData))];
    game::HitShapeBVH bvhRoot; // 220
#else
    uint8_t unk1A0[0x1A8 - 0x1A0]; // 1A0
    RaRef<game::HitRepresentationResource> resource; // 1A8
    uint8_t unk1B0[0x1C8 - 0x1B0]; // 1B0
    DynArray<game::HitRepresentationOverride> appearanceOverrides; // 1C8
    DynArray<game::HitShapeContainer> representations; // 1D8
    uint8_t unk1E8[0x208 - 0x1E8]; // 1E8
    CName physicsMaterial; // 208
    bool useResourceData; // 210
    uint8_t unk211[0x230 - 0x211]; // 211
    game::HitShapeBVH bvhRoot; // 230
    uint8_t unk2C0[0x350 - 0x2C0]; // 2C0
#endif
};
RED4EXT_ASSERT_SIZE(HitRepresentationComponent, 0x350);
} // namespace game
using gameHitRepresentationComponent = game::HitRepresentationComponent;
using HitRepresentationComponent = game::HitRepresentationComponent;
} // namespace RED4ext

// clang-format on
