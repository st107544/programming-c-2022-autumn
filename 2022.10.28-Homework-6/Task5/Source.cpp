#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int j = 0;

	std::cin >> n;

	int* a = new int[n] { 0 };

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];

		if (a[i] < a[j]) 
		{
			j = i;
		}
	}

	for (int i = j; i < n; i++)
	{
		std::cout << a[i] << " ";
	}

	for (int i = 0; i < j; i++)
	{
		std::cout << a[i] << " ";
	}

	delete[] a;

	return EXIT_SUCCESS;
}