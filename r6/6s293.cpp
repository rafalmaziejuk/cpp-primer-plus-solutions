#include <iostream>
#include <string>

struct nws
{
	std::string nazwisko;
	double kwota;
};

int main(void)
{
	using namespace std;

	const int LIMIT = 10000;

	int liczbaWplacajacych;
	bool czyWyswietlono = false;

	cout << "Liczba wplacajacych: ";
	(cin >> liczbaWplacajacych).get();
	cout.put('\n');

	nws *lista = new nws[liczbaWplacajacych];

	for (int i = 0; i < liczbaWplacajacych; i++)
	{
		cout << "Nazwisko: ";
		getline(cin, lista[i].nazwisko);
		cout << "Kwota: ";
		(cin >> lista[i].kwota).get();

		cout.put('\n');
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

	return 0;
}