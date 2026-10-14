#pragma once

#include <cstddef>
#include <cstdint>

#include <Windows.h>

#if !defined(_WIN32) && !defined(_WIN64)
#include <RED4ext/Detail/WinCompat.hpp>
#endif

#ifdef RED4EXT_STATIC_LIB
#undef RED4EXT_HEADER_ONLY
#define RED4EXT_INLINE
#else
#define RED4EXT_HEADER_ONLY
#define RED4EXT_INLINE inline
#endif

#ifndef RED4EXT_ASSERT_ESCAPE
#define RED4EXT_ASSERT_ESCAPE(...) __VA_ARGS__
#endif

#if defined(__APPLE__)
namespace RED4ext::Detail
{
// R21. The offset where the data of a class derived from T starts under the Itanium ABI: the "data size" of T. clang puts the first
// member of a derived class into the tail padding of a non-POD base, so it can be lower than sizeof(T) (the game is built that way;
// MSVC, which the generated headers were written for, never does it). The Apple branches of the generated headers use it to place
// the first member exactly where the game has it.
template<typename T>
struct DataSizeProbe : T
{
    char probe;
};

template<typename T>
inline constexpr unsigned long DataSize = __builtin_offsetof(DataSizeProbe<T>, probe);
} // namespace RED4ext::Detail
#endif

#ifndef RED4EXT_ASSERT_SIZE
#if defined(_WIN32) || defined(_WIN64)
#define RED4EXT_ASSERT_SIZE(cls, size)                                                                                 \
    static_assert(sizeof(cls) == size, #cls " size does not match the expected size (" #size ") ")
#else
// On macOS, structure sizes may differ from Windows due to ABI differences.
// Disable size assertions for now; these will need verification against macOS binary.
#define RED4EXT_ASSERT_SIZE(cls, size) /* disabled on macOS */
#endif
#endif

#ifndef RED4EXT_ASSERT_OFFSET
// TODO: find a better way to handle this (clang does not allow offsetof in static_assert)
#ifdef __clang__
#define RED4EXT_ASSERT_OFFSET(cls, mbr, offset)
#else
#define RED4EXT_ASSERT_OFFSET(cls, mbr, offset)                                                                        \
    static_assert(offsetof(cls, mbr) == offset, #cls "::" #mbr " is not on the expected offset (" #offset ")")
#endif
#endif

/**
 * @brief This macro is used to avoid compiler warnings about unreferenced / used parameter.
 */
#ifndef RED4EXT_UNUSED_PARAMETER
#define RED4EXT_UNUSED_PARAMETER(param) (param)
#endif

#ifndef RED4EXT_DECLARE_TYPE
#define RED4EXT_DECLARE_TYPE(type, name)                                                                               \
    const type* const_##name;                                                                                          \
    type* name;
#endif

#ifndef RED4EXT_C_EXPORT
#if defined(_WIN32) || defined(_WIN64)
#define RED4EXT_C_EXPORT extern "C" __declspec(dllexport)
#else
#define RED4EXT_C_EXPORT extern "C" __attribute__((visibility("default")))
#endif
#endif

#ifndef RED4EXT_CALL
#if defined(_WIN32) || defined(_WIN64)
#define RED4EXT_CALL __fastcall
#else
#define RED4EXT_CALL
#endif
#endif

/*
 * @brief Compute the runtime address of an offset.
 *
 * @example
 *  const auto offset = 0x14022EAD0 - 0x140000000;
 *  const auto addr =  RED4EXT_OFFSET_TO_ADDR(offset);
 */
#ifndef RED4EXT_OFFSET_TO_ADDR
#define RED4EXT_OFFSET_TO_ADDR(offset)                                                                                 \
    reinterpret_cast<void*>(reinterpret_cast<std::uintptr_t>(GetModuleHandle(nullptr)) + offset)
#endif
