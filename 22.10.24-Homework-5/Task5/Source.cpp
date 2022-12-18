#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int x = 0;
	int xa = 0;
	int lg = 10000;

	std::cin >> n;

	int* a = new int[n] { 0 };

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	std::cin >> x;

	for (int i = 0; i < n; ++i)
	{
		if (x == a[i])
		{
			xa = x;
			break;
		}

		if (x > a[i])
		{
			if (lg > x - a[i])
			{
				lg = x - a[i];
				xa = a[i];
			}
		
		}
		else if (x < a[i])
		{
			if (lg > a[i] - x)
			{
				xa = a[i];
				lg = a[i] - x;
			}
			
		}
	}

	std::cout << xa;

	delete[] a;

	return EXIT_SUCCESS;
}