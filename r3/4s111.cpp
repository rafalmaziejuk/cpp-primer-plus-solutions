#include <iostream>

int main(void)
{
	using namespace std;

	const int GODZINY = 24;
	const int MINUTY = 60;
	const int SEKUNDY = 60;

	long liczbaSekund, sekundy;
	int dni, godziny, minuty;

	cout << "Podaj liczbe sekund: ";
	cin >> liczbaSekund;

	sekundy = liczbaSekund;

	dni = sekundy / SEKUNDY / MINUTY / GODZINY;
	sekundy = sekundy - (dni * SEKUNDY * MINUTY * GODZINY);

	godziny = sekundy / SEKUNDY / MINUTY;
	sekundy = sekundy - (godziny * SEKUNDY * MINUTY);

	minuty = sekundy / SEKUNDY;
	sekundy = sekundy - (minuty * SEKUNDY);

	cout << liczbaSekund << " sekund = " << dni << " dni, " << godziny << " godzin, " << minuty << " minut, " << sekundy << " sekund." << endl;

	return 0;
}