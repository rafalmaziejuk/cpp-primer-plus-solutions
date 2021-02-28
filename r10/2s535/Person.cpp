#include <iostream>
#include <cstring>
#include "Person.h"

Person::Person(const std::string &ln, const char *fn)
{
	lname = ln;
	strncpy(fname, fn, LIMIT - 1);
	fname[LIMIT - 1] = '\0';
}

Person::~Person(void)
{

}

void Person::Show(void) const
{
	std::cout << "Imie: " << fname << std::endl;
	std::cout << "Nazwisko: " << lname << std::endl;
	std::cout.put('\n');
}

void Person::FormalShow(void) const
{
	std::cout << "Nazwisko: " << lname << std::endl;
	std::cout << "Imie: " << fname << std::endl;
	std::cout.put('\n');
}