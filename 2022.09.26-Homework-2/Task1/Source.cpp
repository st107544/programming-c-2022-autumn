#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;

	int hd = n / 100;
	int tn = (n - hd * 100) / 10;
	int un = n % 10;

	switch (hd)
	{
	case 1:
		std::cout << "sto ";
		break;
	case 2:
		std::cout << "dvesti ";
		break;
	case 3:
		std::cout << "trista ";
		break;
	case 4:
		std::cout << "chetyresta ";
		break;
	case 5:
		std::cout << "pyatsot ";
		break;
	case 6:
		std::cout << "shestsot ";
		break;
	case 7:
		std::cout << "semsot ";
		break;
	case 8:
		std::cout << "vosemsot ";
		break;
	case 9:
		std::cout << "devyatsot ";
		break;
	}

	switch (tn)
	{
	case 2:
		std::cout << "dvadtcsat ";
		break;
	case 3:
		std::cout << "tridtcsat ";
		break;
	case 4:
		std::cout << "sorok ";
		break;
	case 5:
		std::cout << "pyatdesyat ";
		break;
	case 6:
		std::cout << "shestdesyat ";
		break;
	case 7:
		std::cout << "semdesyat ";
		break;
	case 8:
		std::cout << "vosemdesyat ";
		break;
	case 9:
		std::cout << "devyanosto ";
		break;
	case 1:
		switch (un)
		{
		case 0:
			std::cout << "desyat ";
			break;
		case 1:
			std::cout << "odinnadtcat ";
			break;
		case 2:
			std::cout << "dvenadtcat ";
			break;
		case 3:
			std::cout << "trinadtcat ";
			break;
		case 4:
			std::cout << "chetyrnadtcat ";
			break;
		case 5:
			std::cout << "pyatnadtcat ";
			break;
		case 6:
			std::cout << "shestnadtcat ";
			break;
		case 7:
			std::cout << "semnadtcat ";
			break;
		case 8:
			std::cout << "vosemnadtcat ";
			break;
		case 9:
			std::cout << "devyatnadtcat ";
			break;

		}

	}
	if (tn != 1)
	{
		switch (un)
		{
		case 1:
			std::cout << "odin ";
			break;
		case 2:
			std::cout << "dva ";
			break;
		case 3:
			std::cout << "tri ";
			break;
		case 4:
			std::cout << "chetyre ";
			break;
		case 5:
			std::cout << "pyat ";
			break;
		case 6:
			std::cout << "shest ";
			break;
		case 7:
			std::cout << "sem ";
			break;
		case 8:
			std::cout << "vosem ";
			break;
		case 9:
			std::cout << "devyat ";
			break;
		}
	}

	if (un == 1 && tn != 1)
	{
		std::cout << "banan";
	}
	else if (un > 1 && un < 5 && tn != 1)
	{
		std::cout << "banana";
	}
	else
	{
		std::cout << "bananov";
	}

	return EXIT_SUCCESS;
}