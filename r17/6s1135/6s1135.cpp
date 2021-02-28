#include <iostream>
#include <fstream>
#include <iomanip>
#include "emp.h"

namespace
{
	void menu(void);
	void eatline(void);
	bool czy_istnieje(const char *nazwaPliku);
}

int main(void)
{
	using namespace std;

	const int MAX = 10;
	 
	abstr_emp *pc[MAX];
	int i = 0;
	char ch;

	ifstream fin("lista pracownikow.dat");

	if (fin.is_open())
	{
		int classtype;
		while ((fin >> classtype).get(ch))
		{
			switch (classtype)
			{
			case abstr_emp::Employee:
				pc[i] = new employee;
				pc[i++]->getall(fin);
				break;

			case abstr_emp::Manager:
				pc[i] = new manager;
				pc[i++]->getall(fin);
				break;

			case abstr_emp::Fink:
				pc[i] = new fink;
				pc[i++]->getall(fin);
				break;

			case abstr_emp::Highfink:
				pc[i] = new highfink;
				pc[i++]->getall(fin);
				break;

			default:
				cerr << "Wystapil blad!" << endl;
				break;
			}
		}

		cout << "Oto lista pracownikow: " << endl;
		for (int j = 0; j < i; j++)
		{
			pc[j]->ShowAll();
			cout << endl;
		}

		fin.close();
	}

	while (i < MAX)
	{
		menu();
		cin >> ch;
		eatline();

		switch (ch)
		{
		case 'a':
			pc[i] = new employee;
			pc[i++]->SetAll();
			break;

		case 'b':
			pc[i] = new manager;
			pc[i++]->SetAll();
			break;

		case 'c':
			pc[i] = new fink;
			pc[i++]->SetAll();
			break;

		case 'd':
			pc[i] = new highfink;
			pc[i++]->SetAll();
			break;

		case 'q':
			break;

		default:
			cout << "Nie ma takiej opcji!" << endl;
			continue;
			break;
		}

		if (ch == 'q')
			break;
	}

	ofstream fout("lista pracownikow.dat");

	if (!fout.is_open())
	{
		cerr << "Nie udalo sie otworzyc pliku \"lista pracownikow.dat\"!\n";
		exit(EXIT_FAILURE);
	}

	cout << "\nOto zaktualizowana lista pracownikow: " << endl;
	for (int j = 0; j < i; j++)
	{
		pc[j]->ShowAll();
		cout << endl;
		pc[j]->writeall(fout);
	}

	fout.close();

	return 0;
}
namespace
{
	void menu(void)
	{
		using std::cout;
		using std::endl;
		using std::left;
		using std::setw;

		cout << "a. Employee" << endl;
		cout << "b. Manager" << endl;
		cout << "c. Fink" << endl;
		cout << "d. Highfink" << endl;
		cout << "q. Koniec" << endl;
		cout << "Twoj wybor:" << endl;
	}

	void eatline(void)
	{
		char ch;

		while (std::cin.get(ch) && ch != '\n')
			continue;
	}

	bool czy_istnieje(const char *nazwaPliku)
	{
		std::fstream plik(nazwaPliku, std::ios_base::in);

		if (plik.is_open())
		{
			plik.close();
			return true;
		}
		else
			return false;
	}
}