#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	int m = 0;

	std::cin >> n;

	int* a = new int[n] { 0 };

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	std::cin >> k;

	if (k >= 0)
	{
		m = k % n;
	}

	else
	{
		m = n - ((-1) * k % n);
	}

	for (int i = n - m; i < n; i++)
	{
		std::cout << a[i] << ' ';
	}
	for (int i = 0; i < n - m; i++)
	{
		std::cout << a[i] << ' ';
	}

	delete[] a;

	return EXIT_SUCCESS;
}