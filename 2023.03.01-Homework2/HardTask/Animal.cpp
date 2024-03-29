#include <iostream>
#include <random>
#include "Animal.h"

Animal::~Animal()
{
}

Animaltype Animal::getType()
{
	return type;
}

void Animal::Workshop()
{

	type = Animaltype(rand() % 4 + 1);
	name = AnimalName(rand() % 9 + 1);

	switch (type)
	{
	case Mosquito :
	{
		skill = (rand()%4+1);
		break;
	}
	case Donkey:
	{
		skill = (rand() % 6 + 1);
		break;
	}
	case Unicorn:
	{
		skill = (rand() % 8 + 1);
		break;
	}
	default:
	{
		skill = (rand() % 10 + 1);
	}
	}
}

void Animal::printInfo()
{
	switch (name)
	{
	case 0:
	{
		std::cout << "Name: Fifa" <<  std::endl;
		break;
	}
	case 1:
	{
		std::cout << "Name: Bobs" << std::endl;
		break;
	}
	case 2:
	{
		std::cout << "Name: Dodo" << std::endl;
		break;
	}
	case 3:
	{
		std::cout << "Name: Boba" << std::endl;
		break;
	}
	case 4:
	{
		std::cout << "Name: Biba" << std::endl;
		break;
	}
	case 5:
	{
		std::cout << "Name: Rolf" << std::endl;
		break;
	}
	case 6:
	{
		std::cout << "Name: Thanos" << std::endl;
		break;
	}
	case 7:
	{
		std::cout << "Name: Goga" << std::endl;
		break;
	}
	case 8:
	{
		std::cout << "Name: Vova" << std::endl;
		break;
	}
	case 9:
	{
		std::cout << "Name: Arsi" << std::endl;
		break;
	}
	}
	
	switch (type) 
	{
	case 0:
	{
		std::cout << "Type: none" << std::endl;
		break;
	}
	case 1:
	{
		std::cout << "Type: Mosquito" << std::endl;
		break;
	}
	case 2:
	{
		std::cout << "Type: Donkey" << std::endl;
		break;
	}
	case 3:
	{
		std::cout << "Type: Unicorn" << std::endl;
		break;
	}
	case 4:
	{
		std::cout << "Type: Dragon" << std::endl;	
		break;
	}
	
	}
	std::cout << "Skill: " << skill << std::endl;
	std::cout << "Status: " << ((status == alive) ? "alive" : "dead") << std::endl;
	std::cout << std::endl;
}

void Animal::mighter(int skill)
{
	skill += skill;
}
