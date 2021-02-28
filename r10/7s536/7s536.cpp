#include <iostream>
#include "Plorg.h"

int main(void)
{
	Plorg plorg1;
	Plorg plorg2("Imie", 100);

	plorg1.pokaz_plorga();
	plorg2.pokaz_plorga();

	plorg1.zmien_wspolczynnik_sytosci(100);
	plorg2.zmien_wspolczynnik_sytosci(50);

	plorg1.pokaz_plorga();
	plorg2.pokaz_plorga();

	return 0;
}