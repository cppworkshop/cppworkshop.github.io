#include <iostream>

int main()
{
	float n;
	std::cin >> n;
	if (n > 2.71 && n < 2.72)
	{
		std::cout << "e!" << std::endl;
	}
	else if (n > 3.14 && n < 3.15)
	{
		std::cout << "π!" << std::endl;
	}
	else
	{
		std::cout << "Unbekannte Zahl..." << std::endl;
	}

	return 0;
}
