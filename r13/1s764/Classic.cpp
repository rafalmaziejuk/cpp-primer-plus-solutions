#include <iostream>
#include <cstring>
#include "Classic.h"

Classic::Classic(void) : Cd()
{
	std::strncpy(glownyUtwor, "brak", 49);
}

Classic::Classic(const char *utwor, const char *s1, const char *s2, int n, double x) : Cd(s1, s2, n, x)
{
	std::strncpy(glownyUtwor, utwor, 49);
}

Classic::~Classic(void)
{

}

void Classic::Report(void) const
{
	Cd::Report();

	std::cout << "Glowny utwor: " << glownyUtwor << std::endl;
	std::cout.put('\n');
}