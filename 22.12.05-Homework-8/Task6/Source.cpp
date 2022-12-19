#include <iostream>
#include <cstring>

int max(int* s, int maxs, int n)
{
	if (s[n] > maxs)
	{
		maxs = s[n];
	}
	if (n == 0)
	{
		return maxs;
	}
	return max(s, maxs, n - 1);
}
int main(int argc, char* argv[])
{
	char st[1001];
	std::cin >> st;

	int len = strlen(st);
	int* s = new int[len] { 0 };

	for (int i = 0; i < len; ++i)
	{
		s[i] = st[i] - '0';
	}

	std::cout << max(s, 0, len - 1);

	delete[] s;

	return EXIT_SUCCESS;
}