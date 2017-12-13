#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

#include "util.hpp"
#include "word_evaluator.hpp"

using namespace std;

int main()
{
	WordEvaluator evaluator;

	ifstream file("../wdata_extended.csv");

	if (file.is_open())
	{
		int count = 0;
		string line;
		while (!file.eof())
		{
			getline(file, line, '\n');

			vector<string> row = split(line);

			if (row.size() == 11)
			{
				evaluator.parse_data(0, //atoi(row[0].c_str()),
									 row[1],
									 row[2],
									 row[3],
									 row[4],
									 row[5],
									 row[6],
									 row[7],
									 0, //atoi(row[8].c_str()),
									 row[9],
									 row[10]);
				count++;
			}

			if (count > 10000) break;
		}

		evaluator.print();
	}
	else
	{
		cout << "Could not open data!" << endl;
		return -1;
	}

	return 0;
}
