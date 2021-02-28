#include <iostream>
#include "golf.h"

int main(void)
{
	const int ROZMIAR = 5;

	golf gracze[ROZMIAR];
	int i = 0;

	while ((i < ROZMIAR) && (setgolf(gracze[i])))
		i++;

	std::cout << "Oto wprowadzeni gracze:" << std::endl;
	for (int j = 0; j < i; j++)
		showgolf(gracze[j]);

	for (int j = 0; j < i; j++)
		handicap(gracze[j], 0);

	std::cout << "Oto wprowadzeni gracze po zmianie handicapu:" << std::endl;
	for (int j = 0; j < i; j++)
		showgolf(gracze[j]);

	return 0;
}