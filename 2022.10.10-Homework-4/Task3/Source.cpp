#include<iostream>

int main(int argc, char* argv[])
{
	int lg = 0;
	int cnt = 1;
	int v = 1;

	std::cin >> lg;

	for (int i = 0; i < lg; i++)
	{
		std::cout << v << " ";
		if (cnt == v)
		{
			++v;
			cnt = 0;
		}
		++cnt;

	}

	return EXIT_SUCCESS;
}