#include <iostream>
#include <string>

struct Student {
private:
	std::string name;
	std::string surname;
	int mM;
	int mF;
	int mI;
public:

	Student(std::string name = "Valera", std::string surname = "Brat", int mM = 0, int mF = 0, int mI = 0) :
		name(name), surname(surname), mM(mM), mF(mF), mI(mI) {};

	Student(const Student& st) :
		name(st.name), surname(st.surname), mM(st.mM), mF(st.mF), mI(st.mI) {};

	~Student() {};

	int Sum()
	{
		return(mM + mF + mI);
	}

	void PrSt()
	{
		std::cout << name << ' ' << surname << std::endl;
	}
};

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	std::cout << std::endl;

	Student* st = new Student[n];

	std::string name;
	std::string sname;

	int m;
	int f;
	int inf;

	for (int i = 0; i < n; ++i)
	{
		std::cin >> name;
		std::cin >> sname;
		std::cin >> m;
		std::cin >> f;
		std::cin >> inf;
		st[i] = Student(name, sname, m, f, inf);
	}

	for (int i = 0; i < n; ++i) 
	{
		for (int j = n - 1; j > i; --j)
		{
			if (st[j - 1].Sum() < st[j].Sum())
			{
				Student temp = st[j - 1];
				st[j - 1] = st[j];
				st[j] = temp;
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		st[i].PrSt();
	}

	delete[] st;
	return EXIT_SUCCESS;
}