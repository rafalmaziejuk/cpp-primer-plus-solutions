#include <iostream>
#include "stonewt.h"

int main(void)
{
	const int ROZMIAR = 6;

	Stonewt tablica[ROZMIAR];
	double wartosc;
	int i = 3;

	tablica[0] = Stonewt(10.0);
	tablica[1] = Stonewt(20.0);
	tablica[2] = Stonewt(30.0);

	std::cout << "Podaj liczbe funtow " << i + 1 << " obiektu: ";
	while ((i < ROZMIAR) && (std::cin >> wartosc))
	{
		tablica[i] = Stonewt(wartosc); 
		i++;

		if (i < ROZMIAR)
			std::cout << "Podaj liczbe funtow " << i + 1 << " obiektu: ";
	}

	Stonewt test(11, 0.0);
	Stonewt minimum = tablica[0];
	Stonewt maksimum = tablica[0];
	int licznik = 0;
	int indeksMinimum = 0;
	int indeksMaksimum = 0;

	for (int j = 0; j < ROZMIAR; j++)
	{
		if (tablica[j] < minimum)
		{
			minimum = tablica[j];
			indeksMinimum = j;
		}

		if (tablica[j] > maksimum)
		{
			maksimum = tablica[j];
			indeksMaksimum = j;
		}	

		if (tablica[j] >= test)
			licznik++;
	}

	std::cout.put('\n');
	std::cout << "Indeks elementu najmniejszego: " << indeksMinimum << std::endl;
	std::cout << "Indeks elementu najwiekszego: " << indeksMaksimum << std::endl;
	std::cout << "Liczba elementow o wartosci wiekszej niz 11 kamieni: " << licznik << std::endl;
	
	return 0;
}