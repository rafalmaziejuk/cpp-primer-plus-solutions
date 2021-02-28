#include <iostream>
#include <string>

struct Batonik
{
	std::string marka;
	double waga;
	int liczbaKalorii;
};

int main(void)
{
	using namespace std;

	const int ROZMIAR = 3;

	Batonik *snacks = new Batonik[ROZMIAR];

	snacks[0] =
	{
		"Mocha Munch",
		2.3,
		350
	};

	snacks[1] =
	{
		"Snickers",
		1.5,
		400
	};

	snacks[2] =
	{
		"Mars",
		5.2,
		505
	};

	for (int i = 0; i < ROZMIAR; i++)
	{
		cout << "Marka: " << snacks[i].marka << endl;
		cout << "Waga: " << snacks[i].waga << endl;
		cout << "Liczba kalorii: " << snacks[i].liczbaKalorii << endl;
		cout << endl;
	}

	return 0;
}