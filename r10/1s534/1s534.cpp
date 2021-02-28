#include <iostream>
#include "RachunekBankowy.h"

int main(void)
{
	RachunekBankowy rachunek("nazwisko", "0123456789", 1000.0);

	rachunek.pokaz_rachunek();

	rachunek.przyjmij_depozyt(500.0);
	rachunek.pokaz_rachunek();

	rachunek.wydaj_kwote(250.0);
	rachunek.pokaz_rachunek();

	return 0;
}