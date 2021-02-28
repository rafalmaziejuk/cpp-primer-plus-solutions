#include <iostream>

int main(void)
{
	using namespace std;

	int liczbaTwarpow;
	double naleznoscPodatkowa = 0.0;

	cout << "Podaj liczbe zarobionych twarpow: ";
	while ((cin >> liczbaTwarpow) && (liczbaTwarpow >= 0))
	{
		if (liczbaTwarpow <= 5000)
			naleznoscPodatkowa = 0.0;
		else if (liczbaTwarpow > 5000 && liczbaTwarpow <= 15000)
			naleznoscPodatkowa = 5000 * 0.0 + 10000 * 0.10;
		else if (liczbaTwarpow > 15000 && liczbaTwarpow <= 35000)
			naleznoscPodatkowa = 5000 * 0.0 + 10000 * 0.10 + 20000 * 0.15;
		else if (liczbaTwarpow > 35000)
			naleznoscPodatkowa = 5000 * 0.0 + 10000 * 0.10 + 20000 * 0.15 + ((liczbaTwarpow - 35000) * 0.20);

		cout << "Naleznosc podatkowa wynosi " << naleznoscPodatkowa << "." << endl;
		cout << endl << "Podaj liczbe zarobionych twarpow: ";
	}

	return 0;
}