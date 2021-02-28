#include <iostream>
#include <cctype>
#include "stack.h"

int main(void)
{
	using namespace std;

	Stack st;
	char ch;
	unsigned long po;

	cout << "Nacisnij D aby wprowadzic deklaracje, \n" << "P aby przetworzyc deklaracje lub K aby zakonczyc.\n";
	while (cin >> ch && toupper(ch) != 'K')
	{
		while (cin.get() != '\n')
			continue;

		if (!isalpha(ch))
		{
			cout << '\a';
			continue;
		}

		switch (ch)
		{
		case 'D':
		case 'd': 
			cout << "\nPodaj numer nowej deklaracji: ";
			cin >> po;

			if (st.isfull())
				cout << "\nStos pelen!\n";
			else
				st.push(po);

			break;

		case 'P':
		case 'p': 
			if (st.isempty())
				cout << "\nStos pusty!\n";
			else 
			{
				st.pop(po);
				cout << "\nDeklaracja nr " << po << " zdjeta\n";
			}

			break;
		}

		cout << "\nNacisnij D aby wprowadzic deklaracje, \n" << "P aby przetworzyc deklaracje lub K aby zakonczyc.\n";
	}

	Stack stos = st;
	Stack kopia(st);

	cout.put('\n');

	while (!stos.isempty())
	{
		stos.pop(po);
		cout << "Deklaracja nr " << po << " zdjeta\n";
	}
		
	cout.put('\n');

	while (!kopia.isempty())
	{
		kopia.pop(po);
		cout << "Deklaracja nr " << po << " zdjeta\n";
	}

	cout << "\nFajrant!\n";

	return 0;
}