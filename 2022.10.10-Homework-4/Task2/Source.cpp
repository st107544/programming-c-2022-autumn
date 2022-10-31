#include<iostream>

int main(int argc, char* argv[])

{
	int dv = 0;
	unsigned int x = 0;
	int f = 0;
	int t = 0;

	std::cin >> dv;

	for (int i = 9; i >= 0; --i)
	{
		f = 1;
		t = 1;
		for (int a = 1; a <= i; ++a)
		{
			f = f * 10;
			t = t * 2;
		}

		x = x + (dv / f) * t;
		dv = dv - (dv / f) * f;
	}

	std::cout << x;

	return EXIT_SUCCESS;
}