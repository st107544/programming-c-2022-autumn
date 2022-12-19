#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;

	std::cin >> n >> m;

	int** a = new int* [n];

	for (int i = 0; i < n; ++i)
	{
		a[i] = new int[m] {0};
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cin >> a[i][j];
		}
	}
	int** b = new int* [n];

	for (int i = 0; i < n; ++i)
	{
		b[i] = new int[m] {0};
	}

	for (int i = 1; i < (n + 1); ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			b[i - 1][j] = a[n - i][j];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cout << b[i][j] << " ";
		}

		std::cout << std::endl;
	}

	for (int i = 0; i < n; ++i)
	{
		delete[] a[i];
	}
	delete[] a;

	for (int i = 0; i < n; ++i)
	{
		delete[] b[i];
	}
	delete[] b;

	return EXIT_SUCCESS;
}