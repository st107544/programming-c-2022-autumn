#include <iostream>

void el(int num, int a, int b)
{
	std::cout << "Disk " << num << " move from " << a << " to " << b << std::endl;
}

void tw(int n, int a, int b, int f)
{
	if (n == 0)
	{
		return;
	}
	tw(n - 1, a, f, b);
	el(n, a, b);
	tw(n - 1, f, b, a);
}


int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	tw(n, 1, 2, 3);

	return EXIT_SUCCESS;
}
