#include "iter.hpp"

int main(void) 
{
	int tab[] = { 0, 1, 2, 3, 4 };
	My_class tab2[5];
	iter( tab, 5, print);
	std::cout << std::endl;
	iter( tab2, 5, print );
	std::cout << std::endl;
	char char_arr[] = {'a', 'b', 'c'};
	iter(char_arr, 3, print);
	std::cout << std::endl;
	double double_arr[] = {5.15, 2.1, 45.8, 4.3};
	iter(double_arr, 4, print);

	return 0;
}