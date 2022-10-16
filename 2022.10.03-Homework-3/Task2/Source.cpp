#include<iostream>

int main(int argc, char* argv[])
{
	int p = 1;
	int cnt = 0;

	while (p != 0)
	{
		std::cin >> p;

		if (p % 2 == -1)
		{
			++cnt;
		}
	}

	std::cout << cnt;

	return EXIT_SUCCESS;
}