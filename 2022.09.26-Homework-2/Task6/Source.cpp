#include<iostream>

int main(int argc, char* argv[])
{
	int str1 = 0;
	int st1 = 0;
	int str2 = 0;
	int st2 = 0;

	std::cin >> str1 >> st1 >> str2 >> st2;

	if ((str1 == str2) || (st1 == st2) || (str1 + st1 == str2 + st2) || (str1 - st1 == str2 - st2))
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}

	return EXIT_SUCCESS;
}