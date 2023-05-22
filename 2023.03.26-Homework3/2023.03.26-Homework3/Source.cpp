#include<iostream>

struct Point
{
private:
	int x;
	int y;

public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}
	Point(const Point& pt) : x(pt.x), y(pt.y) {}

	~Point() {}

	int getX() { return x; }
	int getY() { return y; }
	int getDist() { return x * x + y * y; }
};

int main(int argc, char* argv[])
{
	int n;
	int x;
	int y;

	std::cin >> n;

	Point** a = new Point * [n] {};

	for (int i = 0; i < n; ++i)
	{
		std::cin >> x >> y;

		a[i] = new Point(x, y);
	}

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if ((a[j])->getDist() > (a[j + 1])->getDist())
			{
				std::swap(a[j], a[j + 1]);
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		std::cout << (a[i])->getX() << " " << (a[i])->getY() << std::endl;
	}

	for (int i = 0; i < n; ++i)
	{
		delete a[i];
	}
	delete[] a;

	return EXIT_SUCCESS;
}