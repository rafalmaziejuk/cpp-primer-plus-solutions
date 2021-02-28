#include <iostream>
#include <algorithm>
#include <string>

template <class T>
int reduce(T ar[], int n);

int main(void)
{
	const int ROZMIAR = 10;

	long tablicaLongow[ROZMIAR] = { 1, 1, 2, 2, 3, 3, 4, 4, 5, 5 };
	std::string tablicaStringow[ROZMIAR / 2] = { "napis", "napis", "napisik", "napisik", "napisunio" };

	std::cout << "Liczba elementow w tablicy longow po skroceniu: " << reduce<long>(tablicaLongow, ROZMIAR) << std::endl;
	std::cout << "Liczba elementow w tablicy stringow po skroceniu: " << reduce<std::string>(tablicaStringow, ROZMIAR / 2) << std::endl;

	return 0;
}

template <class T>
int reduce(T ar[], int n)
{
	T *temp = std::unique(ar, ar + n);
	int licznik = 0;

	for (T *i = ar; i != temp; i++)
		licznik++;

	return licznik;
}