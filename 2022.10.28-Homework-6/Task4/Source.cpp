#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int zn = 0; 
	int i = 0;
	int j = 0;

	std::cin >> n;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cin >> d;

	int* x = new int[n] { 0 };

	for (int i = 0; i < n; ++i)
	{
		x[i] = i + 1;
	}

	i = a - 1;
	j = b - 1;
	while (i < j)
	{
		zn = x[i];
		x[i] = x[j];
		x[j] = zn;
		i++;
		j -= 1;
	}
	i = c - 1;
	j = d - 1;
	while (i < j)
	{
		zn = x[i];
		x[i] = x[j];
		x[j] = zn;
		i++;
		j -= 1;
	}
	for (i = 0; i < n; i++)
	{
		std::cout << x[i] << ' ';
	}
	return EXIT_SUCCESS;
}