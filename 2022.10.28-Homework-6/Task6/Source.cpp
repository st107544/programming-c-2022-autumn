#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int cnt3 = 0;
	int cnt4 = 0;

	std::cin >> n;

	int* a = new int[n] { 0 };
	int* p3 = new int[n] { 0 };
	int* p4 = new int[n] { 0 };

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];

		if (a[i] % 2 == 0)
		{
			p4[cnt4] = a[i];
			cnt4 += 1;
		}

		else
		{
			p3[cnt3] = a[i];
			cnt3 += 1;
		}
	}

	for (int i = 0; i < cnt3; ++i)
	{
		std::cout << p3[i] << " ";
	}

	std::cout << std::endl;

	for (int i = 0; i < cnt4; ++i)
	{
		std::cout << p4[i] << " ";
	}

	std::cout << std::endl;

	if (cnt4 >= cnt3)
	{
		std::cout << "YES";
	}

	else
	{
		std::cout << "NO";
	}

	delete[] a;

	return EXIT_SUCCESS;
}