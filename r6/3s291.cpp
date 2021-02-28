#include <iostream>

void menu(void);

int main(void)
{
	using namespace std;

	char opcja;

	menu();

	cin >> opcja;
	while (opcja != 'r' && opcja != 'p' && opcja != 'd' && opcja != 'g')
	{
		cout << "Prosze podac litere r, p, d lub g: ";
		cin >> opcja;
	}

	switch (opcja)
	{
		case 'r':
			cout << "roslinozerca" << endl;
			break;

		case 'p':
			cout << "pianista" << endl;
			break;

		case 'd':
			cout << "drzewo" << endl;
			break;

		case 'g':
			cout << "gra" << endl;
			break;
	}

	return 0;
}

void menu(void)
{
	using namespace std;

	cout << "r) roslinozerca" << endl;
	cout << "p) pianista" << endl;
	cout << "d) drzewo" << endl;
	cout << "g) gra" << endl;
	cout << "Prosze podac litere r, p, d lub g: ";
}