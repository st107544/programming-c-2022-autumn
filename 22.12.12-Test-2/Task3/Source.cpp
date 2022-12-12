#include<iostream>

void prost(int n, int d)
{
	while (d > 1)
	{
		if (n % d == 0)
		{
			std::cout << "composite";
			break;
		}

		else
		{
			return prost(n, d - 1);
		}
		
	}	
	if (d==1)
	{
		std::cout << "prime";
	}
}

int main(int argc, char* argv[])
{
	int a = 0;

	std::cin >> a;

	prost(a, a-1);

	return EXIT_SUCCESS;

}