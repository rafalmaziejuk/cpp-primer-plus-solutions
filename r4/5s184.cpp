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

	Batonik snack = 
	{
		"Mocha Munch",
		2.3,
		350
	};

	cout << "Marka: " << snack.marka << endl;
	cout << "Waga: " << snack.waga << endl;
	cout << "Liczba kalorii: " << snack.liczbaKalorii << endl;

	return 0;
}