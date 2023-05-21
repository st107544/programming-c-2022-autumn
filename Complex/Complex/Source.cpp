#include "complex.h"
#include < iostream>

int main(int argc, char* argv[])
{
	Complex z1(3, 1);
	Complex z2(5, -2);
	std::cout << z1 * z2 << std::endl;
	std::cout << z1 / z2 << std::endl;
	std::cout << z1 * 3 + 4*z2 << std::endl;
	std::cout << z1.abs() << std::endl;
	std::cout << z2.arg() << std::endl;
	std::cout << z1.reverse() << std::endl;
	
	return EXIT_SUCCESS;
}