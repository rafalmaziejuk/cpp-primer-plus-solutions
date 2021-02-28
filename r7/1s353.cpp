#include <iostream>

double srednia_harmoniczna(double a, double b);

int main(void)
{
	using namespace std;

	double a, b;

	cout << "Podawaj dwie liczby (jedna z nich bedaca zerem konczy): ";
	while ((cin >> a >> b) && (a != 0 && b != 0))
		cout << endl << "Srednia harmoniczna z liczb " << a << " i " << b << " wynosi " << srednia_harmoniczna(a, b) << endl;

	cout << "Koniec!" << endl;

	return 0;
}

double srednia_harmoniczna(double a, double b)
{
	return 2.0 * a * b / (a + b);
}