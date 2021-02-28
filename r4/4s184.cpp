#include <iostream>
#include <string>

int main(void)
{
	using namespace std;

	string imie, nazwisko, wynik;

	cout << "Podaj imie: ";
	cin >> imie;

	cout << "Podaj nazwisko: ";
	cin >> nazwisko;

	wynik = nazwisko + ", " + imie;

	cout << "Oto informacje zestawione w jeden napis: " << wynik << endl;

	return 0;
}