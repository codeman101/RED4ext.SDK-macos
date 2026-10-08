#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/ExternalPhoneElement.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/GenericNotificationGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/HudScalingSensitiveWidget.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/LocalPhoneElement.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/PhoneElementVisibility.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/ResolutionSensitiveWidget.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct NewHudPhoneGameController : game::ui::GenericNotificationGameController
{
    static constexpr const char* NAME = "gameuiNewHudPhoneGameController";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_1A8[0x1A8 - ::RED4ext::Detail::DataSize<game::ui::GenericNotificationGameController>];
    game::ui::LocalPhoneElement holoAudioCallElement; // 1A8
    uint8_t unk_210[0x210 - (0x1A8 + sizeof(holoAudioCallElement))];
    game::ui::LocalPhoneElement incomingCallElement; // 210
    uint8_t unk_278[0x278 - (0x210 + sizeof(incomingCallElement))];
    game::ui::LocalPhoneElement contactsElement; // 278
    uint8_t unk_2E0[0x2E0 - (0x278 + sizeof(contactsElement))];
    game::ui::ExternalPhoneElement smsMessengerElement; // 2E0
    uint8_t unk_360[0x360 - (0x2E0 + sizeof(smsMessengerElement))];
    game::ui::PhoneElementVisibility notificationsElement; // 360
    uint8_t unk_3A0[0x3A0 - (0x360 + sizeof(notificationsElement))];
    game::ui::LocalPhoneElement phoneIconElement; // 3A0
    uint8_t unk_438[0x438 - (0x3A0 + sizeof(phoneIconElement))];
    DynArray<game::ui::ResolutionSensitiveWidget> resolutionSensitiveWidgets; // 438
    uint8_t unk_448[0x448 - (0x438 + sizeof(resolutionSensitiveWidgets))];
    DynArray<game::ui::HudScalingSensitiveWidget> hudScalingSensitiveWidgets; // 448
    uint8_t unk_470[0x470 - (0x448 + sizeof(hudScalingSensitiveWidgets))];
    ink::WidgetReference phoneIconMarker; // 470
    uint8_t unk_488[0x488 - (0x470 + sizeof(phoneIconMarker))];
    ink::WidgetReference phoneIconVehicleMarker; // 488
    uint8_t unk_4A0[0x4A0 - (0x488 + sizeof(phoneIconVehicleMarker))];
    ink::WidgetReference callMarker; // 4A0
    uint8_t unk_4B8[0x4B8 - (0x4A0 + sizeof(callMarker))];
    ink::WidgetReference contactsMarker; // 4B8
    uint8_t unk_4D0[0x4D0 - (0x4B8 + sizeof(contactsMarker))];
    ink::WidgetReference notificationMarker; // 4D0
#else
    game::ui::LocalPhoneElement holoAudioCallElement; // 1A8
    game::ui::LocalPhoneElement incomingCallElement; // 210
    game::ui::LocalPhoneElement contactsElement; // 278
    game::ui::ExternalPhoneElement smsMessengerElement; // 2E0
    game::ui::PhoneElementVisibility notificationsElement; // 360
    game::ui::LocalPhoneElement phoneIconElement; // 3A0
    uint8_t unk408[0x438 - 0x408]; // 408
    DynArray<game::ui::ResolutionSensitiveWidget> resolutionSensitiveWidgets; // 438
    DynArray<game::ui::HudScalingSensitiveWidget> hudScalingSensitiveWidgets; // 448
    uint8_t unk458[0x470 - 0x458]; // 458
    ink::WidgetReference phoneIconMarker; // 470
    ink::WidgetReference phoneIconVehicleMarker; // 488
    ink::WidgetReference callMarker; // 4A0
    ink::WidgetReference contactsMarker; // 4B8
    ink::WidgetReference notificationMarker; // 4D0
    uint8_t unk4E8[0x500 - 0x4E8]; // 4E8
#endif
};
RED4EXT_ASSERT_SIZE(NewHudPhoneGameController, 0x500);
} // namespace game::ui
using gameuiNewHudPhoneGameController = game::ui::NewHudPhoneGameController;
} // namespace RED4ext

// clang-format on
