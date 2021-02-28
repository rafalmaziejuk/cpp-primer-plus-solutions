#include <iostream>
#include <cstring>
#include "Cd.h"

Cd::Cd(void)
{
	std::strncpy(performers, "brak", 49);
	std::strncpy(label, "brak", 19);
	selections = 0;
	playtime = 0.0;
}

Cd::Cd(const char *s1, const char *s2, int n, double x)
{
	std::strncpy(performers, s1, 49);
	std::strncpy(label, s2, 19);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd &d)
{
	std::strncpy(performers, d.performers, 49);
	std::strncpy(label, d.label, 19);
	selections = d.selections;
	playtime = d.playtime;
}

Cd::~Cd(void)
{
	
}

void Cd::Report(void) const
{
	std::cout << "Wykonawcy: " << performers << std::endl;	
	std::cout << "Nazwa: " << label << std::endl;
	std::cout << "Ilosc utworow: " << selections << std::endl;
	std::cout << "Dlugosc: " << playtime << std::endl;
	std::cout.put('\n');
}

Cd & Cd::operator=(const Cd &d)
{
	if (this == &d)
		return *this;

	std::strncpy(performers, d.performers, 49);
	std::strncpy(label, d.label, 19);
	selections = d.selections;
	playtime = d.playtime;

	return *this;
}