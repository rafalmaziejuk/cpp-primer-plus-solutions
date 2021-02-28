#include <iostream>

int main(void)
{
	using namespace std;

	int a, b;
	int suma = 0;

	cout << "Podaj dwie liczby calkowite po spacji: ";
	cin >> a >> b;

	for (int i = a; i <= b; i++)
		suma += i;

	cout << "Suma liczb miedzy " << a << " i " << b << " wynosi " << suma << "." << endl;

	return 0;
}