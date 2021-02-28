#include <iostream>

double konwersja_lata_swietlne_do_jednostki_astronomiczne(double lataSwietlne);

int main(void)
{
	using namespace std;

	double odleglosc;

	cout << "Podaj liczbe lat swietlnych: ";
	cin >> odleglosc;

	cout << odleglosc << " lat swietlnych = " << konwersja_lata_swietlne_do_jednostki_astronomiczne(odleglosc) << " jednostek astronomicznych." << endl;

	return 0;
}

double konwersja_lata_swietlne_do_jednostki_astronomiczne(double lataSwietlne)
{
	return lataSwietlne * 63240;
}