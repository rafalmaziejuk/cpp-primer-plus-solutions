#include <iostream>
#include "Person.h"

Person::~Person(void)
{

}

void Person::Dane(void) const
{
	std::cout << "Imie: " << m_imie << std::endl;
	std::cout << "Nazwisko: " << m_nazwisko << std::endl;
}

void Person::Wpisz(void)
{
	std::cout << "Podaj imie: ";
	getline(std::cin, m_imie);
	std::cout << "Podaj nazwisko: ";
	getline(std::cin, m_nazwisko);
}