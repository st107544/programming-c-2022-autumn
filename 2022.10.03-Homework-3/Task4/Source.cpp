#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int p = 1;
	int c = 0;
	int raz = 0;

	std::cin >> n;

	do
	{
		c = 0;
		raz = p - n;

		do
		{
			if (raz < 0)
			{
				std::cout << n + raz << " ";
			}
			else
			{
				std::cout << n - raz << " ";
			}
			++c;
			++raz;
		} while (c < n);

		std::cout << std::endl;
		++p;

	} while (p <= n);

	return EXIT_SUCCESS;
}