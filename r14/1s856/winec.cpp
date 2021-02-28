#include "winec.h"

Wine::Wine(const char *l, int y, const int yr[], const int bot[]) : m_nazwa_wina(l), m_liczba_lat(y)
{
	m_informacje.first().resize(y);
	m_informacje.second().resize(y);

	for (int i = 0; i < y; i++)
	{
		m_informacje.first()[i] = yr[i];
		m_informacje.second()[i] = bot[i];
	}
}

Wine::Wine(const char *l, int y) : m_nazwa_wina(l), m_liczba_lat(y)
{
	m_informacje.first().resize(y);
	m_informacje.second().resize(y);
}

void Wine::GetBottles(void)
{
	for (int i = 0; i < m_liczba_lat; i++)
	{
		std::cout << "Podaj rocznik: ";
		std::cin >> m_informacje.first()[i];

		std::cout << "Podaj liczbe butelek: ";
		std::cin >> m_informacje.second()[i];

		std::cout.put('\n');
	}
}

const std::string & Wine::Label(void) const
{
	return m_nazwa_wina;
}

int Wine::sum(void) const
{
	return m_informacje.second().sum();
}

void Wine::Show(void) const
{
	std::cout << "Wino: " << m_nazwa_wina << std::endl;
	std::cout << "\n      Rocznik   Butelki" << std::endl;
	
	for (int i = 0; i < m_liczba_lat; i++)
		std::cout << "      " << m_informacje.first()[i] << "      " << m_informacje.second()[i] << std::endl;
	
	std::cout.put('\n');
}