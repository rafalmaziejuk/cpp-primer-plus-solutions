#include <iostream>

void wyswietl_czas(int godziny, int minuty);

int main(void)
{
	using namespace std;

	int godziny, minuty;

	cout << "Podaj liczbe godzin: ";
	cin >> godziny;

	cout << "Podaj liczbe minut: ";
	cin >> minuty;
	
	wyswietl_czas(godziny, minuty);

	return 0;
}

void wyswietl_czas(int godziny, int minuty)
{
	using namespace std;

	cout << "Czas: " << godziny << ":" << minuty << endl;
}