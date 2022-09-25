#include<iostream>

int main(int argc, char* argv[])
{
	int x = 0;
	
	std::cin >> x;

	int s = 0;
    s = x * x;

	int s2 = 0;
	s2 = s * s;

	int cube = 0;
	cube = s2 / x;

	std::cout << s2 + s + cube + x +1 << std::endl;


	return EXIT_SUCCESS;
}