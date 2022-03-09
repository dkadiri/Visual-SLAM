#include "libHelloSLAM.h"
#include "libHelloSLAM2.h"
#include <iostream>

// Call printHello() in libHelloSLAM.h
int main(int argc, char **argv) {
	printHello();
	int c;
	c = add(1, 2);
	std::cout << c << std::endl;
	return 0;
}