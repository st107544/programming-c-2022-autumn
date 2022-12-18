#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int x = 0;
	int max = 0;
	int num = 0;

	std::cin >> n;

	int* a = new int[n] { 0 };

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	for (int i = 0; i < n; ++i)
	{
		std::cin >> x;

		if (max < a[i] * x)
		{
			max = a[i] * x;
			num = i;
		}
	}

	std::cout << num + 1;

	delete[] a;

	return EXIT_SUCCESS;
}