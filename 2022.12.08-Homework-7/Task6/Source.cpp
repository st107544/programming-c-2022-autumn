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

	int** a1 = new int* [n];

	for (int i = 0; i < n; ++i)
	{
		a1[i] = new int[m] {0};
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cin >> a1[i][j];
		}
	}

	int** b = new int* [n];

	for (int i = 0; i < n; ++i)
	{
		b[i] = new int[m] {0};
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			b[i][j] = a[i][j] + a1[i][j];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		delete[] a[i];
	}

	delete[] a;

	for (int i = 0; i < n; ++i)
	{
		delete[] a1[i];
	}

	delete[] a1;

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
		delete[] b[i];
	}

	delete[] b;

	return EXIT_SUCCESS;
}