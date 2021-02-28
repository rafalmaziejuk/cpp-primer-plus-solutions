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

	Batonik snacks[ROZMIAR] =
	{
		{
			"Mocha Munch",
			2.3,
			350
		},
		{
			"Snickers",
			1.5,
			400
		},
		{
			"Mars",
			5.2,
			505
		}
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