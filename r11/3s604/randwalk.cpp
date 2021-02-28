#include <iostream>
#include <cstdlib>   
#include <ctime>
#include <fstream>
#include <limits.h>
#include "vect.h"

int main(void)
{
    using namespace std;
    using VECTOR::Vector;

	Vector step;
	Vector result(0.0, 0.0);
    double direction;
	double target;
	double dstep;
    unsigned long steps = 0;
	
	int N;
	double suma = 0.0;
	unsigned long maksimumKrokow = 0;
	unsigned long minimumKrokow = ULONG_MAX;

	srand(time(0));

    cout << "Podaj dystans do przejscia (k aby zakonczyc): ";
    while (cin >> target)
    {
        cout << "Podaj dlugosc kroku: ";
        if (!(cin >> dstep))
            break;

		cout << "Podaj liczbe prob: ";
		if (!(cin >> N))
			break;

		for (int i = 0; i < N; i++)
		{
			while (result.magval() < target)
			{
				direction = rand() % 360;
				step.set(dstep, direction, 'p');
				result = result + step;
				steps++;
			}

			suma += steps;

			if (steps < minimumKrokow)
				minimumKrokow = steps;

			if (steps > maksimumKrokow)
				maksimumKrokow = steps;

			steps = 0;
			result.set(0.0, 0.0);
		}
        
		cout << "Dystans: " << target << ", dlugosc kroku: " << dstep << ", liczba prob: " << N << endl;
		cout << "Srednia liczby wykonanych krokow: " << suma / N << endl;
		cout << "Minimum wykonanych krokow: " << minimumKrokow << endl;
		cout << "Maksimum wykonanych krokow: " << maksimumKrokow << endl << endl;

		suma = 0.0;
		minimumKrokow = ULONG_MAX;
		maksimumKrokow = 0;
        steps = 0;
        result.set(0.0, 0.0);

        cout << "Podaj dystans do przejscia (k aby zakonczyc): ";
    }

    cout << "Koniec!\n";

    return 0;
}
