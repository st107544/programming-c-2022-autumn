#include <iostream>

int mpos(int x, int y, int c, int z)
{
	if (x * y * c * z == 0)

	{
		return 0;
	}

	return (1 + mpos(x - 1, y - 1, c - 1, z - 1));
}

int mneg(int a, int b, int c, int d)
{
	if ((a * b * c * d == 0) && (a >= 0) && (b >= 0) && (c >= 0) && (d >= 0))
	{
		return 0;
	}
	return (-1 + mneg(a + 1, b + 1, c + 1, d + 1));
}

int main(int argc, char* argv[])
{
	int x = 0;
	int y = 0;
	int c = 0;
	int z = 0;
	std::cin >> x;
	std::cin >> y;
	std::cin >> c;
	std::cin >> z;

	if ((x >= 0) && (y >= 0) && (c >= 0) && (z >= 0))
	{
		std::cout << mpos(x, y, c, z);
	}

	else
	{
		std::cout << mneg(x, y, c, z);
	}
	return EXIT_SUCCESS;
}

