#include <iostream>
#include <vector>
#include <string>

int main()
{
	std::vector<std::string> planets = { "Mars", "Jupiter", "Pluto",
	                                     "Merkur", "Neptun" };

	std::cout << "Little planet list:" << std::endl;
	for (std::string p : planets)
	{
		std::cout << p << std::endl;
	}

	return 0;
}
