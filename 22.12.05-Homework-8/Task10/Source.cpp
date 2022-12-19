#include <iostream>

int cntdel(int*& a, int k, int n)
{
	int cnt = 1;

	for (int i = 0; i < n; ++i)
	{
		if (a[i] == k + 1)
		{
			cnt += cntdel(a, i, n);
		}
	}
	return cnt;
}

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	int* f = new int[n] { 0 };

	for (int i = 0; i < n; ++i)
	{
		std::cin >> f[i];
		std::cin >> f[i];
	}

	int k = 0;
	std::cin >> k;

	std::cout << cntdel(f, k - 1, n);

	delete[] f;

	return EXIT_SUCCESS;
}

