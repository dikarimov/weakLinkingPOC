#include "lib.hpp"

void func(){
    std::cout << "Default func was called!" << std::endl;
}

void call_func(){
    std::cout << "func is called from another function: " << std::endl;
    func();
}