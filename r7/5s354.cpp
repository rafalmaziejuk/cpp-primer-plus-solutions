#include <iostream>

long long int silnia(int n);

int main(void)
{
	using namespace std;

	int liczba;

	cout << "Podaj liczbe, z ktorej chcesz obliczyc silnie (ujemna liczba konczy): ";
	while ((cin >> liczba) && liczba >= 0)
		cout << endl << "Silnia z " << liczba << " wynosi " << silnia(liczba) << "." << endl << endl;

	cout << endl << "Koniec!" << endl;

	return 0;
}

long long int silnia(int n)
{
	if (n == 0)
		return 1;
	else if (n > 0)
		return n * silnia(n - 1);
	else 
		return 1;
}