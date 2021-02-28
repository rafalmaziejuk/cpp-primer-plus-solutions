#include <iostream>
#include "BadDude.h"

int main(void)
{
	using std::cin;
	using std::cout;
	using std::endl;

	const int SIZE = 5;

	Person *ludzie[SIZE];

	int ct;
	for (ct = 0; ct < SIZE; ct++)
	{
		char choice;

		cout << "Podaj kategorie osoby:\n"
			<< "r: rewolwerowiec  p: pokerzysta  "
			<< "z: zly gosc  w:wyjscie\n";
		cin >> choice;

		while (strchr("rpzw", choice) == NULL)
		{
			cout << "Wpisz r, p, z lub w: ";
			cin >> choice;
		}

		if (choice == 'w')
			break;

		switch (choice)
		{
		case 'r': ludzie[ct] = new GunSlinger;
			break;
		case 'p': ludzie[ct] = new PokerPlayer;
			break;
		case 'z': ludzie[ct] = new BadDude;
			break;
		}

		cin.get();
		ludzie[ct]->Ustaw();
		cout.put('\n');
	}

	cout << "\nLista ludzi:\n";
	for (int i = 0; i < ct; i++)
	{
		cout << endl;
		ludzie[i]->Show();
	}

	for (int i = 0; i < ct; i++)
		delete ludzie[i];

	cout << "\nKoniec.\n";

	return 0;
}