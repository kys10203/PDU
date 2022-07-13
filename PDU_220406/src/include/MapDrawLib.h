//#pragma once

#ifndef __MAPDRAWLIB_H__
#define __MAPDRAWLIB_H__

#include <sstream>
#include <iostream>
#include <iomanip>
#include <string>

#include "IMapDrawEngine.h"

#ifdef __FOR_WINDOW
template<typename ... Args>
inline void Log(const std::string& format, Args ... args)
{
    int size_s = std::snprintf(nullptr, 0, format.c_str(), args ...) + 1; // Extra space for '\0'
    if (size_s <= 0) { throw std::runtime_error("Error during formatting."); }
    auto size = static_cast<size_t>(size_s);
    auto buf = std::make_unique<char[]>(size);
    std::snprintf(buf.get(), size, format.c_str(), args ...);
    auto msg = std::string(buf.get(), buf.get() + size - 1); // We don't want the '\0' inside

    OutputDebugStringA(msg.c_str());
}

template<typename ... Args>
inline std::string format_string(const std::string& format, Args ... args)
{
    int size_s = std::snprintf(nullptr, 0, format.c_str(), args ...) + 1; // Extra space for '\0'
    if (size_s <= 0) { throw std::runtime_error("Error during formatting."); }
    auto size = static_cast<size_t>(size_s);
    auto buf = std::make_unique<char[]>(size);
    std::snprintf(buf.get(), size, format.c_str(), args ...);
    auto msg = std::string(buf.get(), buf.get() + size - 1); // We don't want the '\0' inside
    return msg;
}

#else
//template<typename T, typename... Args>
//std::unique_ptr<T> make_unique(Args&&... args) {
//    return std::unique_ptr<T>(new T(std::forward<Args>(args)...));
//}
//
//template<typename ... Args>
//inline void Log(const std::string& format, Args ... args)
//{
//    int size_s = std::snprintf(nullptr, 0, format.c_str(), args ...) + 1; // Extra space for '\0'
//    if (size_s <= 0) { throw std::runtime_error("Error during formatting."); }
//    auto size = static_cast<size_t>(size_s);
//    auto buf = std::make_unique<char[]>(size);
//    std::snprintf(buf.get(), size, format.c_str(), args ...);
//    auto msg = std::string(buf.get(), buf.get() + size - 1); // We don't want the '\0' inside
//    std::cout << msg;
//}
//
//template<typename ... Args>
//inline std::string format_string(const std::string& format, Args ... args)
//{
//    int size_s = std::snprintf(nullptr, 0, format.c_str(), args ...) + 1; // Extra space for '\0'
//    if (size_s <= 0) { throw std::runtime_error("Error during formatting."); }
//    auto size = static_cast<size_t>(size_s);
//    auto buf = std::make_unique<char[]>(size);
//    std::snprintf(buf.get(), size, format.c_str(), args ...);
//    auto msg = std::string(buf.get(), buf.get() + size - 1); // We don't want the '\0' inside
//    return msg;
//}
#endif

extern "C"
{
    IMapDrawEngine* GetMapDrawEngine();
}

#endif
