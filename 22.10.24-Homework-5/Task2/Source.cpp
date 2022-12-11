#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int l = 0;
	int r = 0;
	int num = 0;
	int el = -1001;

	std::cin >> n;

	int* a = new int[n] { 0 };

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	std::cin >> l >> r;

	for (int i = l - 1; i < r; ++i)
	{
		if (a[i] > el)
		{
			el = a[i];
			num = i;
		}
	}

	std::cout << el << " " << num + 1;

	return EXIT_SUCCESS;
}