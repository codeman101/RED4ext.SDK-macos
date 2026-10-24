#if defined(__APPLE__)
#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MenuGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ImageWidgetReference.hpp>

namespace RED4ext
{
namespace ent { struct EntityTemplate; }
namespace world { struct EnvironmentAreaParameters; }

namespace game::ui
{
struct WorldMapPreviewGameController : game::ui::MenuGameController
{
    static constexpr const char* NAME = "gameuiWorldMapPreviewGameController";
    static constexpr const char* ALIAS = "inkWorldMapPreviewGameController";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_1C8[0x1C8 - ::RED4ext::Detail::DataSize<game::ui::MenuGameController>];
    RaRef<ent::EntityTemplate> viewTemplate; // 1C8
    uint8_t unk_1D0[0x1D0 - (0x1C8 + sizeof(viewTemplate))];
    Ref<world::EnvironmentAreaParameters> viewEnvironmentDefinition; // 1D0
    uint8_t unk_1E8[0x1E8 - (0x1D0 + sizeof(viewEnvironmentDefinition))];
    RaRef<ent::EntityTemplate> cursorTemplate; // 1E8
    uint8_t unk_1F0[0x1F0 - (0x1E8 + sizeof(cursorTemplate))];
    ink::ImageWidgetReference canvas; // 1F0
#else
    uint8_t unk100[0x1C8 - 0x100]; // 100
    RaRef<ent::EntityTemplate> viewTemplate; // 1C8
    Ref<world::EnvironmentAreaParameters> viewEnvironmentDefinition; // 1D0
    RaRef<ent::EntityTemplate> cursorTemplate; // 1E8
    ink::ImageWidgetReference canvas; // 1F0
#endif

};
RED4EXT_ASSERT_SIZE(WorldMapPreviewGameController, 0x208);
} // namespace game::ui
using gameuiWorldMapPreviewGameController = game::ui::WorldMapPreviewGameController;
using inkWorldMapPreviewGameController = game::ui::WorldMapPreviewGameController;
} // namespace RED4ext

// clang-format on

#else
#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MenuGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ImageWidgetReference.hpp>

namespace RED4ext
{
namespace ent { struct EntityTemplate; }
namespace world { struct EnvironmentAreaParameters; }

namespace game::ui
{
struct WorldMapPreviewGameController : game::ui::MenuGameController
{
    static constexpr const char* NAME = "gameuiWorldMapPreviewGameController";
    static constexpr const char* ALIAS = "inkWorldMapPreviewGameController";

    uint8_t unkF0[0x1B8 - 0xF0]; // F0
    RaRef<ent::EntityTemplate> viewTemplate; // 1B8
    Ref<world::EnvironmentAreaParameters> viewEnvironmentDefinition; // 1C0
    RaRef<ent::EntityTemplate> cursorTemplate; // 1D8
    ink::ImageWidgetReference canvas; // 1E0
};
RED4EXT_ASSERT_SIZE(WorldMapPreviewGameController, 0x1F8);
} // namespace game::ui
using gameuiWorldMapPreviewGameController = game::ui::WorldMapPreviewGameController;
using inkWorldMapPreviewGameController = game::ui::WorldMapPreviewGameController;
} // namespace RED4ext

// clang-format on

#endif
