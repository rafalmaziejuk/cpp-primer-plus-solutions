#include <iostream>
#include <algorithm>

int reduce(long ar[], int n);

int main(void)
{
	const int ROZMIAR = 10;

	long tablica[ROZMIAR] = { 1, 10, 2, 2, 3, 3, 4, 4, 5, 5 };

	std::cout << "Liczba elementow po skroceniu: " << reduce(tablica, ROZMIAR) << std::endl;

	return 0;
}

int reduce(long ar[], int n)
{
	long *temp = std::unique(ar, ar + n);
	int licznik = 0;

	for (long *i = ar; i != temp; i++)
		licznik++;

	return licznik;
}