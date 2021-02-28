#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

#define ROZMIAR 20

struct nws
{
	std::string nazwisko;
	double kwota;
};

int main(void)
{
	using namespace std;

	char nazwaPliku[ROZMIAR];

	cout << "Podaj nazwe pliku, ktory chcesz otworzyc: ";
	cin.getline(nazwaPliku, ROZMIAR);

	ifstream plikTekstowy;
	plikTekstowy.open(nazwaPliku, ios::in);

	if (!plikTekstowy.is_open())
	{
		cout << "Nie udalo sie otworzyc pliku o nazwie " << nazwaPliku << ".\n";
		exit(EXIT_FAILURE);
	}

	const int LIMIT = 10000;

	int liczbaWplacajacych;
	bool czyWyswietlono = false;

	plikTekstowy >> liczbaWplacajacych;
	plikTekstowy.get();

	nws *lista = new nws[liczbaWplacajacych];

	for (int i = 0; i < liczbaWplacajacych; i++)
	{
		getline(plikTekstowy, lista[i].nazwisko);
		plikTekstowy >> lista[i].kwota;
		plikTekstowy.get();
	}

	cout << endl << "Nasi Wspaniali Sponsorzy" << endl;
	for (int i = 0; i < liczbaWplacajacych; i++)
		if (lista[i].kwota >= LIMIT)
		{
			cout << lista[i].nazwisko << " " << lista[i].kwota << endl;
			czyWyswietlono = true;
		}

	if (!czyWyswietlono)
		cout << "brak" << endl;
	else
		czyWyswietlono = false;

	cout << endl << "Nasi Sponsorzy" << endl;
	for (int i = 0; i < liczbaWplacajacych; i++)
		if (lista[i].kwota < LIMIT)
		{
			cout << lista[i].nazwisko << " " << lista[i].kwota << endl;
			czyWyswietlono = true;
		}

	if (!czyWyswietlono)
		cout << "brak" << endl;

	delete[] lista;

	plikTekstowy.close();

	return 0;
}