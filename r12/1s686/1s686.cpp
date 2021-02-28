#include <iostream>	
#include "Cow.h"

int main(void)
{
	const int ROZMIAR = 3;

	Cow krowy[ROZMIAR] =
	{
		Cow(),
		Cow("krowa", "jedzenie trawy", 500.0),
		Cow(krowy[1])
	};

	for (int i = 0; i < ROZMIAR; i++)
		krowy[i].ShowCow();

	krowy[0] = krowy[1];
	krowy[0].ShowCow();

	return 0;
}