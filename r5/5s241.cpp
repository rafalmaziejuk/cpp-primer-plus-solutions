#include <iostream>
#include <string>

int main(void)
{
	using namespace std;

	const int ROZMIAR = 12;
	const int LATA = 3;
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

	int liczbaSprzedazy[ROZMIAR][LATA];
	int suma = 0;

	for (int i = 0; i < LATA; i++)
	{
		int rocznaSprzedaz = 0;

		cout << "Rok " << i + 1 << endl;

		for (int j = 0; j < ROZMIAR; j++)
		{
			cout << miesiace[j] << ": ";
			cin >> liczbaSprzedazy[j][i];
			rocznaSprzedaz += liczbaSprzedazy[j][i];
		}

		suma += rocznaSprzedaz;

		cout << "Roczna sprzedaz wynosi " << rocznaSprzedaz << "." << endl << endl;
	}

	cout << endl << "3-roczna sprzedaz wynosi: " << suma << endl;

	return 0;
}