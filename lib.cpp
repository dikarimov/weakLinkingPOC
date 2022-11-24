#include "lib.hpp"

#ifndef _MSC_VER
void func(){
    default_func();
}
#endif

extern "C" void default_func() {
    std::cout << "Default func was called!" << std::endl;
}



void call_func(){
    std::cout << "func is called from another function: " << std::endl;
    func();
}