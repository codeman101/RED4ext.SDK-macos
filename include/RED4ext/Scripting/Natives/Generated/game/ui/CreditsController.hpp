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
    Ref<ink::CreditsResource> creditsResourcePS4; // 130
    Ref<ink::CreditsResource> creditsResourceXBOXPC; // 148
    ink::CompoundWidgetReference sectionsContainer; // 160
    ink::TextWidgetReference singleTextWidget; // 178
    ink::TextWidgetReference speakerNameTextWidget; // 190
    ink::CompoundWidgetReference exitTooltipContainer; // 1A8
    uint8_t unk1C0[0x1F8 - 0x1C0]; // 1C0
    CName openVideoScreenAnimName; // 1F8
    CName closeVideoScreenAnimName; // 200
    CName swapBackgroundVideoAnimName; // 208
    CName singleAnimName; // 210
    uint8_t unk218[0x241 - 0x218]; // 218
    bool isPreVideoFinished; // 241
    bool isEp1CreditsImplementation; // 242
    uint8_t unk243[0x244 - 0x243]; // 243
    float exitNotificationDisplayTime; // 244
    uint8_t unk248[0x24D - 0x248]; // 248
    bool shouldShowRewardPrompt; // 24D
    bool isInFinalBoardsMode; // 24E
    uint8_t unk24F[0x250 - 0x24F]; // 24F
    ink::CompoundWidgetReference subtitlesContainer; // 250
    RaRef<CResource> subtitlesLibraryPath; // 268
    float scrollingSpeed; // 270
    float fastforwardScrollingSpeed; // 274
    float topCreditsMargin; // 278
    float bottomCreditsMargin; // 27C
    float startPosition; // 280
    uint8_t unk284[0x288 - 0x284]; // 284
    CName headerLibraryID; // 288
    CName boldLibraryID; // 290
    CName basicLibraryID; // 298
    CName basicTranslatableLibraryID; // 2A0
    uint8_t unk2A8[0x328 - 0x2A8]; // 2A8
#endif
};
RED4EXT_ASSERT_SIZE(CreditsController, 0x328);
} // namespace game::ui
using gameuiCreditsController = game::ui::CreditsController;
} // namespace RED4ext

// clang-format on
