#include <iostream>
#include <cstring>
#include "Classic.h"

Classic::Classic(void) : Cd()
{
	glownyUtwor = new char[1];
	glownyUtwor[0] = '\0';
}

Classic::Classic(const char *utwor, const char *s1, const char *s2, int n, double x) : Cd(s1, s2, n, x)
{
	glownyUtwor = new char[std::strlen(utwor) + 1];
	std::strncpy(glownyUtwor, utwor, std::strlen(utwor));
	glownyUtwor[std::strlen(utwor)] = '\0';
}

Classic::Classic(const Classic &cl) : Cd(cl)
{
	glownyUtwor = new char[std::strlen(cl.glownyUtwor) + 1];
	std::strncpy(glownyUtwor, cl.glownyUtwor, std::strlen(cl.glownyUtwor));
	glownyUtwor[std::strlen(cl.glownyUtwor)] = '\0';
}

Classic::~Classic(void)
{
	delete[] glownyUtwor;
}

void Classic::Report(void) const
{
	Cd::Report();

	std::cout << "Glowny utwor: " << glownyUtwor << std::endl;
	std::cout.put('\n');
}

Classic & Classic::operator=(const Classic &cl)
{
	if (this == &cl)
		return *this;

	Cd::operator=(cl);
	delete[] glownyUtwor;

	glownyUtwor = new char[std::strlen(cl.glownyUtwor) + 1];
	std::strncpy(glownyUtwor, cl.glownyUtwor, std::strlen(cl.glownyUtwor));
	glownyUtwor[std::strlen(cl.glownyUtwor)] = '\0';

	return *this;
}