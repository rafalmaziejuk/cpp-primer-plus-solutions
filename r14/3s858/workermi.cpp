#include <iostream>
#include "workermi.h"

using std::cout;
using std::cin;
using std::endl;

Worker::~Worker(void)
{

}

void Worker::Data(void) const
{
	cout << "Imie i nazwisko: " << fullname << endl;
	cout << "Numer identyfikacyjny: " << id << endl;
}

void Worker::Get(void)
{
	std::getline(cin, fullname);

	cout << "Podaj numer identyfikacyjny: ";
	cin >> id;

	while (cin.get() != '\n')
		continue;
}

void Waiter::Set(void)
{
	cout << "Podaj imie i nazwisko kelnera: ";
	Worker::Get();
	Get();
}

void Waiter::Show(void) const
{
	cout << "Kategoria: kelner\n";
	Worker::Data();
	Data();
}

void Waiter::Data(void) const
{
	cout << "Elegancja: " << panache << endl;
}

void Waiter::Get(void)
{
	cout << "Podaj poziom elegancji kelnera: ";
	cin >> panache;

	while (cin.get() != '\n')
		continue;
}

const char *Singer::pv[Singer::Vtypes] =
{
	"inna", "alt", "kontralt",
	"sopran", "bas", "baryton", 
	"tenor"
};

void Singer::Set(void)
{
	cout << "Podaj imie i nazwisko piosenkarza: ";
	Worker::Get();
	Get();
}

void Singer::Show(void) const
{
	cout << "Kategoria: piosenkarz\n";
	Worker::Data();
	Data();
}

void Singer::Data(void) const
{
	cout << "Skala glosu: " << pv[voice] << endl;
}

void Singer::Get(void)
{
	cout << "Podaj numer dla skali glosu piosenkarza:\n";

	int i;
	for (i = 0; i < Vtypes; i++)
	{
		cout << i << ": " << pv[i] << "   ";

		if (i % 4 == 3)
			cout << endl;
	}

	if (i % 4 != 0)
		cout << '\n';

	cin >> voice;

	while (cin.get() != '\n')
		continue;
}

void SingingWaiter::Data(void) const
{
	Singer::Data();
	Waiter::Data();
}

void SingingWaiter::Get(void)
{
	Waiter::Get();
	Singer::Get();
}

void SingingWaiter::Set(void)
{
	cout << "Podaj imie i nazwisko spiewajacego kelnera: ";
	Worker::Get();
	Get();
}

void SingingWaiter::Show(void) const
{
	cout << "Kategoria: spiewajacy kelner\n";
	Worker::Data();
	Data();
}