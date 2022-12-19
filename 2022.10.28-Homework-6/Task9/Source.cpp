#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int sum = 0;

	std::cin >> n;

	int* a = new int[n] { 0 };

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	int znach = a[n - 1];
	int k = n - 1;

	for (int i = n - 1; i >= 0; --i)
	{
		if (znach < a[i])
		{
			sum += (k - i) * a[k];
			k = i;
			znach = a[i];
		}
	}

	sum += znach * (1 + k);

	std::cout << sum;

	delete[] a;

	return EXIT_SUCCESS;
}