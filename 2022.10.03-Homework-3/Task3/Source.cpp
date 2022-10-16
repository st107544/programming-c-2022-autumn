#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int p = 0;
	int c = 0;

	std::cin >> n;

	do
	{
		c = 1;
		do
		{
			std::cout << p + c << " ";
			++c;
		} while (c <= n);

		std::cout << std::endl;
		++p;
	} while (p < n);

	return EXIT_SUCCESS;
}