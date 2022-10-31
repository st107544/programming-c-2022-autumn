#include<iostream>

int main(int argc, char* argv[])
{
	int cnt = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;

	std::cin >> a >> b >> c >> d >> e;

	for (int x = 0; x < 1001; x++)
	{
		if (x != e)
		{
			if (a * x * x * x + b * x * x + c * x + d == 0)
			{
				++cnt;
			}
		}
	}

	std::cout << cnt;

	return EXIT_SUCCESS;
}