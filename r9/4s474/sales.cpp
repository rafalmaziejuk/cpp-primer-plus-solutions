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
	void setSales(Sales &s, const double ar[], int n)
	{
		s.sales[0] = minimum(ar, n);

		for (int i = 1; i < QUARTERS; i++)
			s.sales[i] = 0.0;

		s.average = srednia(ar, n);
		s.max = maksimum(ar, n);
		s.min = minimum(ar, n);
	}

	void setSales(Sales &s)
	{
		for (int i = 0; i < QUARTERS; i++)
		{
			std::cout << "Podaj liczbe sprzedazy za " << i + 1 << " kwartal: ";
			std::cin >> s.sales[i];
			std::cout.put('\n');
		}

		s.average = srednia(s.sales, QUARTERS);
		s.max = maksimum(s.sales, QUARTERS);
		s.min = minimum(s.sales, QUARTERS);
	}

	void showSales(const Sales &s)
	{
		for (int i = 0; i < QUARTERS; i++)
			std::cout << "Liczba sprzedazy za " << i + 1 << " kwartal: " << s.sales[i] << std::endl;

		std::cout << "Srednia z powyzszych wynosi " << s.average << "." << std::endl;
		std::cout << "Najwieksza liczba sprzedazy to " << s.max << "." << std::endl;
		std::cout << "Najmniejsza liczba sprzedazy to " << s.min << "." << std::endl;
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