#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Relocation.hpp>
#endif

#include <mutex>
#include <sstream>
#include <iostream>

#if !defined(_WIN32) && !defined(_WIN64)
#include <mach-o/loader.h>

namespace RED4ext
{
struct IScriptable;
}

extern "C" uint32_t tweakxl_rtti_async_id;
extern "C" volatile int64_t tweakxl_serializable_counter;
extern "C" void* tweakxl_memory_vault();
extern "C" void tweakxl_vault_alloc(void* aStorage, void* aResult, uint64_t aSize);
extern "C" void tweakxl_vault_alloc_aligned(void* aStorage, void* aResult, uint64_t aSize, uint32_t aAlign);
extern "C" void tweakxl_vault_realloc(void* aStorage, void* aResult, void* aInput, uint64_t aSize);
extern "C" void tweakxl_vault_realloc_aligned(void* aStorage, void* aResult, void* aInput, uint64_t aSize, uint32_t aAlign);
extern "C" void tweakxl_vault_free(void* aStorage, void* aInput);
extern "C" uintptr_t tweakxl_class_vslot(uint32_t aByteOffset);
#endif

#if defined(_WIN32) || defined(_WIN64)
#include <Windows.h>
#else
#include <dlfcn.h>
#include <mach-o/dyld.h>
#include <codecvt>
#include <locale>
#endif

#include <RED4ext/Api/v1/PluginInfo.hpp>
#include <RED4ext/Api/v1/SemVer.hpp>
#include <RED4ext/Common.hpp>
#include <RED4ext/Detail/Memory.hpp>

// Evidence: the unguarded Windows.h that stood here (upstream 2216befc2) fails on macOS. On Windows it is redundant: Common.hpp, included
// above, and the _WIN32 block at the top of this file both include Windows.h before any use in this file.

#include <bit>
#include <cstdarg>
#include <cstdint>
#include <filesystem>
#include <ios>
#include <sstream>
#include <string>
#include <string_view>

RED4EXT_INLINE uintptr_t RED4ext::RelocBase::GetImageBase()
{
#if defined(_WIN32) || defined(_WIN64)
    static const auto base = std::bit_cast<uintptr_t>(GetModuleHandle(nullptr));
#else
    // Image 0 is an inserted library under DYLD_INSERT_LIBRARIES. Hook RVAs are
    // from the game, so the base has to be the MH_EXECUTE header.
    static const auto base = []() -> uintptr_t {
        const uint32_t count = _dyld_image_count();
        for (uint32_t i = 0; i < count; ++i)
        {
            const auto* header = reinterpret_cast<const mach_header_64*>(_dyld_get_image_header(i));
            if (header && header->filetype == MH_EXECUTE)
            {
                return reinterpret_cast<uintptr_t>(header);
            }
        }
        return std::bit_cast<uintptr_t>(_dyld_get_image_header(0));
    }();
#endif
    return base;
}

RED4EXT_INLINE
uintptr_t RED4ext::UniversalRelocBase::Resolve(uint32_t aHash)
{
#if !defined(_WIN32) && !defined(_WIN64)
    // macOS: Use built-in address table to avoid dependency on RED4ext's limited addresses
    // This is necessary because RED4ext only has 9 addresses configured, but the SDK
    // and mods like TweakXL need many more.
    static const uintptr_t imageBase = []() {
        const uint32_t count = _dyld_image_count();
        for (uint32_t i = 0; i < count; ++i)
        {
            const auto* header = reinterpret_cast<const mach_header_64*>(_dyld_get_image_header(i));
            if (header && header->filetype == MH_EXECUTE)
            {
                return reinterpret_cast<uintptr_t>(header);
            }
        }
        return std::bit_cast<uintptr_t>(_dyld_get_image_header(0));
    }();

    // Local stand-ins that stay. These are not game RVAs. The async-id global
    // is unconfirmed. CString, DynArray, and CNamePool resolve to Mac RVAs below.
    // Hashes still missing, not invented: CClass_InitializeProperties 2257327441
    // (CClass_GetProperties 1652956141 has a row in the red4ext-rs block below).
    // Memory_Vault_Unk1 (0x19EC1367) stays unmapped.
    // ISerializable_Counter is the TweakXL-owned counter, not a game global.
    // IScriptable_DestructValueHolder returns when the holder at +0x38 is null.
    if (aHash == 0xDDBD19E8)
    {
        return reinterpret_cast<uintptr_t>(&tweakxl_rtti_async_id);
    }
    if (aHash == 2630817091)
    {
        return reinterpret_cast<uintptr_t>(&tweakxl_serializable_counter);
    }
    // R19: IScriptable_DestructValueHolder (55710513) is the game's own function now (Mac 0x22384BC, in the Mac table below).
    // Local Vault stand-in. This build has no Windows Memory::Vault global.
    // Pool allocation goes through tweakxl_vault_alloc and the Mac pool symbols.
    if (aHash == 0x1B530DEC)
    {
        return reinterpret_cast<uintptr_t>(tweakxl_memory_vault());
    }
    // CClass virtuals. Same slot as live IScriptable. Mac offset is Windows plus 8.
    if (aHash == 0xE4AA0CAD) return tweakxl_class_vslot(0x68);
    if (aHash == 0x65293F06) return tweakxl_class_vslot(0x70);
    if (aHash == 0x11D11B0C) return tweakxl_class_vslot(0x88);
    if (aHash == 0x4BDF1BB2) return tweakxl_class_vslot(0x90);
    if (aHash == 0xA26D374E) return tweakxl_class_vslot(0x98);
    if (aHash == 0x48C020CA) return tweakxl_class_vslot(0xA0);
    if (aHash == 0x15F21D6F) return tweakxl_class_vslot(0xA8);
    if (aHash == 0xA0911974) return tweakxl_class_vslot(0xB8);
    if (aHash == 0xD2081231) return tweakxl_class_vslot(0xC8);
    if (aHash == 0xD14E1230) return tweakxl_class_vslot(0xD0);
    if (aHash == 0x37750EBF) return tweakxl_class_vslot(0xD8);
    // SDK vault signatures. The thunks call the exported PoolStorageProxy functions.
    if (aHash == 0x902A14E0) return reinterpret_cast<uintptr_t>(&tweakxl_vault_alloc);
    if (aHash == 0x516917DD) return reinterpret_cast<uintptr_t>(&tweakxl_vault_alloc_aligned);
    if (aHash == 0x770A17AC) return reinterpret_cast<uintptr_t>(&tweakxl_vault_realloc);
    if (aHash == 0x56961AA9) return reinterpret_cast<uintptr_t>(&tweakxl_vault_realloc_aligned);
    if (aHash == 0x33421332) return reinterpret_cast<uintptr_t>(&tweakxl_vault_free);

    // Same rows as AddressResolverOverride.hpp. This mac Resolve does not call
    // that override; the rows live here so SDK hashes reach the game.
    // The table is never destroyed (a heap object behind a reference). A function-local static map is destroyed by exit() before RED4ext's
    // atexit handler unloads the plugins, and every SDK-relocated call made from Unload (a SharedPtr or Handle release, for example) then
    // looked a hash up in a map whose bucket array was already freed (r27 quit crash: ~SharedPtr -> Resolve(Handle_DecWeakRef), fault at 8 * (hash % 97)).
    static const std::unordered_map<uint32_t, uintptr_t>& macOSAddressTable = *new std::unordered_map<uint32_t, uintptr_t>{
        { 240386859, 0x31E18 },       // Main
        { 1247874916, 0x2188E8C },    // CRTTISystem_Get
        { 3062572522, 0x35F1BAC },    // TweakDB_Init
        { 3602585178, 0x2B75570 },    // TweakDB_Load
        { 3512345737, 0x2B7CC9C },    // TweakDB_TryLoad
        { 838931066, 0x26B8DB8 },     // TweakDB_CreateRecord
        { 914361828, 0x2B73C7C },     // TweakDB_Get
        { 3357477547, 0x2CDB8 },      // CString_ctor_str
        { 2065762423, 0x2940C },      // CString_ctor_span
        { 3904113489, 0x2AACC },      // CString_copy. R25: the copy ASSIGN (Windows twin 0x2503FC), was the copy constructor 0x2B110
        { 1409615660, 0x29228 },      // CString_dtor
        { 2057311186, 0x286E8 },      // DynArray_Realloc
        { 1759447004, 0x3452D7C },    // CNamePool_Get
        { 10488987, 0x3452DDC },      // CNamePool_AddCstr
        { 3649309656, 0x3452DA0 },    // CNamePool_AddPair
        // Handle_DecWeakRef (hash: 859509764). void(SharedPtrBase*). Identical copy at 0x914668.
        { 859509764, 0x21048C4 },
        // ResourceDepot (hash: 1704595399). Global ResourceDepot* (data, not code). Accessor 0x21C6820.
        { 1704595399, 0x7D6C538 },
        { 1518341917, 0x2197AAC },  // CClass_CreateInstance (rtti::ClassType::CreateObject)
        { 404169501,  0x2173120 },  // CBaseFunction_InternalExecute
        { 882511585,  0x6FFAEA0 },  // CStack_vtbl (data: vptr value, slot 0)
        { 3791200470, 0x2172BF4 },  // CBaseFunction_ExecuteScripted (Gate 5 path)
        { 3121353053, 0x2104788 },  // Handle_ctor (Gate 5 path)
        { 961751128,  0x908B798 },  // OpcodeHandlers (data: handler table; Gate 5 path)
        { 2920426135, 0x2173864 },  // CClassStaticFunction_ctor
        { 1613572595, 0x2173760 },  // CClassFunction_ctor (Mac pointer-to-member ABI)
        { 4201325776, 0x21739E8 },  // CGlobalFunction_ctor
        // ---- red4ext-rs rows (branch mac-rs). Rows the table above lacks and red4ext-rs (or the SDK code it links) reaches. ----
        // CGameEngine (hash 0x97F209D6). Data: the cell holding the CGameEngine*. Windows .data 0x342AC00 (win-addr.tsv); the twin pair
        // AudioSystem::Play loads it the same way: Windows 0x62AB8A `mov rax,[0x342ac00]; [rax+0xa8]; [rcx+0x100]`, Mac 0xA86124
        // `adrp/add 0x90dc3a0; ldr x8,[x8]; ldr x8,[x8,#0xa8]; ldr x0,[x8,#0x100]`.
        { 2549221846, 0x90DC3A0 },
        // The next four are the Codeware / ArchiveXL MacSdkRows.inc values, each checked there against the Windows body (R16a, R19).
        { 1482886888, 0x2197FE4 },  // TTypedClass_IsEqual. bool(CClass*, lhs, rhs, uint32). Equals Mac CClass vtable slot 0x50. Windows 0x33A208.
        { 3778157291, 0x21732DC },  // CBaseFunction_ExecuteNative. bool(CBaseFunction*, CStack*). Windows 0x20668A0.
        { 2399343890, 0x2198B40 },  // CClass_GetProperty. CProperty*(CClass*, CName). Windows 0x148388.
        { 1652956141, 0x2197928 },  // CClass_GetProperties. void(CClass*, DynArray<CProperty*>&). Windows 0x2519E4.
    };

    auto it = macOSAddressTable.find(aHash);
    if (it != macOSAddressTable.end() && it->second != 0)
    {
        return imageBase + it->second;
    }
    
    // Address not found or placeholder - return a non-zero sentinel value
    // This prevents null pointer crashes while making it clear something is wrong
    // The calling code should handle this gracefully
    static bool firstWarning = true;
    if (firstWarning) {
        std::cerr << "=== SDK ADDRESS RESOLUTION WARNING ===" << std::endl;
        std::cerr << "TweakXL needs addresses that haven't been reverse-engineered yet for macOS." << std::endl;
        std::cerr << "The mod will attempt to load but some features may not work." << std::endl;
        std::cerr << "=======================================" << std::endl;
        firstWarning = false;
    }
    std::cerr << "[SDK AddressResolver] Unknown hash 0x" << std::hex << aHash << std::dec
              << " (" << aHash << ")" << std::endl;
    
    // Return a valid but harmless address (pointing to a ret instruction or similar)
    // For now, return 0 - the caller must handle null gracefully
    return 0;
#else
    if constexpr (Detail::AddressResolverOverride<uint32_t>::value)
    {
        return Detail::AddressResolverOverride<uint32_t>::Resolve(aHash);
    }
    else
    {
        const auto resolveFunc = GetAddressResolverFunction();

        auto address = resolveFunc(aHash);
        if (address == 0)
        {
            std::wostringstream stream;
            stream << L"Failed to find the address for the hash (" << std::dec << aHash << ") provided by the plugin.\n"
                   << L"This issue is likely caused by the mod using an incorrect or outdated hash.";

            ShowErrorAndTerminateProcess(stream.str(), 0);
        }

        return address;
    }
#endif
}

RED4EXT_INLINE HMODULE RED4ext::UniversalRelocBase::GetRED4extModule()
{
#if defined(_WIN32) || defined(_WIN64)
    static constexpr auto moduleName = L"RED4ext.dll";
    const auto handle = GetModuleHandleW(moduleName);
#else
    static constexpr auto moduleName = "RED4ext.dylib";
    const auto handle = dlopen(moduleName, RTLD_LAZY | RTLD_NOLOAD);
#endif

    if (!handle)
    {
        static constexpr auto msg =
#if defined(_WIN32) || defined(_WIN64)
            L"The mod you are using could not locate the necessary module (i.e. RED4ext.dll) in the "
            L"loaded modules, which is required by the mod to resolve addresses correctly.\n"
#else
            L"The mod you are using could not locate the necessary module (i.e. RED4ext.dylib) in the "
            L"loaded modules, which is required by the mod to resolve addresses correctly.\n"
#endif
            L"This may occur if RED4ext is not properly loaded into the current process.\n"
            L"\n"
            L"Please ensure that RED4ext is correctly installed.\n"
            L"\n"
            L"If you are the mod's developer, verify that your mod was loaded by RED4ext. "
            L"Alternatively, you may need to provide your own address resolver.";

#if defined(_WIN32) || defined(_WIN64)
        ShowErrorAndTerminateProcess(msg, GetLastError());
#else
        ShowErrorAndTerminateProcess(msg, static_cast<uint32_t>(errno));
#endif
    }

    return handle;
}

RED4EXT_INLINE RED4ext::UniversalRelocBase::ResolveFunc_t RED4ext::UniversalRelocBase::
    InitializeAddressResolverFunction()
{
    static constexpr auto procName = "RED4ext_ResolveAddress";

    const auto handle = GetRED4extModule();

#if defined(_WIN32) || defined(_WIN64)
    const auto func = std::bit_cast<ResolveFunc_t>(GetProcAddress(handle, procName));
#else
    const auto func = std::bit_cast<ResolveFunc_t>(dlsym(handle, procName));
#endif

    if (func == nullptr)
    {
        static constexpr auto msg =
            L"The mod you are using is unable to find the required address resolver function from RED4ext.\n"
            L"This may occur if RED4ext is not properly loaded, OR if the mod is incompatible with the current "
            L"version of RED4ext.\n"
            L"\n"
            L"Please ensure that RED4ext is correctly installed AND that both RED4ext and the mod are "
            L"up-to-date.";

#if defined(_WIN32) || defined(_WIN64)
        ShowErrorAndTerminateProcess(msg, GetLastError());
#else
        ShowErrorAndTerminateProcess(msg, static_cast<uint32_t>(errno));
#endif
    }

    return func;
}

RED4EXT_INLINE RED4ext::UniversalRelocBase::ResolveFunc_t RED4ext::UniversalRelocBase::GetAddressResolverFunction()
{
    static const ResolveFunc_t func = InitializeAddressResolverFunction();
    return func;
}

RED4EXT_INLINE HMODULE RED4ext::UniversalRelocBase::GetCurrentModuleHandle()
{
#if defined(_WIN32) || defined(_WIN64)
    HMODULE result;

    if (!GetModuleHandleExW(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
                            std::bit_cast<LPCWSTR>(&UniversalRelocBase::Resolve), &result))
    {
        static constexpr auto msg =
            L"Unable to retrieve the handle for a plugin.\n"
            L"Normally, this issue should not happen.\n"
            L"\n"
            L"What you can do:\n"
            L"    1. Disable all mods.\n"
            L"    2. Enable them one by one.\n"
            L"    3. Start the game after each change to see if the issue happens again.\n"
            L"\n"
            L"For more detailed instructions on identifying the mod causing the issue, visit the following link:\n"
            L"    "
            L"https://wiki.redmodding.org/cyberpunk-2077-modding/for-mod-users/"
            L"user-guide-troubleshooting#finding-the-broken-mod-bisecting\n"
            L"\n"
            L"By following these instructions, you can identify the mod causing the issue and report it to the mod "
            L"author for further assistance.";

        MessageBoxW(nullptr, msg, L"RED4ext.SDK", MB_ICONERROR | MB_OK);
        TerminateProcess(GetCurrentProcess(), 1);
    }

    return result;
#else
    Dl_info info;
    if (dladdr(std::bit_cast<void*>(&UniversalRelocBase::Resolve), &info))
    {
        return dlopen(info.dli_fname, RTLD_LAZY | RTLD_NOLOAD);
    }
    return nullptr;
#endif
}

RED4EXT_INLINE std::filesystem::path RED4ext::UniversalRelocBase::GetCurrentModulePath()
{
#if defined(_WIN32) || defined(_WIN64)
    static constexpr auto pathLength = MAX_PATH;
    const auto handle = GetCurrentModuleHandle();

    std::wstring fileName;
    DWORD length = 0;

    do
    {
        fileName.resize(fileName.size() + pathLength, L'\0');
        length = GetModuleFileNameW(handle, fileName.data(), static_cast<uint32_t>(fileName.size()));
    } while (GetLastError() == ERROR_INSUFFICIENT_BUFFER);

    if (length > 0)
    {
        // Resize it to the real, std::filesystem::path" will use the string's length instead of recounting it.
        fileName.resize(length);
    }

    return fileName;
#else
    Dl_info info;
    if (dladdr(std::bit_cast<void*>(&UniversalRelocBase::Resolve), &info))
    {
        return std::filesystem::path(info.dli_fname);
    }
    return {};
#endif
}

RED4EXT_INLINE RED4ext::UniversalRelocBase::QueryFunc_t RED4ext::UniversalRelocBase::GetCurrentPluginQueryFunction()
{
    static constexpr auto procName = "Query";

    const auto handle = GetCurrentModuleHandle();

#if defined(_WIN32) || defined(_WIN64)
    const auto func = std::bit_cast<QueryFunc_t>(GetProcAddress(handle, procName));
#else
    const auto func = std::bit_cast<QueryFunc_t>(dlsym(handle, procName));
#endif

    if (func == nullptr)
    {
        static constexpr auto msg = L"Could not get the 'Query' function for the current mod.\n"
                                    L"Normally, this issue should not happen.\n"
                                    L"\n"
                                    L"If you are the mod's developer, verify that your mod was loaded by RED4ext and "
                                    L"that it exports the 'Query' function needed for the mod to interact with "
                                    L"RED4ext. Alternatively, you may need to provide your own address resolver.";

#if defined(_WIN32) || defined(_WIN64)
        ShowErrorAndTerminateProcess(msg, GetLastError(), false);
#else
        ShowErrorAndTerminateProcess(msg, static_cast<uint32_t>(errno), false);
#endif
    }

    return func;
}

RED4EXT_INLINE bool RED4ext::UniversalRelocBase::QueryCurrentPlugin(v1::PluginInfo& aPluginInfo)
{
    const auto queryFunc = GetCurrentPluginQueryFunction();
    if (!queryFunc)
    {
        return false;
    }

    try
    {
        queryFunc(&aPluginInfo);
    }
    catch (...)
    {
        return false;
    }

    return true;
}

RED4EXT_INLINE void RED4ext::UniversalRelocBase::ShowErrorAndTerminateProcess(std::wstring_view aMsg,
                                                                              std::uint32_t aLastError,
                                                                              bool aQueryPluginInfo)
{
#if !defined(_WIN32) && !defined(_WIN64)
    // macOS: Don't terminate - just log the error
    // This is a workaround until we have proper address resolution
    // Convert wide string to narrow for stderr
    {
        std::string macOSMsg;
        for (wchar_t c : aMsg) {
            if (c < 0x80) macOSMsg += static_cast<char>(c);
            else if (c == L'\n') macOSMsg += '\n';
            else macOSMsg += '?';
        }
        std::cerr << "[SDK] Address resolution warning (non-fatal on macOS): " << macOSMsg << std::endl;
    }
    return; // Don't crash - let the code continue with null function pointer
#endif
    
    const auto path = GetCurrentModulePath();

#if defined(_WIN32) || defined(_WIN64)
    std::wstring pluginName = path.stem().wstring();
#else
    // Convert narrow string to wide string on macOS
    auto stemStr = path.stem().string();
    std::wstring pluginName(stemStr.begin(), stemStr.end());
#endif
    std::wstring pluginVersion = L"Not available (Query was intentionally disabled)";

    if (aQueryPluginInfo)
    {
        v1::PluginInfo pluginInfo{};

        auto isQuerySuccessful = QueryCurrentPlugin(pluginInfo);
        if (isQuerySuccessful)
        {
            if (pluginInfo.name)
            {
                pluginName = pluginInfo.name;
            }

            pluginVersion = std::to_wstring(pluginInfo.version);
        }
        else
        {
            pluginVersion = L"Not available (Query failed)";
        }
    }

    auto title = pluginName + L": Address Resolver";

    std::wostringstream msg;
    msg << aMsg << L"\n"
        << L"-----------------------------\n"
        << L"The mod has encountered a critical error while trying to resolve an address hash and needs to terminate "
           L"the game's process to prevent unexpected behavior in the game.\n"
        << L"-----------------------------\n"
        << L"Here is some debug information that may help resolve or report the issue:\n"
        << L"    - Error Code (Platform): " << std::dec << aLastError << "\n"
        << L"    - Plugin: " << pluginName << "\n"
        << L"    - Version: " << pluginVersion << "\n"
        << L"    - Path: " << path.c_str();

#if defined(_WIN32) || defined(_WIN64)
    MessageBoxW(nullptr, msg.str().c_str(), title.c_str(), MB_ICONERROR | MB_OK);
    TerminateProcess(GetCurrentProcess(), 1);
#else
    // Convert wide string to narrow string for std::cerr on macOS
    auto msgStr = msg.str();
    auto titleStr = title;
    
    // Simple UTF-16 to UTF-8 conversion
    std::string narrowTitle, narrowMsg;
    for (wchar_t c : titleStr)
    {
        if (c < 0x80)
            narrowTitle += static_cast<char>(c);
        else
            narrowTitle += '?'; // Replace non-ASCII with ?
    }
    for (wchar_t c : msgStr)
    {
        if (c < 0x80)
            narrowMsg += static_cast<char>(c);
        else if (c == L'\n')
            narrowMsg += '\n';
        else
            narrowMsg += '?';
    }
    
    std::cerr << "[" << narrowTitle << "] " << narrowMsg << std::endl;
    exit(1);
#endif
}
