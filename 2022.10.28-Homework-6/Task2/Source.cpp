#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int y = 0;

	std::cin >> n;

	int* a = new int[n] { 0 };

	for (int k = 0; k < n; ++k)
	{
		std::cin >> a[k];
	}

	std::cin >> y;

	int* i = new int[n] { 0 };
	int* j = new int[n] { 0 };

	for (int k = 0; k < y; ++k)
	{
		std::cin >> i[k] >> j[k];
	}


	for (int k = 0; k < y; ++k)
	{
		for (int x = i[k]; x <= j[k]; ++x)
		{
			std::cout << a[x - 1] << " ";
		}
		std::cout << std::endl;
	}

	delete[] a;
	delete[] i;
	delete[] j;

	return EXIT_SUCCESS;
}