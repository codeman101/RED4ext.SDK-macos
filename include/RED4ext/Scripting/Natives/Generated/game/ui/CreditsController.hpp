#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/WidgetGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextWidgetReference.hpp>

namespace RED4ext
{
struct CResource;
namespace ink { struct CreditsResource; }

namespace game::ui
{
struct CreditsController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiCreditsController";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_130[0x130 - ::RED4ext::Detail::DataSize<game::ui::WidgetGameController>];
    Ref<ink::CreditsResource> creditsResourceXBOX; // 130
    uint8_t unk_148[0x148 - (0x130 + sizeof(creditsResourceXBOX))];
    Ref<ink::CreditsResource> creditsResourcePC; // 148
    uint8_t unk_160[0x160 - (0x148 + sizeof(creditsResourcePC))];
    Ref<ink::CreditsResource> creditsResourceEmporium; // 160
    uint8_t unk_178[0x178 - (0x160 + sizeof(creditsResourceEmporium))];
    Ref<ink::CreditsResource> creditsResourceMac; // 178
    uint8_t unk_190[0x190 - (0x178 + sizeof(creditsResourceMac))];
    Ref<ink::CreditsResource> creditsResourcePS5; // 190
    uint8_t unk_1A8[0x1A8 - (0x190 + sizeof(creditsResourcePS5))];
    ink::CompoundWidgetReference sectionsContainer; // 1A8
    uint8_t unk_1C0[0x1C0 - (0x1A8 + sizeof(sectionsContainer))];
    ink::TextWidgetReference singleTextWidget; // 1C0
    uint8_t unk_1D8[0x1D8 - (0x1C0 + sizeof(singleTextWidget))];
    ink::TextWidgetReference speakerNameTextWidget; // 1D8
    uint8_t unk_1F0[0x1F0 - (0x1D8 + sizeof(speakerNameTextWidget))];
    ink::CompoundWidgetReference exitTooltipContainer; // 1F0
    uint8_t unk_240[0x240 - (0x1F0 + sizeof(exitTooltipContainer))];
    CName openVideoScreenAnimName; // 240
    uint8_t unk_248[0x248 - (0x240 + sizeof(openVideoScreenAnimName))];
    CName closeVideoScreenAnimName; // 248
    uint8_t unk_250[0x250 - (0x248 + sizeof(closeVideoScreenAnimName))];
    CName swapBackgroundVideoAnimName; // 250
    uint8_t unk_258[0x258 - (0x250 + sizeof(swapBackgroundVideoAnimName))];
    CName singleAnimName; // 258
    uint8_t unk_289[0x289 - (0x258 + sizeof(singleAnimName))];
    bool isPreVideoFinished; // 289
    uint8_t unk_28A[0x28A - (0x289 + sizeof(isPreVideoFinished))];
    bool isEp1CreditsImplementation; // 28A
    uint8_t unk_28C[0x28C - (0x28A + sizeof(isEp1CreditsImplementation))];
    float exitNotificationDisplayTime; // 28C
    uint8_t unk_295[0x295 - (0x28C + sizeof(exitNotificationDisplayTime))];
    bool shouldShowRewardPrompt; // 295
    uint8_t unk_296[0x296 - (0x295 + sizeof(shouldShowRewardPrompt))];
    bool isInFinalBoardsMode; // 296
    uint8_t unk_298[0x298 - (0x296 + sizeof(isInFinalBoardsMode))];
    ink::CompoundWidgetReference subtitlesContainer; // 298
    uint8_t unk_2B0[0x2B0 - (0x298 + sizeof(subtitlesContainer))];
    RaRef<CResource> subtitlesLibraryPath; // 2B0
    uint8_t unk_2B8[0x2B8 - (0x2B0 + sizeof(subtitlesLibraryPath))];
    float scrollingSpeed; // 2B8
    uint8_t unk_2BC[0x2BC - (0x2B8 + sizeof(scrollingSpeed))];
    float fastforwardScrollingSpeed; // 2BC
    uint8_t unk_2C0[0x2C0 - (0x2BC + sizeof(fastforwardScrollingSpeed))];
    float topCreditsMargin; // 2C0
    uint8_t unk_2C4[0x2C4 - (0x2C0 + sizeof(topCreditsMargin))];
    float bottomCreditsMargin; // 2C4
    uint8_t unk_2C8[0x2C8 - (0x2C4 + sizeof(bottomCreditsMargin))];
    float startPosition; // 2C8
    uint8_t unk_2D0[0x2D0 - (0x2C8 + sizeof(startPosition))];
    CName headerLibraryID; // 2D0
    uint8_t unk_2D8[0x2D8 - (0x2D0 + sizeof(headerLibraryID))];
    CName boldLibraryID; // 2D8
    uint8_t unk_2E0[0x2E0 - (0x2D8 + sizeof(boldLibraryID))];
    CName basicLibraryID; // 2E0
    uint8_t unk_2E8[0x2E8 - (0x2E0 + sizeof(basicLibraryID))];
    CName basicTranslatableLibraryID; // 2E8
#else
    uint8_t unkE0[0x130 - 0xE0]; // E0
    Ref<ink::CreditsResource> creditsResourceXBOX; // 130
    Ref<ink::CreditsResource> creditsResourcePC; // 148
    Ref<ink::CreditsResource> creditsResourceEmporium; // 160
    Ref<ink::CreditsResource> creditsResourceMac; // 178
    Ref<ink::CreditsResource> creditsResourcePS5; // 190
    ink::CompoundWidgetReference sectionsContainer; // 1A8
    ink::TextWidgetReference singleTextWidget; // 1C0
    ink::TextWidgetReference speakerNameTextWidget; // 1D8
    ink::CompoundWidgetReference exitTooltipContainer; // 1F0
    uint8_t unk208[0x240 - 0x208]; // 208
    CName openVideoScreenAnimName; // 240
    CName closeVideoScreenAnimName; // 248
    CName swapBackgroundVideoAnimName; // 250
    CName singleAnimName; // 258
    uint8_t unk260[0x289 - 0x260]; // 260
    bool isPreVideoFinished; // 289
    bool isEp1CreditsImplementation; // 28A
    uint8_t unk28B[0x28C - 0x28B]; // 28B
    float exitNotificationDisplayTime; // 28C
    uint8_t unk290[0x295 - 0x290]; // 290
    bool shouldShowRewardPrompt; // 295
    bool isInFinalBoardsMode; // 296
    uint8_t unk297[0x298 - 0x297]; // 297
    ink::CompoundWidgetReference subtitlesContainer; // 298
    RaRef<CResource> subtitlesLibraryPath; // 2B0
    float scrollingSpeed; // 2B8
    float fastforwardScrollingSpeed; // 2BC
    float topCreditsMargin; // 2C0
    float bottomCreditsMargin; // 2C4
    float startPosition; // 2C8
    uint8_t unk2CC[0x2D0 - 0x2CC]; // 2CC
    CName headerLibraryID; // 2D0
    CName boldLibraryID; // 2D8
    CName basicLibraryID; // 2E0
    CName basicTranslatableLibraryID; // 2E8
    uint8_t unk2F0[0x370 - 0x2F0]; // 2F0
#endif
};
RED4EXT_ASSERT_SIZE(CreditsController, 0x370);
} // namespace game::ui
using gameuiCreditsController = game::ui::CreditsController;
} // namespace RED4ext

// clang-format on
