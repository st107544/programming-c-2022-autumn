#include <iostream>

int plus(int n)
{
	if (n < 1)
	{
		return 0;
	}
	if (n == 1)
	{
		return 1;
	}
	return (plus(n - 3) + plus(n - 5));
}

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	if (plus(n) > 0)
	{
		std::cout << "YES";
	}

	else
	{
		std::cout << "NO";
	}

	return EXIT_SUCCESS;
}

