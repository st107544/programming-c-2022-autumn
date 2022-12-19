#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;

	int** a = new int* [n];
	for (int i = 0; i < n; ++i)
	{
		a[i] = new int[n] {0};
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			std::cin >> a[i][j];
		}
	}

	for (int i = n - 1; i >= 0; --i)
	{
		for (int j = n - 1; j >= 0; --j)
		{
			std::cout << a[j][i] << " ";
		}

		std::cout << std::endl;
	}

	for (int i = 0; i < n; ++i)
	{
		delete[] a[i];
	}
	delete[] a;

	return EXIT_SUCCESS;
}