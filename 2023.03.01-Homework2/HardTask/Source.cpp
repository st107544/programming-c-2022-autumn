#include <iostream>
#include <string>
#include "Animal.h"
#include <random>

int main(int argc, char* argv[])
{

	Animal** animals = new Animal * [10];

	for (int i = 0; i < 10; ++i)
	{
		animals[i] = new Animal();
		animals[i]->Workshop();
	}

	int i = 0;
	int counter = 10;
	while (counter > 1)
	{
		int j = i + 1;
		while ((animals[j]->status == dead) && (j < 9))
		{
			++j;
		}

		if ((animals[i]->skill) > (animals[j]->skill))
		{
			animals[i]->skill == animals[i]->skill - animals[j]->skill;
			if (animals[j]->status == alive)
			{
				animals[j]->status = dead;
				counter--;
			}
		}

		if ((animals[i]->skill) < (animals[j]->skill))
		{
			animals[j]->skill == animals[j]->skill - animals[i]->skill;
			if (animals[i]->status == alive)
			{
				animals[i]->status = dead;
				counter--;
			}
		}
		if ((animals[i]->skill) = (animals[j]->skill))
		{
			if (animals[i]->status == alive)
			{
				animals[i]->status = dead;
				counter--;
			}
			if (animals[j]->status == alive)
			{
				animals[j]->status = dead;
				counter--;
			}
		}
		if (i == 8)
		{
			i = 0;
		}
		else
		{
			i++;
			while ((animals[i]->status == dead) && (i < 8))
			{
				i++;
			}
		}

	}

	if (counter == 0)
	{
		std::cout << "Everyone is dead";
	}
	else
	{
		for (int i = 0; i < 10; ++i)
		{
			if (animals[i]->status == alive)
			{
				std::cout << "---WINNER---" << std::endl;
				animals[i]->printInfo();
			}
		}
	}

	for (int i = 0; i < 10; ++i)
	{
		delete animals[i];
	}
	delete[] animals;
	return EXIT_SUCCESS;
}