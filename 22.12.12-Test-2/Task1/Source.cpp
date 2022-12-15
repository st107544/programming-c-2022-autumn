#include <iostream>

void spiral(int**, int, int, int, int, int, int);

int main(int argc, char argv[])
{
	int n = 0;
	std::cin >> n;

	int** spi = (int**)malloc(sizeof(int*) * n);
	for (int x = 0; x < n; ++x)
	{
		spi[x] = (int*)malloc(sizeof(int) * n);
	}

	int k = 0; 
	int znach = 1;
	int x = 0;
	int j = 0;
	spiral(spi, znach, x, j, n, k, 0);

	znach = n * n;

	for (int x = 0; x < n; ++x)
	{
		for (int j = 0; j < n; ++j)
		{
			if (spi[x][j] < (-1) * n * n || spi[x][j] > n * n)
			{
				spi[x][j] = n * n;
			}
			std::cout << spi[x][j] << ' ';
			if (j == n - 1)
			{
				std::cout << std::endl;
			}
		}
	}

	for (int x = 0; x < n; ++x)
	{
		free(spi[x]);
	}
	free(spi);
}


void spiral(int** spi, int zn, int x, int y, int n, int k, int z)
{
	if (zn >= n * n)
	{
		return;
	}
	spi[x][y] = zn;
	
	if ((y < n - 1 - z) && (k == 0))
	{
		return(spiral(spi, zn + 1, x, y + 1, n, k, z)); 
	}

	if ((y == n - 1 - z) && (k == 0))
	{
		k = 1;
		return(spiral(spi, zn + 1, x + 1, y, n, k, z)); 
	}

	if ((x < n - 1 - z) && (k == 1))
	{
		return(spiral(spi, zn + 1, x + 1, y, n, k, z)); 
	}

	if ((x == n - 1 - z) && (k == 1))
	{
		k = 2;
		return(spiral(spi, zn + 1, x, y - 1, n, k, z)); 
	}

	if ((y > 0 + z) && (k == 2))
	{
		return(spiral(spi, zn + 1, x, y - 1, n, k, z)); 
	}

	if ((y == 0 + z) && (k == 2))
	{
		k = 3;
		return(spiral(spi, zn + 1, x - 1, y, n, k, z + 1)); 
	}

	if ((x > 0 + z) && (k == 3))
	{
		return(spiral(spi, zn + 1, x - 1, y, n, k, z)); 
	}

	if ((x == 0 + z) && (k == 3))
	{
		k = 0;
		return(spiral(spi, zn + 1, x, y + 1, n, k, z)); 
	}
}


