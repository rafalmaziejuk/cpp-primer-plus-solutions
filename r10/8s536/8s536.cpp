#include "list.h"

namespace
{
	void menu(void);
	void pokaz(Item &item);
}

int main(void)
{
	using std::cout;
	using std::endl;
	using std::cin;

	List lista;
	bool czyKontynuowac = true;
	int element;
	char opcja;

	menu();
	while (czyKontynuowac)
	{
		cin >> opcja;
		cout.put('\n');

		switch (opcja)
		{
		case '1':
			cout << "Podaj element: ";
			cin >> element;

			if (lista.isfull())
				cout << "Lista jest pelna!" << endl;
			else
			{
				lista.push(element);
				cout << "Dodano element: " << element << endl;
			}

			break;

		case '2':
			if (lista.isempty())
				cout << "Lista jest pusta!" << endl;
			else
			{
				lista.pop(element);
				cout << "Zdjeto element: " << element << endl;
			}

			break;

		case '3':
			if (lista.isempty())
				cout << "Lista jest pusta!" << endl;

			break;

		case '4':
			if (lista.isfull())
				cout << "Lista jest pelna!" << endl;

			break;

		case '5':
			if (!lista.isempty())
				lista.visit(pokaz);

			break;

		case '6':
			czyKontynuowac = false;
			break;
		}

		cout.put('\n');

		if (czyKontynuowac)
			menu();
	}

	return 0;
} 

namespace
{
	void menu(void)
	{
		using std::cout;
		using std::endl;

		cout << "1. Dodaj element" << endl;
		cout << "2. Zdejmij element" << endl;
		cout << "3. Czy pusta" << endl;
		cout << "4. Czy pelna" << endl;
		cout << "5. Odwiedz elementy" << endl;
		cout << "6. Wyjdz" << endl;
		cout << "Twoj wybor: ";
	}

	void pokaz(Item &item)
	{
		std::cout << item << std::endl;
	}
}