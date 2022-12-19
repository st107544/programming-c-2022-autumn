#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int rost = 0;

	std::cin >> n;

	int* a = new int[n] { 0 };

	for (int k = 0; k < n; ++k)
	{
		std::cin >> a[k];
	}

	std::cin >> rost;

	int i = 1;
	while (a[i - 1] >= rost)
	{
		++i;
	}

	std::cout << i;

	delete[] a;
	
	return EXIT_SUCCESS;
}