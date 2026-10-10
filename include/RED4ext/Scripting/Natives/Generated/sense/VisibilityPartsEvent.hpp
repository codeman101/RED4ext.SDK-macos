#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace sense
{
struct VisibilityPartsEvent : red::Event
{
    static constexpr const char* NAME = "senseVisibilityPartsEvent";
    static constexpr const char* ALIAS = "SenseVisibilityPartsEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    WeakHandle<game::Object> target; // 40
    uint8_t unk_50[0x50 - (0x40 + sizeof(target))];
    bool isPrimaryVisible; // 50
    uint8_t unk_51[0x51 - (0x50 + sizeof(isPrimaryVisible))];
    bool isSecondaryVisible; // 51
    uint8_t unk_58[0x58 - (0x51 + sizeof(isSecondaryVisible))];
    CName description; // 58
#else
    WeakHandle<game::Object> target; // 40
    bool isPrimaryVisible; // 50
    bool isSecondaryVisible; // 51
    uint8_t unk52[0x58 - 0x52]; // 52
    CName description; // 58
#endif
};
RED4EXT_ASSERT_SIZE(VisibilityPartsEvent, 0x60);
} // namespace sense
using senseVisibilityPartsEvent = sense::VisibilityPartsEvent;
using SenseVisibilityPartsEvent = sense::VisibilityPartsEvent;
} // namespace RED4ext

// clang-format on
