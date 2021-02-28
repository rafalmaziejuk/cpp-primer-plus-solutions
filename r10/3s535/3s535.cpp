#include <iostream>
#include "golf.h"

int main(void)
{
	const int ROZMIAR = 5;

	golf gracze[ROZMIAR];
	int i = 0;

	while ((i < ROZMIAR) && (gracze[i].setgolf()))
		i++;

	std::cout << "Oto wprowadzeni gracze:" << std::endl;
	for (int j = 0; j < i; j++)
		gracze[j].showgolf();

	for (int j = 0; j < i; j++)
		gracze[j].handicap(j);

	std::cout << "Oto wprowadzeni gracze po zmianie handicapu:" << std::endl;
	for (int j = 0; j < i; j++)
		gracze[j].showgolf();

	return 0;
}