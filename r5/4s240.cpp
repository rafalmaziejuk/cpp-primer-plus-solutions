#include <iostream>
#include <string>

int main(void)
{
	using namespace std;

	const int ROZMIAR = 12;
	const string miesiace[ROZMIAR] =
	{
		"Styczen",
		"Luty",
		"Marzec",
		"Kwiecien",
		"Maj",
		"Czerwiec",
		"Lipiec",
		"Sierpien",
		"Wrzesien",
		"Pazdziernik",
		"Listopad",
		"Grudzien"
	};

	int liczbaSprzedazy[ROZMIAR];
	int suma = 0;

	for (int i = 0; i < ROZMIAR; i++)
	{
		cout << miesiace[i] << ": ";
		cin >> liczbaSprzedazy[i];
		suma += liczbaSprzedazy[i];
	}

	cout << endl << "Roczna sprzedaz wynosi: " << suma << endl;

	return 0;
}