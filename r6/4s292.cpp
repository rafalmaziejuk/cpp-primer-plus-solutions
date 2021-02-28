#include <iostream>

const int strsize = 20;

struct zpdw
{
	char imie[strsize];
	char stanowisko[strsize];
	char pseudozpdw[strsize];
	int preferencje;
};

void menu(void);

int main(void)
{
	using namespace std;

	const int ROZMIAR = 3;

	zpdw tablica[ROZMIAR] =
	{
		{ "Wimp Macho", "Mlodszy programista", "MIPS", 0 },
		{ "Raki Rhodes", "Programista", "MAPS", 1 },
		{ "Celia Laiter", "Starszy progamista" , "MEPS", 2 }
	};
	char opcja;

	menu();
	cout << "Wybierz jedna z opcji: ";
	while (cin >> opcja)
	{
		switch (opcja)
		{
			case 'a':
				for (int i = 0; i < 3; i++)
					cout << tablica[i].imie << endl;

				break;

			case 'b':
				for (int i = 0; i < 3; i++)
					cout << tablica[i].stanowisko << endl;

				break;

			case 'c':
				for (int i = 0; i < 3; i++)
					cout << tablica[i].pseudozpdw << endl;

				break;

			case 'd':
				for (int i = 0; i < ROZMIAR; i++)
				{
					if (tablica[i].preferencje == 0)
						cout << tablica[i].imie << endl;
					else if (tablica[i].preferencje == 1)
						cout << tablica[i].stanowisko << endl;
					else if (tablica[i].preferencje == 2)
						cout << tablica[i].pseudozpdw << endl;
				}

				break;

			case'q':
				cout << "Do zobaczania!" << endl;
				exit(EXIT_SUCCESS);
		}

		cout << endl << "Wybierz jedna z opcji: ";
	}

	return 0;
}

void menu(void)
{
	using namespace std;

	cout << "Zakon Programistow Dobrej Woli" << endl;
	cout << "a. lista wedlug imion" << endl;
	cout << "b. lista wedlug stanowisk" << endl;
	cout << "c. lista wedlug pseudonimow" << endl;
	cout << "d. lista wedlug preferencji" << endl;
	cout << "q. koniec" << endl;
}