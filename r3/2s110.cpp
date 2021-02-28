#include <iostream>

int main(void)
{
	using namespace std;

	const int STOPA = 12;
	const double METR = 0.0254;
	const double KILOGRAM = 2.2;

	double stopy, cale, wzrost;
	double funty, waga;

	cout << "Podaj wzrost w stopach i calach: ";
	cin >> stopy >> cale;

	cout << "Podaj wage w funtach: ";
	cin >> funty;

	wzrost = (stopy * STOPA + cale) * METR;
	waga = funty / KILOGRAM;

	cout << "Twoje BMI wynosi " << waga / (wzrost * wzrost) << ".\n";

	return 0;
}