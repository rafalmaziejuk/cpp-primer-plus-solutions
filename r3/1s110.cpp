#include <iostream>

int main(void)
{
	using namespace std;

	const double CAL = 2.54;

	double wzrost, cale;
	int stopy;

	cout << "Podaj wzrost w centymetrach: ";
	cin >> wzrost;

	stopy = static_cast<int>(((wzrost / CAL)) / 12);
	cale = (wzrost - (stopy * 12) * CAL) / CAL;

	cout << "Wzrost w stopach i calach to " << stopy << " stop i " << cale << " cali." << endl;

	return 0;
}