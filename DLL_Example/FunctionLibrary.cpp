#include "pch.h"
#include "FunctionLibrary.h"
#include <stdio.h>

DLLEXAMPLE_API long function1(int a)
{
	return a + 4790;
}

DLLEXAMPLE_API void function2(const char* a)
{
	printf(a);
	return;
}

DLLEXAMPLE_API void function3(int a, const char* b)
{
	printf("%s%s", b,"\n");
	printf("%d", a + 52);
	return;
}
