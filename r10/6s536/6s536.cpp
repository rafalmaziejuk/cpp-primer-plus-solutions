#include <iostream>
#include "Move.h"

int main(void)
{
	Move suma;
	Move obiekt1(1.0, 2.0);
	Move obiekt2(3.0, 4.0);

	obiekt1.showmove();
	std::cout << " + ";
	obiekt2.showmove();
	std::cout << " = ";

	suma = obiekt1.add(obiekt2);

	suma.showmove();
	std::cout << std::endl;

	return 0;
}