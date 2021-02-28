#include <iostream>
#include "stonewt.h"

int main(void)
{
	Stonewt stone1 = 20.0;
	Stonewt stone2(20, 20.0);
	Stonewt suma = stone1 + stone2;
	Stonewt roznica = stone1 - stone2;
	Stonewt iloczyn = stone1 * stone2;

	std::cout << "Stone 1: " << stone1;
	std::cout << "Stone 2: " << stone2 << std::endl;

	stone1.set_mode('s');
	stone2.set_mode('l');

	std::cout << "Stone 1: " << stone1;
	std::cout << "Stone 2: " << stone2 << std::endl;

	std::cout << "Suma: " << suma;
	std::cout << "Roznica: " << roznica;
	std::cout << "Iloczyn: " << iloczyn << std::endl;
	
	return 0;
}