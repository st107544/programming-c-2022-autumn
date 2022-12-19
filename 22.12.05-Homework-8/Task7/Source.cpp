#include <iostream>
#include <cstring>

char* star(char* s, int x, int n)
{
	if (x == n - 1)
	{
		return s;
	}

	char nx = s[x + 1];

	s[x + 1] = '*';

	for (int i = x + 2; i < n + 1; ++i)
	{
		char g = s[i];
		s[i] = nx;
		nx = g;
	}
	return star(s, x + 2, n + 1);
}

int main(int argc, char* argv[])
{
	char st[2001]{ '0' };
	std::cin >> st;

	int len = strlen(st);
	std::cout << star(st, 0, len);

	return EXIT_SUCCESS;
}

