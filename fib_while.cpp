#include <iostream>

int main(void)
{
	long long int n = 50;
	long long int f_1 = 0;
	long long int f_2 = 1;
	while (n > 1)
	{
		long long int f_tmp = f_2;
		f_2 = f_1 + f_2;
		f_1 = f_tmp;

		n--;
	}

	std::cout << "f_n = " << f_2 << std::endl;

	return 0;
}
