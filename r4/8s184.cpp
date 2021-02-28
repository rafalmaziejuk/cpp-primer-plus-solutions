#include <iostream>
#include <string>

struct Pizza
{
	std::string nazwaFirmy;
	double srednica;
	int waga;
};

int main(void)
{
	using namespace std;

	Pizza *pizza = new Pizza;

	cout << "Podaj srednice pizzy: ";
	cin >> pizza->srednica;

	cin.ignore();

	cout << "Podaj nazwe firmy produkujacej pizze: ";
	getline(cin, pizza->nazwaFirmy);

	cout << "Podaj wage pizzy: ";
	cin >> pizza->waga;

	cout << endl;

	cout << "Nazwa firmy: " << pizza->nazwaFirmy << endl;
	cout << "Srednica: " << pizza->srednica << endl;
	cout << "Waga: " << pizza->waga << endl;

	delete pizza;

	return 0;
}