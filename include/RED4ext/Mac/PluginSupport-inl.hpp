#pragma once

// macOS only. The vault, the CClass virtual slots and the two id counters for RED4ext/Mac/PluginSupport.hpp; included from there,
// in the one translation unit that defines RED4EXT_MAC_PLUGIN_SUPPORT_IMPL. Do not include this file anywhere else.
//
// From the New Game Plus macOS port (ports/new_game_plus/macos/MacVault.cpp, itself the Mod Settings / LTBF / Codeware / TweakXL
// vault), with the plugin-specific parts made options: the id bands, the log prefix and the diagnostics switch.
//
// How it works: a RED4ext::Memory::Vault is built here with one registry node per pool (handle = FNV1a32 of the pool name, the key
// the SDK's allocators look up). A node's PoolStorage::allocatorStorage holds a small tag instead of a real storage pointer;
// tweakxl_vault_alloc and friends read the tag and call the game's own exported red::memory::PoolStorageProxy<Pool...>::Allocate /
// AllocateAligned / Reallocate / ReallocateAligned / Free (dlsym on the main image). A block comes back in x0/x1 on arm64.
// Pool RVAs are the game's PoolStorageProxy exports (2.5.0); a mismatch is logged and that pool's calls return null.

#if !defined(RED4EXT_MAC_PLUGIN_SUPPORT_IMPL)
#error "RED4ext/Mac/PluginSupport-inl.hpp is included by RED4ext/Mac/PluginSupport.hpp only"
#endif

#include <RED4ext/RED4ext.hpp>
#include <RED4ext/Hashing/FNV1a.hpp>
#include <RED4ext/Memory/Allocators.hpp>
#include <RED4ext/Memory/Vault.hpp>
#include <RED4ext/RTTISystem.hpp>

#include <atomic>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <dlfcn.h>
#include <mach-o/dyld.h>
#include <mach-o/loader.h>
#include <thread>

#if !defined(RED4EXT_MAC_LOG_PREFIX)
#define RED4EXT_MAC_LOG_PREFIX "[RED4ext.SDK]"
#endif
#if !defined(RED4EXT_MAC_DIAG_ENV)
#define RED4EXT_MAC_DIAG_ENV "RED4EXT_MAC_DIAG"
#endif

namespace RED4ext::Mac::Impl
{
namespace
{
bool DiagEnabled()
{
    const char* value = std::getenv(RED4EXT_MAC_DIAG_ENV);
    return value && value[0] && value[0] != '0';
}
} // namespace
} // namespace RED4ext::Mac::Impl

#define RED4EXT_MAC_DIAG_PRINT(...)                                                                                            \
    do                                                                                                                         \
    {                                                                                                                          \
        if (::RED4ext::Mac::Impl::DiagEnabled())                                                                              \
        {                                                                                                                      \
            std::fprintf(stderr, __VA_ARGS__);                                                                                 \
        }                                                                                                                      \
    } while (0)

// Each Mac plugin has its own copy and its own band, so no two plugins hand out the same id (bands: PluginSupport.hpp).
extern "C" __attribute__((visibility("hidden"))) uint32_t tweakxl_rtti_async_id = RED4EXT_MAC_RTTI_ASYNC_ID_BASE;

extern "C" __attribute__((visibility("hidden"))) volatile int64_t tweakxl_serializable_counter =
    static_cast<int64_t>(RED4EXT_MAC_SERIALIZABLE_ID_BASE);

namespace RED4ext::Mac::Impl
{
namespace
{
// Exported PoolStorageProxy functions. Static. Block comes back in x0/x1.
// dlsym wants one leading underscore. dyld_info prints two.
constexpr uint64_t kTagRtti = 0x10;
constexpr uint64_t kTagFunction = 0x20;
constexpr uint64_t kTagProperty = 0x30;
// Scripted classes live in PoolScript. A C++ Handle to a scripted instance (a ScriptableTweak or a
// ScriptableService subclass written in redscript) frees it through Allocator<PoolScript>, which looks the pool up
// in this vault. Without the entry the lookup returns null and the free faults at +0x10.
constexpr uint64_t kTagScript = 0x40;
// Engine containers allocate from the game's own pools: Memory::EngineAllocator from PoolEngine,
// reference counts (MakeShared, Handle) from PoolRefCount, DefaultAllocator users (HashMap, DynArray) from PoolDefault. A pool missing
// from the vault is a null lookup and a fault at +0x10.
constexpr uint64_t kTagEngine = 0x50;
constexpr uint64_t kTagRefCount = 0x60;
constexpr uint64_t kTagDefault = 0x70;

struct GameBlock
{
    void* memory;
    uint64_t size;
};

struct PoolOps
{
    const char* name;
    uint64_t tag;
    uintptr_t expect[5];
    GameBlock (*alloc)(uint64_t);
    GameBlock (*allocAligned)(uint64_t, uint32_t);
    GameBlock (*realloc)(GameBlock&, uint64_t);
    GameBlock (*reallocAligned)(GameBlock&, uint64_t, uint32_t);
    void (*freeFn)(GameBlock&);
};

PoolOps g_pools[] = {
    {"8PoolRTTI", kTagRtti, {0x10A1FA4, 0x10A20C0, 0x10A21EC, 0x10A2324, 0x10A2408}, nullptr, nullptr, nullptr, nullptr, nullptr},
    {"16PoolRTTIFunction", kTagFunction, {0x10A268C, 0x10a27a8, 0x10A28D4, 0x10A2A0C, 0x10A2AF0}, nullptr, nullptr, nullptr, nullptr, nullptr},
    {"16PoolRTTIProperty", kTagProperty, {0x10A2D74, 0x10A2E90, 0x10A2FBC, 0x10A30F4, 0x10A31D8}, nullptr, nullptr, nullptr, nullptr, nullptr},
    // Exports checked with nm: Allocate 0x344DCAC, AllocateAligned 0x344DDD0, Reallocate 0x344DF10,
    // ReallocateAligned 0x344E05C, Free 0x344E144.
    {"10PoolScript", kTagScript, {0x4E33A00, 0x4E33B1C, 0x4E33C48, 0x4E33D80, 0x4E33E64}, nullptr, nullptr, nullptr, nullptr, nullptr},
    // Exports checked with nm (2.5.0): PoolEngine 0x1F7D4.., PoolRefCount 0x1FEBC.., PoolDefault 0x222DC.. (2.3.1: 0x1F8F8.., 0x20040.., 0x2263C..)
    {"10PoolEngine", kTagEngine, {0x1F7D4, 0x1F8F0, 0x1FA1C, 0x1FB54, 0x1FC38}, nullptr, nullptr, nullptr, nullptr, nullptr},
    {"12PoolRefCount", kTagRefCount, {0x1FEBC, 0x1FFD8, 0x20104, 0x2023C, 0x20320}, nullptr, nullptr, nullptr, nullptr, nullptr},
    {"11PoolDefault", kTagDefault, {0x222DC, 0x224A4, 0x22674, 0x22848, 0x2292C}, nullptr, nullptr, nullptr, nullptr, nullptr},
};

const char* kPoolSuffixes[5] = {
    "8AllocateEy",
    "15AllocateAlignedEyj",
    "10ReallocateERNS0_5BlockEy",
    "17ReallocateAlignedERNS0_5BlockEyj",
    "4FreeERNS0_5BlockE",
};

bool g_vaultSymbolsOk = false;

RED4ext::Memory::Vault g_vault;
RED4ext::Memory::PoolStorage g_rttiStorage;
RED4ext::Memory::PoolStorage g_functionStorage;
RED4ext::Memory::PoolStorage g_propertyStorage;
RED4ext::Memory::PoolStorage g_scriptStorage;
RED4ext::Memory::PoolStorage g_engineStorage;
RED4ext::Memory::PoolStorage g_refCountStorage;
RED4ext::Memory::PoolStorage g_defaultStorage;

// Every pool the game exports gets a vault node (macos/MacPools.inc). Its five functions are resolved with dlsym once, at the first use of the pool.
struct GeneratedPool
{
    const char* name;
    const char* type; // mangled template argument, closing E included
};

constexpr GeneratedPool kGeneratedPools[] = {
#include <RED4ext/Mac/MacPools.inc>
};
constexpr size_t kGeneratedCount = sizeof(kGeneratedPools) / sizeof(kGeneratedPools[0]);
constexpr uint64_t kGeneratedTagBase = 0x1000;
constexpr uint64_t kGeneratedTagStep = 0x10;
constexpr uint32_t kFirstGeneratedNode = 7;

RED4ext::Memory::PoolStorage g_generatedStorage[kGeneratedCount];
PoolOps g_generatedOps[kGeneratedCount];
std::atomic<uint8_t> g_generatedState[kGeneratedCount]; // 0 not resolved, 1 resolving, 2 ready
bool g_vaultReady = false;

uintptr_t GameBase()
{
    const uint32_t count = _dyld_image_count();
    for (uint32_t i = 0; i < count; ++i)
    {
        const auto* header = reinterpret_cast<const mach_header_64*>(_dyld_get_image_header(i));
        if (header && header->filetype == MH_EXECUTE)
        {
            return reinterpret_cast<uintptr_t>(header);
        }
    }
    return reinterpret_cast<uintptr_t>(_dyld_get_image_header(0));
}

void FillPool(uint32_t aIndex, const char* aName, RED4ext::Memory::PoolStorage& aStorage, uint64_t aTag)
{
    auto& node = g_vault.poolRegistry.nodes[aIndex];
    std::memset(&node, 0, sizeof(node));
    node.handle = RED4ext::FNV1a32(aName);
    node.storage = &aStorage;
    aStorage.allocatorStorage = aTag;
    std::strncpy(node.name, aName, sizeof(node.name) - 1);
}

bool AddressInImage(uint32_t aIndex, uintptr_t aAddr)
{
    const auto* header = reinterpret_cast<const mach_header_64*>(_dyld_get_image_header(aIndex));
    if (!header)
    {
        return false;
    }
    const intptr_t slide = _dyld_get_image_vmaddr_slide(aIndex);
    auto* cmd = reinterpret_cast<const load_command*>(header + 1);
    for (uint32_t i = 0; i < header->ncmds; ++i)
    {
        if (cmd->cmd == LC_SEGMENT_64)
        {
            const auto* seg = reinterpret_cast<const segment_command_64*>(cmd);
            const auto start = static_cast<uintptr_t>(seg->vmaddr) + static_cast<uintptr_t>(slide);
            const auto end = start + seg->vmsize;
            if (aAddr >= start && aAddr < end)
            {
                return true;
            }
        }
        cmd = reinterpret_cast<const load_command*>(reinterpret_cast<const uint8_t*>(cmd) + cmd->cmdsize);
    }
    return false;
}

int ImageIndex(const char* aNamePart, uint32_t aFileType)
{
    const uint32_t count = _dyld_image_count();
    for (uint32_t i = 0; i < count; ++i)
    {
        const auto* header = reinterpret_cast<const mach_header_64*>(_dyld_get_image_header(i));
        const char* name = _dyld_get_image_name(i);
        if (!header)
        {
            continue;
        }
        if (aFileType != 0 && header->filetype != aFileType)
        {
            continue;
        }
        if (aNamePart && (!name || !std::strstr(name, aNamePart)))
        {
            continue;
        }
        return static_cast<int>(i);
    }
    return -1;
}

void InitVault()
{
    if (g_vaultReady)
    {
        return;
    }
    std::memset(&g_vault, 0, sizeof(g_vault));
    std::memset(&g_rttiStorage, 0, sizeof(g_rttiStorage));
    std::memset(&g_functionStorage, 0, sizeof(g_functionStorage));
    std::memset(&g_propertyStorage, 0, sizeof(g_propertyStorage));
    std::memset(&g_scriptStorage, 0, sizeof(g_scriptStorage));
    std::memset(&g_engineStorage, 0, sizeof(g_engineStorage));
    std::memset(&g_refCountStorage, 0, sizeof(g_refCountStorage));
    std::memset(&g_defaultStorage, 0, sizeof(g_defaultStorage));
    FillPool(0, "PoolRTTI", g_rttiStorage, kTagRtti);
    FillPool(1, "PoolRTTIFunction", g_functionStorage, kTagFunction);
    FillPool(2, "PoolRTTIProperty", g_propertyStorage, kTagProperty);
    FillPool(3, "PoolScript", g_scriptStorage, kTagScript);
    FillPool(4, "PoolEngine", g_engineStorage, kTagEngine);
    FillPool(5, "PoolRefCount", g_refCountStorage, kTagRefCount);
    FillPool(6, "PoolDefault", g_defaultStorage, kTagDefault);

    // Generated pools: registry nodes only; the functions are resolved at the first allocation (ResolveGenerated).
    std::memset(g_generatedStorage, 0, sizeof(g_generatedStorage));
    {
        uint32_t node = kFirstGeneratedNode;
        for (size_t i = 0; i < kGeneratedCount && node < RED4ext::Memory::PoolRegistry::MaxPoolCount; ++i)
        {
            const char* name = kGeneratedPools[i].name;
            bool known = false;
            for (size_t k = 0; k < kFirstGeneratedNode; ++k)
            {
                // The first seven pools were registered above under these names.
                static const char* const kKnown[kFirstGeneratedNode] = {"PoolRTTI",  "PoolRTTIFunction", "PoolRTTIProperty", "PoolScript",
                                                                        "PoolEngine", "PoolRefCount",       "PoolDefault"};
                known = known || std::strcmp(name, kKnown[k]) == 0;
            }
            if (known)
            {
                continue;
            }
            FillPool(node++, name, g_generatedStorage[i], kGeneratedTagBase + i * kGeneratedTagStep);
        }
    }

    const uintptr_t base = GameBase();
    g_vaultSymbolsOk = true;
    for (auto& pool : g_pools)
    {
        void* slots[5] = {};
        for (int i = 0; i < 5; ++i)
        {
            char symbol[160];
            std::snprintf(symbol, sizeof(symbol), "_ZN3red6memory16PoolStorageProxyINS_%sEE%s", pool.name, kPoolSuffixes[i]);
            void* found = dlsym(RTLD_MAIN_ONLY, symbol);
            const auto addr = reinterpret_cast<uintptr_t>(found);
            const auto rva = found ? addr - base : 0;
            RED4EXT_MAC_DIAG_PRINT( "[vault] %s %s rva=%llx expected=%llx\n", pool.name, kPoolSuffixes[i],
                         static_cast<unsigned long long>(rva), static_cast<unsigned long long>(pool.expect[i]));
            if (!found || rva != pool.expect[i])
            {
                std::fprintf(stderr, RED4EXT_MAC_LOG_PREFIX " [vault] MISMATCH %s %s\n", pool.name, kPoolSuffixes[i]);
                g_vaultSymbolsOk = false;
                slots[i] = nullptr;
            }
            else
            {
                slots[i] = found;
            }
        }
        pool.alloc = reinterpret_cast<GameBlock (*)(uint64_t)>(slots[0]);
        pool.allocAligned = reinterpret_cast<GameBlock (*)(uint64_t, uint32_t)>(slots[1]);
        pool.realloc = reinterpret_cast<GameBlock (*)(GameBlock&, uint64_t)>(slots[2]);
        pool.reallocAligned = reinterpret_cast<GameBlock (*)(GameBlock&, uint64_t, uint32_t)>(slots[3]);
        pool.freeFn = reinterpret_cast<void (*)(GameBlock&)>(slots[4]);
    }
    RED4EXT_MAC_DIAG_PRINT( "[vault] ok=%d\n", g_vaultSymbolsOk ? 1 : 0);
    g_vaultReady = true;
}

PoolOps* ResolveGenerated(size_t aIndex)
{
    auto& state = g_generatedState[aIndex];
    uint8_t expected = 0;
    if (state.compare_exchange_strong(expected, 1))
    {
        auto& pool = g_generatedOps[aIndex];
        void* slots[5] = {};
        bool ok = true;
        for (int i = 0; i < 5; ++i)
        {
            char symbol[200];
            std::snprintf(symbol, sizeof(symbol), "_ZN3red6memory16PoolStorageProxyI%sE%s", kGeneratedPools[aIndex].type, kPoolSuffixes[i]);
            slots[i] = dlsym(RTLD_MAIN_ONLY, symbol);
            ok = ok && slots[i];
        }
        pool.name = kGeneratedPools[aIndex].name;
        pool.tag = kGeneratedTagBase + aIndex * kGeneratedTagStep;
        if (ok)
        {
            pool.alloc = reinterpret_cast<GameBlock (*)(uint64_t)>(slots[0]);
            pool.allocAligned = reinterpret_cast<GameBlock (*)(uint64_t, uint32_t)>(slots[1]);
            pool.realloc = reinterpret_cast<GameBlock (*)(GameBlock&, uint64_t)>(slots[2]);
            pool.reallocAligned = reinterpret_cast<GameBlock (*)(GameBlock&, uint64_t, uint32_t)>(slots[3]);
            pool.freeFn = reinterpret_cast<void (*)(GameBlock&)>(slots[4]);
        }
        else
        {
            std::fprintf(stderr, RED4EXT_MAC_LOG_PREFIX " [vault] pool %s: symbols not found, its allocations return null\n", pool.name);
        }
        RED4EXT_MAC_DIAG_PRINT("[vault] generated pool %s resolved=%d\n", pool.name, ok ? 1 : 0);
        state.store(2);
    }
    else
    {
        while (state.load() != 2)
        {
            std::this_thread::yield();
        }
    }
    return &g_generatedOps[aIndex];
}

PoolOps* PoolFor(uintptr_t aTag)
{
    if (aTag >= kGeneratedTagBase)
    {
        const auto index = (aTag - kGeneratedTagBase) / kGeneratedTagStep;
        if (index < kGeneratedCount && (aTag - kGeneratedTagBase) % kGeneratedTagStep == 0)
        {
            return ResolveGenerated(index);
        }
    }

    for (auto& pool : g_pools)
    {
        if (pool.tag == aTag)
        {
            return &pool;
        }
    }
    std::fprintf(stderr, RED4EXT_MAC_LOG_PREFIX " [vault] unknown tag 0x%llx\n", static_cast<unsigned long long>(aTag));
    return nullptr;
}
} // namespace
} // namespace RED4ext::Mac::Impl


// True when the game's PoolStorageProxy functions were found where this build expects them (checked at the first vault use).
bool RED4ext::Mac::VaultReady()
{
    using namespace ::RED4ext::Mac::Impl;
    InitVault();
    return g_vaultSymbolsOk;
}

extern "C" __attribute__((visibility("hidden"))) void* tweakxl_memory_vault()
{
    using namespace ::RED4ext::Mac::Impl;
    InitVault();
    return &g_vault;
}

extern "C" __attribute__((visibility("hidden"))) void tweakxl_vault_alloc(void* aStorage, void* aResult, uint64_t aSize)
{
    using namespace ::RED4ext::Mac::Impl;
    InitVault();
    auto* result = static_cast<RED4ext::Memory::AllocationResult*>(aResult);
    result->memory = nullptr;
    result->size = 0;
    auto* pool = PoolFor(reinterpret_cast<uintptr_t>(aStorage));
    if (!pool || !pool->alloc)
    {
        return;
    }
    const GameBlock block = pool->alloc(aSize);
    result->memory = block.memory;
    result->size = block.memory ? block.size : 0;
}

extern "C" __attribute__((visibility("hidden"))) void tweakxl_vault_alloc_aligned(void* aStorage, void* aResult, uint64_t aSize, uint32_t aAlign)
{
    using namespace ::RED4ext::Mac::Impl;
    InitVault();
    auto* result = static_cast<RED4ext::Memory::AllocationResult*>(aResult);
    result->memory = nullptr;
    result->size = 0;
    auto* pool = PoolFor(reinterpret_cast<uintptr_t>(aStorage));
    if (!pool || !pool->allocAligned)
    {
        return;
    }
    const GameBlock block = pool->allocAligned(aSize, aAlign);
    result->memory = block.memory;
    result->size = block.memory ? block.size : 0;
}

extern "C" __attribute__((visibility("hidden"))) void tweakxl_vault_realloc(void* aStorage, void* aResult, void* aInput, uint64_t aSize)
{
    using namespace ::RED4ext::Mac::Impl;
    InitVault();
    auto* result = static_cast<RED4ext::Memory::AllocationResult*>(aResult);
    result->memory = nullptr;
    result->size = 0;
    auto* pool = PoolFor(reinterpret_cast<uintptr_t>(aStorage));
    if (!pool || !pool->realloc || !aInput)
    {
        return;
    }
    const GameBlock block = pool->realloc(*static_cast<GameBlock*>(aInput), aSize);
    result->memory = block.memory;
    result->size = block.memory ? block.size : 0;
}

extern "C" __attribute__((visibility("hidden"))) void tweakxl_vault_realloc_aligned(void* aStorage, void* aResult, void* aInput, uint64_t aSize, uint32_t aAlign)
{
    using namespace ::RED4ext::Mac::Impl;
    InitVault();
    auto* result = static_cast<RED4ext::Memory::AllocationResult*>(aResult);
    result->memory = nullptr;
    result->size = 0;
    auto* pool = PoolFor(reinterpret_cast<uintptr_t>(aStorage));
    if (!pool || !pool->reallocAligned || !aInput)
    {
        return;
    }
    const GameBlock block = pool->reallocAligned(*static_cast<GameBlock*>(aInput), aSize, aAlign);
    result->memory = block.memory;
    result->size = block.memory ? block.size : 0;
}

extern "C" __attribute__((visibility("hidden"))) void tweakxl_vault_free(void* aStorage, void* aInput)
{
    using namespace ::RED4ext::Mac::Impl;
    InitVault();
    auto* pool = PoolFor(reinterpret_cast<uintptr_t>(aStorage));
    if (!pool || !pool->freeFn || !aInput)
    {
        return;
    }
    pool->freeFn(*static_cast<GameBlock*>(aInput));
}

// The SDK calls tweakxl_class_vslot for an IScriptable virtual. The slot is read from the game class vtable.

extern "C" __attribute__((visibility("hidden"))) uintptr_t tweakxl_class_vslot(uint32_t aByteOffset)
{
    using namespace ::RED4ext::Mac::Impl;
    static bool ready = false;
    static uintptr_t slots[11] = {};
    static const uint32_t kOffsets[11] = {0x68, 0x70, 0x88, 0x90, 0x98, 0xA0, 0xA8, 0xB8, 0xC8, 0xD0, 0xD8};
    if (!ready)
    {
        auto* rtti = RED4ext::CRTTISystem::Get();
        auto* cls = rtti ? rtti->GetClass(RED4ext::CName("IScriptable")) : nullptr;
        if (!cls)
        {
            std::fprintf(stderr, RED4EXT_MAC_LOG_PREFIX " [vslot] IScriptable missing\n");
            return 0;
        }
        auto* vt = *reinterpret_cast<uintptr_t**>(cls);
        const uintptr_t base = GameBase();
        const int game = ImageIndex(nullptr, MH_EXECUTE);
        RED4EXT_MAC_DIAG_PRINT("[vslot] vtable=%p\n", static_cast<void*>(vt));
        for (int i = 0; i < 11; ++i)
        {
            const uintptr_t fn = vt[kOffsets[i] / 8];
            // The slot must still be the game's own function: a plugin that overrode IScriptable's vtable (TweakXL, Codeware)
            // would make this call land in plugin code. Anything outside the game image is rejected, whoever it belongs to.
            const bool inGame = game >= 0 && AddressInImage(static_cast<uint32_t>(game), fn);
            RED4EXT_MAC_DIAG_PRINT("[vslot] off=%x rva=%llx\n", kOffsets[i], static_cast<unsigned long long>(fn - base));
            if (!inGame)
            {
                std::fprintf(stderr, RED4EXT_MAC_LOG_PREFIX " [vslot] reject off=%x inGame=%d\n", kOffsets[i], inGame ? 1 : 0);
                slots[i] = 0;
            }
            else
            {
                slots[i] = fn;
            }
        }
        ready = true;
    }
    for (int i = 0; i < 11; ++i)
    {
        if (kOffsets[i] == aByteOffset)
        {
            return slots[i];
        }
    }
    std::fprintf(stderr, RED4EXT_MAC_LOG_PREFIX " [vslot] unknown offset %x\n", aByteOffset);
    return 0;
}

// Self-test, run once before any type is registered: for every pool in g_pools, allocate 64 bytes through the game's
// PoolStorageProxy and free them again, one log line each. Also checks that the vault lookup (FNV1a32 of the pool name) finds the
// storage FillPool wrote, which is the path Allocator<Pool...> takes. Returns false if any pool failed.
bool RED4ext::Mac::VaultSelfTest()
{
    using namespace ::RED4ext::Mac::Impl;
    InitVault();
    bool allOk = g_vaultSymbolsOk;
    for (auto& pool : g_pools)
    {
        // pool.name is the mangled length + name ("11PoolDefault"); the registry key is the bare name.
        const char* bare = pool.name;
        while (*bare >= '0' && *bare <= '9')
        {
            ++bare;
        }
        const auto hash = RED4ext::FNV1a32(bare);
        bool inVault = false;
        for (const auto& node : g_vault.poolRegistry.nodes)
        {
            if (node.handle == hash && node.storage && node.storage->allocatorStorage == pool.tag)
            {
                inVault = true;
                break;
            }
        }
        bool ok = inVault && pool.alloc && pool.freeFn;
        void* memory = nullptr;
        if (ok)
        {
            GameBlock block = pool.alloc(64);
            memory = block.memory;
            ok = block.memory != nullptr; // the granted size is not checked: the SDK path ignores it too
            if (block.memory)
            {
                pool.freeFn(block);
            }
        }
        std::fprintf(stderr, RED4EXT_MAC_LOG_PREFIX " [vault] self-test %s: %s (inVault=%d alloc=%p)\n", bare, ok ? "ok" : "FAILED", inVault ? 1 : 0,
                     memory);
        allOk = allOk && ok;
    }
    return allOk;
}

#undef RED4EXT_MAC_DIAG_PRINT
