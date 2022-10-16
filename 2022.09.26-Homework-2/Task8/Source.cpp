#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;

	std::cin >> a >> b >> c;

	if ((a + b) > c && (a + c) > b && (b + c) > a)
	{
		if (a * a == b * b + c * c || c * c == b * b + a * a || b * b == a * a + c * c)
		{
			std::cout << "right";
		}
		else if (a * a < b * b + c * c || c * c < b * b + a * a || b * b < a * a + c * c)
		{
			std::cout << "acute";
		}
		else if (a * a > b * b + c * c || c * c > b * b + a * a || b * b > a * a + c * c)
		{
			std::cout << "obtuse";
		}
	}
	else
	{
		std::cout << "impossible";
	}
	return EXIT_SUCCESS;
}