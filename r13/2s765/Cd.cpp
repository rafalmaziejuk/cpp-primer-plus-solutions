#include <iostream>
#include <cstring>
#include "Cd.h"

Cd::Cd(void)
{
	performers = new char[1];
	performers[0] = '\0';

	label = new char[1];
	label[0] = '\0';

	selections = 0;
	playtime = 0.0;
}

Cd::Cd(const char *s1, const char *s2, int n, double x)
{
	performers = new char[std::strlen(s1) + 1];
	std::strncpy(performers, s1, std::strlen(s1));
	performers[std::strlen(s1)] = '\0';

	label = new char[std::strlen(s2) + 1];
	std::strncpy(label, s2, std::strlen(s2));
	label[std::strlen(s2)] = '\0';

	selections = n;
	playtime = x;
}

Cd::Cd(const Cd &d)
{
	performers = new char[std::strlen(d.performers) + 1];
	std::strncpy(performers, d.performers, std::strlen(d.performers));
	performers[std::strlen(d.performers)] = '\0';

	label = new char[std::strlen(d.label) + 1];
	std::strncpy(label, d.label, std::strlen(d.label));
	label[std::strlen(d.label)] = '\0';

	selections = d.selections;
	playtime = d.playtime;
}

Cd::~Cd(void)
{
	delete[] performers;
	delete[] label;
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

	delete[] performers;
	delete[] label;

	performers = new char[std::strlen(d.performers) + 1];
	std::strncpy(performers, d.performers, std::strlen(d.performers));
	performers[std::strlen(d.performers)] = '\0';

	label = new char[std::strlen(d.label) + 1];
	std::strncpy(label, d.label, std::strlen(d.label));
	label[std::strlen(d.label)] = '\0';

	selections = d.selections;
	playtime = d.playtime;

	return *this;
}