#include <iostream>

int main(void)
{
	using namespace std;

	const int ROZMIAR = 10;

	double datki[ROZMIAR];
	double suma = 0.0, srednia;
	int liczbaDatkow = 0;

	cout << "Podawaj datki, wartosc nieliczbowa konczy wprowadzanie: ";
	while (cin >> datki[liczbaDatkow])
	{
		suma += datki[liczbaDatkow];
		liczbaDatkow++;
	}

	srednia = suma / liczbaDatkow;

	cout << endl << "Srednia datkow wynosi " << srednia << "." << endl;

	cout << "Datki wieksze od sredniej to: " << endl;
	for (int i = 0; i < liczbaDatkow; i++)
		if (datki[i] > srednia)
			cout << datki[i] << endl;

	return 0;
}