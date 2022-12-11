#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int minz = 1001;
	int maxz = -1001;

	std::cin >> n;

	int* a = new int[n] { 0 };

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];

		if (a[i] > maxz)
		{
			maxz = a[i];
		}

		if (a[i] < minz)
		{
			minz = a[i];
		}
	}
	for (int i = 0; i < n; ++i)
	{
		if (a[i] == maxz)
		{
			a[i] = minz;
		}

		std::cout << a[i];" ";
	}

	return EXIT_SUCCESS;
}