#include <iostream>
#include <string>

struct Animal
{
	std::string type;
	std::string name;
	int age;

	Animal(std::string type = "pig", std::string name = "Peppa", int age = 3)
	{
		this->type = type;
		this->name = name;
		this->age = age;
	}

	Animal(const Animal& beast)
	{
		this->type = beast.type;
		this->name = beast.name;
		this->age = beast.age;
	}

	~Animal()
	{
	}
};

void printAnimal(Animal animal)
{
	std::cout << "Name: " << animal.name << '.' << std::endl;
	std::cout << "Type: " << animal.type << '.' << std::endl;
	std::cout << "Age: " << animal.age << "." << std::endl;
}

void elderAnimal(Animal& animal)
{
	animal.age += 1;
}

int main(int argc, char* argv[])
{
	Animal donkey("donkey", "Donkey", 28);
	elderAnimal(donkey);
	printAnimal(donkey);
	return EXIT_SUCCESS;
}