#include<iostream>

void rev(int* a, int q, int n)
{

	if (q != n)
	{
		rev(a, q + 1, n);
	}
	std::cout << a[q] << ' ';

}

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	int* a = new int[n] { 0 };

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	rev(a, 0, n-1);
	free(a);

	return EXIT_SUCCESS;
}
