#include "lib.hpp"

// for msvc we should not provide 
#ifndef _MSC_VER
void func() {
	default_func();
}
#endif

#ifdef _MSC_VER
extern "C"
#endif
void default_func() {
	std::cout << "Default func was called!" << std::endl;
}

void call_func() {
	std::cout << "func is called from another function: " << std::endl;
	func();
}