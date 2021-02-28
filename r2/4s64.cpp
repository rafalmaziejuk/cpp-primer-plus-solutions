#include <iostream>

double konwersja_celsjusz_do_fahrenheit(int stopnieCelsjusza);

int main(void)
{
	using namespace std;

	int stopnie;

	cout << "Podaj temperature w stopniach Celsjusza: ";
	cin >> stopnie;

	cout << stopnie << " stopnie Celsjusza to " << konwersja_celsjusz_do_fahrenheit(stopnie) << " stopnie Fahrenheita." << endl;

	return 0;
}

double konwersja_celsjusz_do_fahrenheit(int stopnieCelsjusza)
{
	return 1.8 * stopnieCelsjusza + 32.0;
}