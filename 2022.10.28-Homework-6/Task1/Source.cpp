#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;

	int* a = new int[n] { 0 };
	int* rea = new int[n] { 0 };

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	for (int i = 0; i < n; ++i)
	{
		rea[i] = a[n - i - 1];
	}

	for (int i = 0; i < n; ++i)
	{
		std::cout << rea[i] << " ";
	}

	delete[] a;
	delete[] rea;

	return EXIT_SUCCESS;
}