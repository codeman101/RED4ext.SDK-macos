#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/BaseMenuGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/GarmentSwitchEffectController.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/InGameMenuGameControllerItemSceneInfo.hpp>

namespace RED4ext
{
namespace game::ui
{
struct InGameMenuGameController : game::ui::BaseMenuGameController
{
    static constexpr const char* NAME = "gameuiInGameMenuGameController";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_150[0x150 - ::RED4ext::Detail::DataSize<game::ui::BaseMenuGameController>];
    DynArray<game::ui::InGameMenuGameControllerItemSceneInfo> itemSceneInfos; // 150
    uint8_t unk_160[0x160 - (0x150 + sizeof(itemSceneInfos))];
    DynArray<game::ui::GarmentSwitchEffectController> garmentSwitchEffectControllers; // 160
#else
    uint8_t unk140[0x150 - 0x140]; // 140
    DynArray<game::ui::InGameMenuGameControllerItemSceneInfo> itemSceneInfos; // 150
    DynArray<game::ui::GarmentSwitchEffectController> garmentSwitchEffectControllers; // 160
    uint8_t unk170[0x198 - 0x170]; // 170
#endif
};
RED4EXT_ASSERT_SIZE(InGameMenuGameController, 0x198);
} // namespace game::ui
using gameuiInGameMenuGameController = game::ui::InGameMenuGameController;
} // namespace RED4ext

// clang-format on
