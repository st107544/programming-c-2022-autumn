#include<iostream>

int c(int n, int k)
{
	if (n < 0 || k < 0)
	{
		return 0;
	}
	if (k == 0 || k == n)
	{
		return 1;
	}
	return c(n - 1, k - 1) + c(n - 1, k);

}
int** buf(int n)
{
	int** res = new int* [n];
	for (int i = 0; i < n; ++i)
	{
		res[i] = 
	}
}