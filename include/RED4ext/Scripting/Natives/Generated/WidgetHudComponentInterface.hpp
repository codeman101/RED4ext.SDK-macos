#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/WidgetBaseComponent.hpp>

namespace RED4ext
{
struct CMaterialTemplate;
namespace ink { struct HudEntriesResource; }
namespace world::ui { struct MeshTargetBinding; }

struct __declspec(align(0x10)) WidgetHudComponentInterface : WidgetBaseComponent
{
    static constexpr const char* NAME = "WidgetHudComponentInterface";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_198[0x198 - ::RED4ext::Detail::DataSize<WidgetBaseComponent>];
    Ref<CMaterialTemplate> externalMaterial; // 198
    uint8_t unk_1B0[0x1B0 - (0x198 + sizeof(externalMaterial))];
    Handle<world::ui::MeshTargetBinding> meshTargetBinding; // 1B0
    uint8_t unk_1D0[0x1D0 - (0x1B0 + sizeof(meshTargetBinding))];
    Ref<ink::HudEntriesResource> hudEntriesResource; // 1D0
#else
    Ref<CMaterialTemplate> externalMaterial; // 1A0
    Handle<world::ui::MeshTargetBinding> meshTargetBinding; // 1B8
    uint8_t unk1C8[0x1D8 - 0x1C8]; // 1C8
    Ref<ink::HudEntriesResource> hudEntriesResource; // 1D8
#endif
};
RED4EXT_ASSERT_SIZE(WidgetHudComponentInterface, 0x1F0);
} // namespace RED4ext

// clang-format on
