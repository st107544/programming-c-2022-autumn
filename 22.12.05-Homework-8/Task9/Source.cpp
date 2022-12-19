#include <iostream>
#include <cstring>

void del(char* s, int a, int b)
{
	if (a < b)
	{
		if (s[a] != s[b])
		{
			std::cout << s[a];
		}

		del(s, a + 1, b - 1);

		if (s[a] != s[b])
		{
			std::cout << s[b];
		}
	}

	if (a == b)
	{
		std::cout << s[a];
	}
}

int main(int argc, char* argv[])
{
	char st[1001]{ '0' };
	std::cin >> st;

	del(st, 0, strlen(st) - 1);

	return EXIT_SUCCESS;
}

