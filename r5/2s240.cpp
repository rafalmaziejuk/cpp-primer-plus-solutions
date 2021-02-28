#include <iostream>

int main(void)
{
	using namespace std;

	int liczba;
	int suma = 0;

	cout << "Podawaj liczby, 0 konczy dzialanie." << endl;
	cout << "Twoja liczba: ";

	cin >> liczba;
	while (liczba != 0)
	{
		suma += liczba;
		cout << "Suma podanych dotychczas liczb wynosi " << suma << "." << endl;

		cout << endl << "Twoja liczba: ";
		cin >> liczba;
	}

	cout << "Koncowa suma wynosi " << suma << "." << endl;

	return 0;
}