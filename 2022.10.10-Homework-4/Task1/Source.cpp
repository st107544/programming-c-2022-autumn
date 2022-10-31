#include<iostream>

int main(int argc, char* argv[])

{
	unsigned int x = 0;
	int cnt = 0;
	int del = 0;

	std::cin >> x;

	for (int d = 1; d * d <= x; ++d)
	{
		if (x % d == 0)
		{
			++cnt;
		}
		
		del = d;

	}

	if (x % del == 0)
	{
		cnt = 2 * cnt - 1;
	}

	else
	{
		cnt = cnt * 2;
	}

	std::cout << cnt;

	return EXIT_SUCCESS;
}