#include <iostream>

int mpos(int x, int y, int w, int z)
{
	if (x * y * w * z == 0)

	{
		return 0;
	}

	return (1 + mpos(x - 1, y - 1, w - 1, z - 1));
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
	int w = 0;
	int z = 0;
	std::cin >> x;
	std::cin >> y;
	std::cin >> w;
	std::cin >> z;

	if ((x >= 0) && (y >= 0) && (w >= 0) && (z >= 0))
	{
		std::cout << mpos(x, y, w, z);
	}

	else
	{
		std::cout << mneg(x, y, w, z);
	}
	return EXIT_SUCCESS;
}

