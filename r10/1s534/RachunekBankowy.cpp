#include <iostream>
#include <cstring>
#include "RachunekBankowy.h"

RachunekBankowy::RachunekBankowy(const std::string &nazwisko, const char *numerRachunku, double saldo)
{
	m_nazwisko = nazwisko;
	strncpy(m_numerRachunku, numerRachunku, ROZMIAR - 1);
	m_numerRachunku[ROZMIAR - 1] = '\0';
	m_saldo = saldo;
}

RachunekBankowy::~RachunekBankowy(void)
{

}

void RachunekBankowy::pokaz_rachunek(void) const
{
	std::cout << "Depozytariusz: " << m_nazwisko << std::endl;
	std::cout << "Numer rachunku: " << m_numerRachunku << std::endl;
	std::cout << "Saldo: " << m_saldo << std::endl;
	std::cout.put('\n');
}

void RachunekBankowy::przyjmij_depozyt(double kwota)
{
	m_saldo += kwota;
}

void RachunekBankowy::wydaj_kwote(double kwota)
{
	m_saldo -= kwota;
}