#include<iostream>


int fib(int n)
	{
		if (n == 0)
		{
			return 1;
		}
		if (n == 1)
		{
			return 1;
		}

		return fib(n - 2) + fib(n - 1);
	}
int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;
	std::cout << fib(n);

	return EXIT_SUCCESS;
}