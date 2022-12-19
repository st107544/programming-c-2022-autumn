#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int min = 30001;
	int max = -30001;
	int mina = 0;
	int maxa = 0;
	int sum = 0;
	int prd = 1;
	int x = 0;

	std::cin >> n;

	int* a = new int[n] { 0 };

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];

		if (a[i] < min)
		{
			min = a[i];
			mina = i;
		}

		if (a[i] > max)
		{
			max = a[i];
			maxa = i;
		}

		if (a[i] > 0)
		{
			sum += a[i];
		}

	}

	if (mina > maxa)
	{
		x = mina;
		mina = maxa;
		maxa = x;
	}

	for (int i = mina + 1; i < maxa; ++i)
	{
		prd = prd * a[i];
	}

	std::cout << sum << " " << prd;

	delete[] a;

	return EXIT_SUCCESS;
}