#include <iostream>
#include <string>
#include <random>

Animaltype Animal::getType()
{
	return type;
}
int Animal::getSkill()
{
	return skill;
}
void Animal::setSkill(int skill)
{
	if (skill >= 0)
	{
		this->skill = skill;
	}
}
void Animal::mighter()
{
	skill++;
}


enum Animaltype
{
	None = 0,
	Mosquito = 1,
	Donkey = 2,
	Unicorn = 3,
	Dragon = 4	
};

enum AnimalName
{
	Fifa = 0,
	Bobs = 1,
	Dodo = 2,
	Boba = 3,
	Biba = 4,
	Rolf = 5,
	Thanos = 6,
	Goga = 7,
	Vova = 8,
	Arsi = 9
};
class Animal
{
private:
	Animaltype type; //0-None, 1-Mosquito, 2-Donkey, 3-Unicorn, 4-Dragon
	int skill;
public:
	AnimalName name;
	
	Animal(Animaltype type = None, AnimalName name = Thanos, int skill = 0)
	{
		this->type = type;
		this->name = name;
		this->skill = skill;
	}

	Animal(const Animal& beast)
	{
		this->type = beast.type;
		this->name = beast.name;
		this->skill = beast.skill;
	}

	~Animal()
	{
	}

	Animaltype getType();
	int getSkill ();
	void setSkill(int skill);
	void mighter();
	void printInfo()
	{
		std::cout << "Name:" << name;
		std::cout << "Type:" << type;
		std::cout << "Skill:" << skill;
	}
}; 

int main(int argc, char* argv[])
{
	Animal* animals1[100];
	Animal** animals2 = new Animal * [100];

	for (int i = 0; i < 100; ++i)
	{
		animals1[i] = new Animal();
		animals2[i] = new Animal();
	}
 



	for (int i = 0; i < 100; ++i)
	{
		delete animals1[i];
		delete animals2[i];
	}
	delete[] animals2;

	return EXIT_SUCCESS;
}


