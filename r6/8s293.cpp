#include <iostream>
#include <fstream>
#include <cstdlib>

#define ROZMIAR 20

int main(void)
{
	using namespace std;

	char nazwaPliku[ROZMIAR];

	cout << "Podaj nazwe pliku, ktory chcesz otworzyc: ";
	cin.getline(nazwaPliku, ROZMIAR);

	ifstream plikTekstowy;
	plikTekstowy.open(nazwaPliku);

	if (!plikTekstowy.is_open())
	{
		cout << "Nie udalo sie otworzyc pliku o nazwie " << nazwaPliku << ".\n";
		exit(EXIT_FAILURE);
	}

	char znak;
	int liczbaZnakow = 0;

	while (plikTekstowy >> znak)
		liczbaZnakow++;

	cout << "Wczytano " << liczbaZnakow << " znakow.\n";

	plikTekstowy.close();

	return 0;
}