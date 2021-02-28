#include <iostream>

double * fill_array(double *poczatek, double *koniec);
void show_array(double *poczatek, double *koniec);
void revalue(double r, double *poczatek, double *koniec);

int main(void)
{
	using namespace std;
	
	const int Max = 5;

	double properties[Max];
	double *ostatniElement = fill_array(properties, properties + Max);
	double factor;

	show_array(properties, ostatniElement);
	
	cout << endl << "Podaj czynnik zmiany wartosci: ";
	cin >> factor;
	revalue(factor, properties, ostatniElement);

	show_array(properties, ostatniElement);

	cout << endl << "Gotowe.\n";
	return 0;
}

double * fill_array(double *poczatek, double *koniec)
{
	using namespace std;

	double temp;
	int numer = 0;
	double *i;

	for (i = poczatek; i != koniec; i++)
	{
		cout << "Podaj wartosc nr " << (numer++ + 1) << ": ";
		cin >> temp;

		if (!cin)    
		{
			cin.clear();

			while (cin.get() != '\n')
				continue;

			cout << endl << "Bledne dane, wprowadzanie danych przerwane.\n";
			break;
		}
		else if (temp < 0)     
			break;

		*i = temp;
	}

	return i;
}

void show_array(double *poczatek, double *koniec)
{
	using namespace std;

	int numer = 0;

	cout.put('\n');
	
	for (double *i = poczatek; i != koniec; i++)
	{
		cout << "Nieruchomosc nr " << (numer++ + 1) << ": ";
		cout << *i << endl;
	}
}

void revalue(double r, double *poczatek, double *koniec)
{
	for (double *i = poczatek; i != koniec; i++)
		*i *= r;
}