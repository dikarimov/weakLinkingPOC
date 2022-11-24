#include "lib.hpp"

void func() {
	std::cout << "Overrided func was called!" << std::endl;
}

int main() {
	call_func();
}