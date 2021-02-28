#include <iostream>
#include <cstring>
#include "golf.h"

void setgolf(golf &g, const char *name, int hc)
{
	strcpy(g.fullname, name);
	g.handicap = hc;
}

bool setgolf(golf &g)
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

	setgolf(g, name, hc);
	
	return true;
}

void handicap(golf &g, int hc)
{
	g.handicap = hc;
}

void showgolf(const golf &g)
{
	std::cout << "Nazwisko gracza: " << g.fullname << std::endl;
	std::cout << "Handicap gracza: " << g.handicap << std::endl;
	std::cout.put('\n');
}