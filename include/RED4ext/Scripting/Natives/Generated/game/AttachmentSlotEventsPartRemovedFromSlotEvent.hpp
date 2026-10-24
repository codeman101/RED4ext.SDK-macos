#if defined(__APPLE__)
#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { struct ItemObject; }

namespace game
{
struct AttachmentSlotEventsPartRemovedFromSlotEvent : red::Event
{
    static constexpr const char* NAME = "gameAttachmentSlotEventsPartRemovedFromSlotEvent";
    static constexpr const char* ALIAS = "PartRemovedFromSlotEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    ItemID itemID; // 40
    uint8_t unk_50[0x50 - (0x40 + sizeof(itemID))];
    ItemID removedPartID; // 50
#else
    WeakHandle<game::ItemObject> item; // 40
    ItemID removedPartID; // 50
    TweakDBID slotID; // 60

#endif
};
RED4EXT_ASSERT_SIZE(AttachmentSlotEventsPartRemovedFromSlotEvent, 0x68);
} // namespace game
using gameAttachmentSlotEventsPartRemovedFromSlotEvent = game::AttachmentSlotEventsPartRemovedFromSlotEvent;
using PartRemovedFromSlotEvent = game::AttachmentSlotEventsPartRemovedFromSlotEvent;
} // namespace RED4ext

// clang-format on

#else
#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct AttachmentSlotEventsPartRemovedFromSlotEvent : red::Event
{
    static constexpr const char* NAME = "gameAttachmentSlotEventsPartRemovedFromSlotEvent";
    static constexpr const char* ALIAS = "PartRemovedFromSlotEvent";

    ItemID itemID; // 40
    ItemID removedPartID; // 50
};
RED4EXT_ASSERT_SIZE(AttachmentSlotEventsPartRemovedFromSlotEvent, 0x60);
} // namespace game
using gameAttachmentSlotEventsPartRemovedFromSlotEvent = game::AttachmentSlotEventsPartRemovedFromSlotEvent;
using PartRemovedFromSlotEvent = game::AttachmentSlotEventsPartRemovedFromSlotEvent;
} // namespace RED4ext

// clang-format on

#endif
