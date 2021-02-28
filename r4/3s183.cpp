#include <iostream>
#include <cstring>

#define ROZMIAR 30

int main(void)
{
	using namespace std;

	char imie[ROZMIAR], nazwisko[ROZMIAR], wynik[ROZMIAR];

	cout << "Podaj imie: ";
	cin >> imie;

	cout << "Podaj nazwisko: ";
	cin >> nazwisko;

	strcpy(wynik, nazwisko);
	strcat(wynik, ", ");
	strcat(wynik, imie);

	cout << "Oto informacje zestawione w jeden napis: " << wynik << endl;

	return 0;
}