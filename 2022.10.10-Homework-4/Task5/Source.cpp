#include<iostream>

int main(int argc, char* argv[])

{
	float x = 1;
	float g = 1;
	int n = 0;

	std::cin >> n;

	for (int t = 1; t <= n; t++)
	{
		g = g * t;
		x = x + (1 / g);
	}

	printf("%.5f", x);

	return EXIT_SUCCESS;
}