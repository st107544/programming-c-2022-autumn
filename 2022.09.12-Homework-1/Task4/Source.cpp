#include<iostream>


int main(int argc, char* argv[])
{
	int v = 0;
	int t = 0;
	

	std::cin >> v;
	std::cin >> t;
	int s = 0;
	s = 108;

	std::cout << (s + (v * t) % s) % s << std::endl;

	return EXIT_SUCCESS;
}