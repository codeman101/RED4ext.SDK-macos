#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/ConversationSavingStrategy.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TriggerAreaNode.hpp>

namespace RED4ext
{
namespace scn { struct InterestingConversationsResource; }
namespace world { struct ConversationData; }
namespace world { struct ConversationGroupData; }

namespace world
{
struct InterestingConversationsAreaNode : world::TriggerAreaNode
{
    static constexpr const char* NAME = "worldInterestingConversationsAreaNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_70[0x70 - ::RED4ext::Detail::DataSize<world::TriggerAreaNode>];
    DynArray<Ref<scn::InterestingConversationsResource>> conversationGroups; // 70
    uint8_t unk_80[0x80 - (0x70 + sizeof(conversationGroups))];
    DynArray<Handle<world::ConversationGroupData>> conversationResources; // 80
    uint8_t unk_90[0x90 - (0x80 + sizeof(conversationResources))];
    DynArray<Handle<world::ConversationData>> conversations; // 90
    uint8_t unk_A0[0xA0 - (0x90 + sizeof(conversations))];
    DynArray<NodeRef> workspots; // A0
    uint8_t unk_B0[0xB0 - (0xA0 + sizeof(workspots))];
    audio::ConversationSavingStrategy savingStrategy; // B0
#else
    DynArray<Ref<scn::InterestingConversationsResource>> conversationGroups; // 70
    DynArray<Handle<world::ConversationGroupData>> conversationResources; // 80
    DynArray<Handle<world::ConversationData>> conversations; // 90
    DynArray<NodeRef> workspots; // A0
    audio::ConversationSavingStrategy savingStrategy; // B0
    uint8_t unkB4[0xB8 - 0xB4]; // B4
#endif
};
RED4EXT_ASSERT_SIZE(InterestingConversationsAreaNode, 0xB8);
} // namespace world
using worldInterestingConversationsAreaNode = world::InterestingConversationsAreaNode;
} // namespace RED4ext

// clang-format on
