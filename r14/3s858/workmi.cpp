#include <iostream>
#include <cstring>
#include "workermi.h"
#include "queuetp.h"

int main(void)
{
	using std::cin;
	using std::cout;
	using std::endl;

	const int SIZE = 5;

	QueueTp<Worker *> kolejka(SIZE);

	int ct;
	for (ct = 0; ct < SIZE; ct++)
	{
		Worker *temp = NULL;
		char choice;

		cout << "Podaj kategorie pracownika:\n"
			<< "k: kelner  p: piosenkarz  "
			<< "s: spiewajacy kelner  w:wyjscie\n";
		cin >> choice;

		while (strchr("kpsw", choice) == NULL)
		{
			cout << "Wpisz k, p, s lub w: ";
			cin >> choice;
		}

		if (choice == 'w')
			break;

		switch (choice)
		{
		case 'k': temp = new Waiter;
			break;
		case 'p': temp = new Singer;
			break;
		case 's': temp = new SingingWaiter;
			break;
		}

		cin.get();
		temp->Set();

		kolejka.enqueue(temp);
	}

	cout << "\nLista pracownikow:\n";
	for (int i = 0; i < ct; i++)
	{
		cout << endl;
		kolejka[i]->Show();
	}

	for (int i = 0; i < ct; i++)
		delete kolejka[i];

	cout << "\nKoniec.\n";

	return 0;
}