#include <iostream>
#include "GunSlinger.h"

void GunSlinger::Dane(void) const
{
	std::cout << "Czas wyciagania rewolweru: " << m_czasWyciagania << std::endl;
	std::cout << "Liczba naciec na rewolwerze: " << m_liczbaNaciec << std::endl;
}

void GunSlinger::Wpisz(void)
{
	std::cout << "Podaj czas wyciagania: ";
	(std::cin >> m_czasWyciagania).get();
	std::cout << "Podaj liczbe naciec: ";
	(std::cin >> m_liczbaNaciec).get();
}

void GunSlinger::Show(void) const
{
	std::cout << "REWOLWEROWIEC" << std::endl;
	Person::Dane();
	Dane();
}

void GunSlinger::Ustaw(void)
{
	std::cout << "Podaj imie i nazwisko rewolwerowca." << std::endl;
	Person::Wpisz();
	Wpisz();
}

double GunSlinger::Draw(void) const
{
	return m_czasWyciagania;
}