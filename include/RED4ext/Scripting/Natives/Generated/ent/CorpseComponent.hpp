#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/ISkinableComponent.hpp>

namespace RED4ext
{
namespace physics { struct FilterData; }

namespace ent
{
struct __declspec(align(0x10)) CorpseComponent : ent::ISkinableComponent
{
    static constexpr const char* NAME = "entCorpseComponent";
    static constexpr const char* ALIAS = "CorpseComponent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_160[0x160 - ::RED4ext::Detail::DataSize<ent::ISkinableComponent>];
    Handle<physics::FilterData> filterData; // 160
    uint8_t unk_170[0x170 - (0x160 + sizeof(filterData))];
    CName material; // 170
#else
    uint8_t unk130[0x160 - 0x130]; // 130
    Handle<physics::FilterData> filterData; // 160
    CName material; // 170
    uint8_t unk178[0x180 - 0x178]; // 178
#endif
};
RED4EXT_ASSERT_SIZE(CorpseComponent, 0x180);
} // namespace ent
using entCorpseComponent = ent::CorpseComponent;
using CorpseComponent = ent::CorpseComponent;
} // namespace RED4ext

// clang-format on
