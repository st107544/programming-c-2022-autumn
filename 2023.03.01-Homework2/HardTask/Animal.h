#pragma once

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

enum Status
{
	alive = 0,
	dead = 1
};

class Animal
{
private:
	Animaltype type; //0-None, 1-Mosquito, 2-Donkey, 3-Unicorn, 4-Dragon
	
public:
	AnimalName name;
	Status status;
	int skill;

	Animal(Animaltype type = None, AnimalName name = Thanos, int skill = 0, Status status = alive) : type(type), name(name), skill(skill), status(status) {}


	Animal(const Animal& beast)
	{
		this->type = beast.type;
		this->name = beast.name;
		this->skill = beast.skill;
		this->status = beast.status;
	}

	~Animal()
	{
	}

	Animaltype getType();
	void Workshop();
	void mighter(int skill);
	void printInfo();
};
