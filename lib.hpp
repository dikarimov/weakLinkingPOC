#include <iostream>

// for gcc it is enought to mark function with weak attribute
// to allow user provide its own implementation
// 
// for msvc there is no such attribute, so we have to use /alternatename
// to point linker on a function which should be used in case there 
// is no user implementation. Also to make this works the we have to get
// rid from function mangling by 'extern "C"'  

#ifdef _MSC_VER
extern "C"
#else
__attribute__((weak))
#endif
void func();

#ifdef _MSC_VER
extern "C"
#endif
void default_func();

#ifdef _MSC_VER
#pragma comment(linker, "/alternatename:func=default_func")
#endif

void call_func();