#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace game
{
struct PhotoModeBackgroundViewComponent : ent::IComponent
{
    static constexpr const char* NAME = "gamePhotoModeBackgroundViewComponent";
    static constexpr const char* ALIAS = "PhotoModeBackgroundViewComponent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_C0[0xC0 - ::RED4ext::Detail::DataSize<ent::IComponent>];
    NodeRef backgroundPrefabRef; // C0
    uint8_t unk_C8[0xC8 - (0xC0 + sizeof(backgroundPrefabRef))];
    NodeRef targetPointRef; // C8
#else
    uint8_t unk90[0xC0 - 0x90]; // 90
    NodeRef backgroundPrefabRef; // C0
    NodeRef targetPointRef; // C8
    uint8_t unkD0[0xE0 - 0xD0]; // D0
#endif
};
RED4EXT_ASSERT_SIZE(PhotoModeBackgroundViewComponent, 0xE0);
} // namespace game
using gamePhotoModeBackgroundViewComponent = game::PhotoModeBackgroundViewComponent;
using PhotoModeBackgroundViewComponent = game::PhotoModeBackgroundViewComponent;
} // namespace RED4ext

// clang-format on
