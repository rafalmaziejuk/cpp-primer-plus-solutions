#include <iostream>
#include <cstring>
#include "golf.h"

golf::golf(const char *name, int hc)
{
	strncpy(m_fullname, name, Len - 1);
	m_fullname[Len - 1] = '\0';
	m_handicap = hc;
}

golf::~golf(void)
{

}

bool golf::setgolf(void)
{
	char name[Len];
	int hc;

	std::cout << "Podaj nazwisko gracza: ";
	std::cin.getline(name, Len);

	if (name[0] == '\0')
	{
		std::cout << "Zakonczono wprowadzanie danych!" << std::endl << std::endl;
		return false;
	}	
	else
	{
		std::cout << "Podaj handicap gracza: ";
		std::cin >> hc;
		std::cin.ignore();
		std::cout.put('\n');
	}

	*this = golf(name, hc);
	
	return true;
}

void golf::handicap(int hc)
{
	m_handicap = hc;
}

void golf::showgolf(void) const
{
	std::cout << "Nazwisko gracza: " << m_fullname << std::endl;
	std::cout << "Handicap gracza: " << m_handicap << std::endl;
	std::cout.put('\n');
}