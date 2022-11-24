#include <iostream>

extern "C"
#ifndef _MSC_VER  
__attribute__((weak))
#endif
void func();

extern "C" void default_func();

#ifdef _MSC_VER
#pragma comment(linker, "/alternatename:func=default_func")
#endif

void call_func();