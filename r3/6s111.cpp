#include <iostream>

int main(void)
{
	using namespace std;

	const double GALON = 3.875;
	const double MILA = 62.14;

	double litry;

	cout << "Ile litrow benzyny zuzyto na 100km: ";
	cin >> litry;

	cout << "Mil na galon: " << MILA / (litry / GALON);

	return 0;
}