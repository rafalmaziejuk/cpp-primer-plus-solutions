#include <iostream>
#include "stack.h"

double suma;

int main(void)
{
	const int ROZMIAR = 3;

	Stack stosKlientow;
	customer klienci[ROZMIAR] =
	{
		{ "klient1", 55.0 },
		{ "klient2", 155.0 },
		{ "klient3", 255.0 }
	};

	for (int i = 0; i < ROZMIAR; i++)
		stosKlientow.push(klienci[i]);

	for (int i = 0; i < ROZMIAR; i++)
		stosKlientow.pop(klienci[i]);

	return 0;
}