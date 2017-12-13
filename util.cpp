#include "util.hpp"

vector<string> split(string str, char delimiter)
{
	vector<string> splitted = { "" };

	int j = 0;
	for (char c : str)
	{
		if (c == delimiter)
		{
			j++;
			splitted.push_back(string());
		}
		else
		{
			splitted[j].push_back(c);
		}
	}

	return splitted;
}
