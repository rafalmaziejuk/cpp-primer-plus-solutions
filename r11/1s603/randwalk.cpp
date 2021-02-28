#include <iostream>
#include <cstdlib>   
#include <ctime>
#include <fstream>
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

	srand(time(0));

	ofstream plik;
	plik.open("Polozenie piechura.txt");

	if (!plik.is_open())
	{
		cerr << "Nie udalo sie utworzyc pliku!" << endl;
		exit(EXIT_FAILURE);
	}

    cout << "Podaj dystans do przejscia (k aby zakonczyc): ";
    while (cin >> target)
    {
        cout << "Podaj dlugosc kroku: ";
        if (!(cin >> dstep))
            break;

		plik << "Dystans do przejscia: " << target << ", dlugosc kroku: " << dstep << endl;

        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.set(dstep, direction, 'p');
            result = result + step;

			plik << steps << ": " << result << endl;

            steps++;
        }

        cout << "Po " << steps << " krokach, delikwent osiagnal polozenie:\n";
        cout << result << endl;

		plik << "Po " << steps << " krokach, delikwent osiagnal polozenie:\n";
		plik << result << endl;

        result.polar_mode();

        cout << "czyli\n" << result << endl;
        cout << "Srednia dlugosc kroku pozornego = " << result.magval() / steps << endl;

		plik << "czyli\n" << result << endl;
		plik << "Srednia dlugosc kroku pozornego = " << result.magval() / steps << endl;

        steps = 0;
        result.set(0.0, 0.0);

        cout << "Podaj dystans do przejscia (k aby zakonczyc): ";
    }

    cout << "Koniec!\n";

    return 0;
}
