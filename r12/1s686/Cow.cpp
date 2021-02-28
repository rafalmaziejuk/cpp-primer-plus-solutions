#include <iostream>
#include <cstring>
#include "Cow.h"

Cow::Cow(void)
{
	strncpy(name, "", 19);

	hobby = new char[1];
	hobby[0] = '\0';

	weight = 0.0;
}

Cow::Cow(const char *nm, const char *ho, double wt)
{
	strncpy(name, nm, 19);

	hobby = new char[strlen(ho) + 1];
	strncpy(hobby, ho, strlen(ho));
	hobby[strlen(ho)] = '\0';

	weight = wt;
}

Cow::Cow(const Cow &c)
{
	strncpy(name, c.name, 19);

	hobby = new char[strlen(c.hobby) + 1];
	strncpy(hobby, c.hobby, strlen(c.hobby));
	hobby[strlen(c.hobby)] = '\0';

	weight = c.weight;
}

Cow::~Cow(void)
{
	delete[] hobby;
}

Cow & Cow::operator=(const Cow &c)
{
	if (this == &c)
		return *this;

	strncpy(name, c.name, 19);

	delete[] hobby;
	hobby = new char[strlen(c.hobby) + 1];
	strncpy(hobby, c.hobby, strlen(c.hobby));
	hobby[strlen(c.hobby)] = '\0';

	weight = c.weight;

	return *this;
}

void Cow::ShowCow(void) const
{
	std::cout << "Imie: " << name << std::endl;
	std::cout << "Hobby: " << hobby << std::endl;
	std::cout << "Waga: " << weight << std::endl;
	std::cout.put('\n');
}