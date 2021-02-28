#include <iostream>

#define ROZMIAR 20

int main(void)
{
	using namespace std;

	char imie[ROZMIAR];
	char nazwisko[ROZMIAR];
	int ocena, wiek;

	cout << "Jak masz na imie? ";
	cin.getline(imie, ROZMIAR);

	cout << "Jak sie nazywasz? ";
	cin.getline(nazwisko, ROZMIAR);

	cout << "Na jaka ocene zaslugujesz? ";
	cin >> ocena;

	cout << "Ile masz lat? ";
	cin >> wiek;

	cout << "Nazwisko: " << nazwisko << ", " << imie << endl;
	cout << "Ocena: " << ocena - 1 << endl;
	cout << "Wiek: " << wiek << endl;

	return 0;
}