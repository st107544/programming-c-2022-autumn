#include <iostream>

int main(int argc, char* argv[])
{
	int m = 0;
	int n = 0;
	int a[100000]{ 0 };
	int x = 0;

	std::cin >> n;
	std::cin >> m;

	for (int i = 0; i < n; i++)
	{
		std::cin >> x;

		if (a[x] == 0)
		{
			a[x] = 1;
		}
	}

	for (int i = 0; i < m; i++)
	{
		std::cin >> x;

		if (a[x] == 1)
		{
			a[x] = 2;
		}
	}

	for (int i = 0; i < 100000; i++)
	{
		if (a[i] == 2)
		{
			std::cout << i << " ";
		}
	}

	return EXIT_SUCCESS;
}