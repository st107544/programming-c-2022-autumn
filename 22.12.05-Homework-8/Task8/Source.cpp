#include <iostream>
#include <cstring>

void br(char* s, int len, int sx)
{
	if (len - sx <= 1)
	{
		std::cout << s[sx];

		if (sx != len)
		{
			std::cout << s[len];
		}
	}

	else
	{
		std::cout << s[sx] << "(";
		br(s, len - 1, sx + 1);
		std::cout << ")" << s[len];
	}
}

int main(int argc, char* argv[])
{
	char st[1001]{ '0' };
	std::cin >> st;

	std::cout << '(';

	br(st, strlen(st) - 1, 0);

	std::cout << ')';

	return EXIT_SUCCESS;
}

