#include "winec2.h"

Wine::Wine(const char *l, int y, const int yr[], const int bot[]) : std::string(l), m_liczba_lat(y)
{
	PairArray::first().resize(y);
	PairArray::second().resize(y);

	for (int i = 0; i < y; i++)
	{
		PairArray::first()[i] = yr[i];
		PairArray::second()[i] = bot[i];
	}
}

Wine::Wine(const char *l, int y) : std::string(l), m_liczba_lat(y)
{
	PairArray::first().resize(y);
	PairArray::second().resize(y);
}

void Wine::GetBottles(void)
{
	for (int i = 0; i < m_liczba_lat; i++)
	{
		std::cout << "Podaj rocznik: ";
		std::cin >> PairArray::first()[i];

		std::cout << "Podaj liczbe butelek: ";
		std::cin >> PairArray::second()[i];

		std::cout.put('\n');
	}
}

const std::string & Wine::Label(void) const
{
	return (const std::string &) *this;
}

int Wine::sum(void) const
{
	return PairArray::second().sum();
}

void Wine::Show(void) const
{
	std::cout << "Wino: " << Label() << std::endl;
	std::cout << "\n      Rocznik   Butelki" << std::endl;
	
	for (int i = 0; i < m_liczba_lat; i++)
		std::cout << "      " << PairArray::first()[i] << "      " << PairArray::second()[i] << std::endl;
	
	std::cout.put('\n');
}