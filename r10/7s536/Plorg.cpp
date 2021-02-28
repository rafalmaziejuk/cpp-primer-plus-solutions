#include <iostream>
#include <cstring>
#include "Plorg.h"

Plorg::Plorg(const char *imie, int wspolczynnikSytosci)
{
	strncpy(m_imie, imie, ROZMIAR - 1);
	m_imie[ROZMIAR - 1] = '\0';
	m_wspolczynnikSytosci = wspolczynnikSytosci;
}

Plorg::~Plorg(void)
{

}

void Plorg::zmien_wspolczynnik_sytosci(int wspolczynnikSytosci)
{
	m_wspolczynnikSytosci = wspolczynnikSytosci;
}

void Plorg::pokaz_plorga(void) const
{
	std::cout << "Imie: " << m_imie << std::endl;
	std::cout << "Wspolczynnik sytosci: " << m_wspolczynnikSytosci << std::endl;
	std::cout.put('\n');
}