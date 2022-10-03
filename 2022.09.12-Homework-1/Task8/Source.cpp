#include<iostream>

int main(int argc, char* argv[])
{
	int ch1 = 0;
	int min1 = 0;
	int sek1 = 0;
	
	int ch2 = 0;
	int min2 = 0; 
	int sek2 = 0;
	
	std::cin >> ch1;
	std::cin >> min1;
	std::cin >> sek1;
	std::cin >> ch2;
	std::cin >> min2;
	std::cin >> sek2;
	
	int a = 0;
	a = ch1 * 3600 + min1 * 60 +sek1;

	int b = 0;
	b = ch2 * 3600 + min2 * 60 + sek2;

	std::cout << b - a << std::endl;

	return EXIT_SUCCESS;
}