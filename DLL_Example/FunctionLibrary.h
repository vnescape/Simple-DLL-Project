#pragma once

#ifdef DLLEXAMPLE_EXPORTS
#define DLLEXAMPLE_API __declspec(dllexport)
#else
#define DLLEXAMPLE_API __declspec(dllimport)
#endif

extern "C" DLLEXAMPLE_API long function1(int a);
extern "C" DLLEXAMPLE_API void function2(const char* a);
extern "C" DLLEXAMPLE_API void function3(int a, const char* b);