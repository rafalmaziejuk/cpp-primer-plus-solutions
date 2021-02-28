#include <iostream>

const double MINUTA = 60.0;
const double STOPIEN = MINUTA * 60.0;

double dlugosc_w_formacie_dziesietnym(double stopnie, double minuty, double sekundy);

int main(void)
{
	using namespace std;

	double stopnie, minuty, sekundy;

	cout << "Podaj dlugosc w stopniach, minutach i sekundach:\n";
	cout << "Najpierw podaj stopnie: ";
	cin >> stopnie;

	cout << "Nastepnie podaj minuty stopnia luku: ";
	cin >> minuty;

	cout << "Na koniec podaj sekundy luku: ";
	cin >> sekundy;

	cout << stopnie << " stopnia, " << minuty << " minut, " << sekundy << " sekund = " << dlugosc_w_formacie_dziesietnym(stopnie, minuty, sekundy) << " stopni\n";

	return 0;
}

double dlugosc_w_formacie_dziesietnym(double stopnie, double minuty, double sekundy)
{
	double wynik;

	wynik = sekundy + (minuty * MINUTA) + (stopnie * STOPIEN);
	wynik /= STOPIEN;

	return wynik;
}