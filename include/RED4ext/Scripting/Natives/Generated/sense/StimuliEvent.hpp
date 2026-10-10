#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/StimPropagation.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/StimType.hpp>
#include <RED4ext/Scripting/Natives/Generated/sense/BaseStimuliEvent.hpp>
#include <RED4ext/Scripting/Natives/Generated/sense/StimInvestigateData.hpp>

namespace RED4ext
{
namespace game { struct Object; }
namespace game::data { struct Stim_Record; }
namespace sense { struct StimuliData; }

namespace sense
{
struct __declspec(align(0x10)) StimuliEvent : sense::BaseStimuliEvent
{
    static constexpr const char* NAME = "senseStimuliEvent";
    static constexpr const char* ALIAS = "StimuliEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_50[0x50 - ::RED4ext::Detail::DataSize<sense::BaseStimuliEvent>];
    sense::StimInvestigateData stimInvestigateData; // 50
    uint8_t unk_D0[0xD0 - (0x50 + sizeof(stimInvestigateData))];
    WeakHandle<game::Object> sourceObject; // D0
    uint8_t unk_E0[0xE0 - (0xD0 + sizeof(sourceObject))];
    WeakHandle<game::data::Stim_Record> stimRecord; // E0
    uint8_t unk_F0[0xF0 - (0xE0 + sizeof(stimRecord))];
    DynArray<Vector4> movePositions; // F0
    uint8_t unk_100[0x100 - (0xF0 + sizeof(movePositions))];
    Vector4 sourcePosition; // 100
    uint8_t unk_110[0x110 - (0x100 + sizeof(sourcePosition))];
    float radius; // 110
    uint8_t unk_114[0x114 - (0x110 + sizeof(radius))];
    float detection; // 114
    uint8_t unk_118[0x118 - (0x114 + sizeof(detection))];
    game::data::StimPropagation stimPropagation; // 118
    uint8_t unk_120[0x120 - (0x118 + sizeof(stimPropagation))];
    Handle<sense::StimuliData> data; // 120
    uint8_t unk_130[0x130 - (0x120 + sizeof(data))];
    game::data::StimType stimType; // 130
    uint8_t unk_134[0x134 - (0x130 + sizeof(stimType))];
    bool purelyDirect; // 134
#else
    sense::StimInvestigateData stimInvestigateData; // 50
    WeakHandle<game::Object> sourceObject; // D0
    WeakHandle<game::data::Stim_Record> stimRecord; // E0
    DynArray<Vector4> movePositions; // F0
    Vector4 sourcePosition; // 100
    float radius; // 110
    float detection; // 114
    game::data::StimPropagation stimPropagation; // 118
    uint8_t unk11C[0x120 - 0x11C]; // 11C
    Handle<sense::StimuliData> data; // 120
    game::data::StimType stimType; // 130
    bool purelyDirect; // 134
    uint8_t unk135[0x140 - 0x135]; // 135
#endif
};
RED4EXT_ASSERT_SIZE(StimuliEvent, 0x140);
} // namespace sense
using senseStimuliEvent = sense::StimuliEvent;
using StimuliEvent = sense::StimuliEvent;
} // namespace RED4ext

// clang-format on
