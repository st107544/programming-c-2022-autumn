#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int sum = -1001;

	std::cin >> n;

	int* a = new int[n] { 0 };

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	if (sum < a[n - 1] + a[0] + a[1])
	{
		sum = a[n - 1] + a[0] + a[1];
	}
	if (sum < a[n - 2] + a[n - 1] + a[0])
	{
		sum = a[n - 2] + a[n - 1] + a[0];
	}
	
	for (int i = 0; i < n - 2; ++i)
	{
		if (sum < a[i] + a[i + 1] + a[i + 2])
		{
			sum = a[i] + a[i + 1] + a[i + 2];
		}
	}

	std::cout << sum;

	delete[] a;

	return EXIT_SUCCESS;
}