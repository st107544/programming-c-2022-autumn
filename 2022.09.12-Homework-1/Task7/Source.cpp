#include<iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	
	std::cin >> a;
	std::cin >> b;
	int d = 0;
	d = a;
	a = b;
	b = d;

	std::cout << a <<" " << b << std::endl;
	

	return EXIT_SUCCESS;
}