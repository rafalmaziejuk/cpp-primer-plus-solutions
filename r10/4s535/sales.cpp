#include <iostream>
#include "sales.h"

namespace
{
	double srednia(const double ar[], int n);
	double maksimum(const double ar[], int n);
	double minimum(const double ar[], int n);
}

namespace SALES
{
	Sales::Sales(const double ar[], int n)
	{
		if (ar == NULL)
		{
			for (int i = 0; i < QUARTERS; i++)
				m_sales[i] = 0.0;

			m_average = 0.0;
			m_max = 0.0;
			m_min = 0.0;
		}
		else
		{
			m_sales[0] = minimum(ar, n);

			for (int i = 1; i < QUARTERS; i++)
				m_sales[i] = ar[i];

			m_average = srednia(ar, n);
			m_max = maksimum(ar, n);
			m_min = minimum(ar, n);
		}
	}

	Sales::~Sales(void)
	{

	}

	void Sales::setSales()
	{
		double sales[QUARTERS];

		for (int i = 0; i < QUARTERS; i++)
		{
			std::cout << "Podaj liczbe sprzedazy za " << i + 1 << " kwartal: ";
			std::cin >> sales[i];
			std::cout.put('\n');
		}

		*this = Sales(sales, QUARTERS);
	}

	void Sales::showSales(void) const
	{
		for (int i = 0; i < QUARTERS; i++)
			std::cout << "Liczba sprzedazy za " << i + 1 << " kwartal: " << m_sales[i] << std::endl;

		std::cout << "Srednia z powyzszych wynosi " << m_average << "." << std::endl;
		std::cout << "Najwieksza liczba sprzedazy to " << m_max << "." << std::endl;
		std::cout << "Najmniejsza liczba sprzedazy to " << m_min << "." << std::endl;
		std::cout.put('\n');
	}
}

namespace
{
	double srednia(const double ar[], int n)
	{
		double suma = 0.0;

		for (int i = 0; i < n; i++)
			suma += ar[i];

		return suma / n;
	}

	double maksimum(const double ar[], int n)
	{
		double max = ar[0];

		for (int i = 0; i < n; i++)
			if (ar[i] > max)
				max = ar[i];

		return max;
	}

	double minimum(const double ar[], int n)
	{
		double min = ar[0];

		for (int i = 0; i < n; i++)
			if (ar[i] < min)
				min = ar[i];

		return min;
	}
}