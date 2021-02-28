#include <iostream>
#include <string>

int main(void)
{
	using namespace std;

	string imie, nazwisko;
	int ocena, wiek;

	cout << "Jak masz na imie? ";
	getline(cin, imie);

	cout << "Jak sie nazywasz? ";
	cin >> nazwisko;

	cout << "Na jaka ocene zaslugujesz? ";
	cin >> ocena;

	cout << "Ile masz lat? ";
	cin >> wiek;

	cout << "Nazwisko: " << nazwisko << ", " << imie << endl;
	cout << "Ocena: " << ocena - 1 << endl;
	cout << "Wiek: " << wiek << endl;

	return 0;
}