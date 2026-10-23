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
    Ref<ink::CreditsResource> creditsResourcePS4; // 130
    uint8_t unk_148[0x148 - (0x130 + sizeof(creditsResourcePS4))];
    Ref<ink::CreditsResource> creditsResourceXBOXPC; // 148
    uint8_t unk_160[0x160 - (0x148 + sizeof(creditsResourceXBOXPC))];
    ink::CompoundWidgetReference sectionsContainer; // 160
    uint8_t unk_178[0x178 - (0x160 + sizeof(sectionsContainer))];
    ink::TextWidgetReference singleTextWidget; // 178
    uint8_t unk_190[0x190 - (0x178 + sizeof(singleTextWidget))];
    ink::TextWidgetReference speakerNameTextWidget; // 190
    uint8_t unk_1A8[0x1A8 - (0x190 + sizeof(speakerNameTextWidget))];
    ink::CompoundWidgetReference exitTooltipContainer; // 1A8
    uint8_t unk_1F8[0x1F8 - (0x1A8 + sizeof(exitTooltipContainer))];
    CName openVideoScreenAnimName; // 1F8
    uint8_t unk_200[0x200 - (0x1F8 + sizeof(openVideoScreenAnimName))];
    CName closeVideoScreenAnimName; // 200
    uint8_t unk_208[0x208 - (0x200 + sizeof(closeVideoScreenAnimName))];
    CName swapBackgroundVideoAnimName; // 208
    uint8_t unk_210[0x210 - (0x208 + sizeof(swapBackgroundVideoAnimName))];
    CName singleAnimName; // 210
    uint8_t unk_241[0x241 - (0x210 + sizeof(singleAnimName))];
    bool isPreVideoFinished; // 241
    uint8_t unk_242[0x242 - (0x241 + sizeof(isPreVideoFinished))];
    bool isEp1CreditsImplementation; // 242
    uint8_t unk_244[0x244 - (0x242 + sizeof(isEp1CreditsImplementation))];
    float exitNotificationDisplayTime; // 244
    uint8_t unk_24D[0x24D - (0x244 + sizeof(exitNotificationDisplayTime))];
    bool shouldShowRewardPrompt; // 24D
    uint8_t unk_24E[0x24E - (0x24D + sizeof(shouldShowRewardPrompt))];
    bool isInFinalBoardsMode; // 24E
    uint8_t unk_250[0x250 - (0x24E + sizeof(isInFinalBoardsMode))];
    ink::CompoundWidgetReference subtitlesContainer; // 250
    uint8_t unk_268[0x268 - (0x250 + sizeof(subtitlesContainer))];
    RaRef<CResource> subtitlesLibraryPath; // 268
    uint8_t unk_270[0x270 - (0x268 + sizeof(subtitlesLibraryPath))];
    float scrollingSpeed; // 270
    uint8_t unk_274[0x274 - (0x270 + sizeof(scrollingSpeed))];
    float fastforwardScrollingSpeed; // 274
    uint8_t unk_278[0x278 - (0x274 + sizeof(fastforwardScrollingSpeed))];
    float topCreditsMargin; // 278
    uint8_t unk_27C[0x27C - (0x278 + sizeof(topCreditsMargin))];
    float bottomCreditsMargin; // 27C
    uint8_t unk_280[0x280 - (0x27C + sizeof(bottomCreditsMargin))];
    float startPosition; // 280
    uint8_t unk_288[0x288 - (0x280 + sizeof(startPosition))];
    CName headerLibraryID; // 288
    uint8_t unk_290[0x290 - (0x288 + sizeof(headerLibraryID))];
    CName boldLibraryID; // 290
    uint8_t unk_298[0x298 - (0x290 + sizeof(boldLibraryID))];
    CName basicLibraryID; // 298
    uint8_t unk_2A0[0x2A0 - (0x298 + sizeof(basicLibraryID))];
    CName basicTranslatableLibraryID; // 2A0
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
