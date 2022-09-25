#include<iostream>


int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	

	std::cin >> n;
	std::cin >> k;

	int res = 0;
	res =( n / k ) * n + (k / n) * k;
	res = res / ((n / k) + (k / n));
	

	std::cout << res << std::endl;

	return EXIT_SUCCESS;
}