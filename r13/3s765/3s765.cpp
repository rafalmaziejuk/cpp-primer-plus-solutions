#include <iostream>
#include <string>
#include "dma.h"

namespace
{
	void menu(void);
}

int main(void)
{
	using std::cin;
	using std::cout;
	using std::endl;

	const int ROZMIAR = 3;
	const int DLUGOSC = 40;

	Base *obiekty[ROZMIAR];
	char opcja;

	for (int i = 0; i < ROZMIAR; i++)
	{
		char etykieta[DLUGOSC];
		int klasa;

		menu();
		(cin >> opcja).get();

		cout << endl;

		cout << "Podaj etykiete: ";
		cin.getline(etykieta, DLUGOSC);

		cout << "Podaj klase: ";
		(cin >> klasa).get();

		switch (opcja)
		{
		case '1':
			obiekty[i] = new baseDMA(etykieta, klasa);
			break;

		case '2':
			char kolor[DLUGOSC];

			cout << "Podaj kolor: ";
			cin.getline(kolor, DLUGOSC);

			obiekty[i] = new lacksDMA(kolor, etykieta, klasa);
			break;

		case '3':
			char styl[DLUGOSC];

			cout << "Podaj styl: ";
			cin.getline(styl, DLUGOSC);

			obiekty[i] = new hasDMA(styl, etykieta, klasa);
			break;
		}

		cout << endl;
	}

	cout << endl;

	for (int i = 0; i < ROZMIAR; i++)
	{
		obiekty[i]->View();
		cout << endl;
	}

	for (int i = 0; i < ROZMIAR; i++)
		delete obiekty[i];

	cout << "Gotowe.\n";

	return 0;
}

namespace
{
	void menu(void)
	{
		std::cout << "1. baseDMA" << std::endl;
		std::cout << "2. lacksDMA" << std::endl;
		std::cout << "3. hasDMA" << std::endl;
		std::cout << "Jaki obiekt chcesz stworzyc? ";
	}
}