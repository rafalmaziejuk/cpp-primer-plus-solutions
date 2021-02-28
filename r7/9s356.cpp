#include <iostream>

double calculate(double a, double b, double(*dzialanie) (double x, double y));
double add(double a, double b);
double substract(double a, double b);
double multiply(double a, double b);

int main(void)
{
	using namespace std;
	
	const int ROZMIAR = 3;

	double a, b;
	double(*tablicaFunkcji[ROZMIAR]) (double, double) =
	{
		add,
		substract,
		multiply
	};

	cout << "Podawaj dwie liczby zmiennoprzecinkowe po spacji (podanie wartosci nieliczbowej konczy): ";
	while (cin >> a >> b)
	{
		for (int i = 0; i < ROZMIAR; i++)
		{
			switch (i)
			{
			case 0:
				cout << a << " + " << b << " = ";
				break;

			case 1:
				cout << a << " - " << b << " = ";
				break;

			case 2:
				cout << a << " * " << b << " = ";
				break;
			}

			cout << tablicaFunkcji[i](a, b) << endl;
		}

		cout << endl << "Podaj kolejne dwie liczby po spacji: ";
	}

	cout << "Gotowe.\n";

	return 0;
}

double calculate(double a, double b, double(*dzialanie) (double x, double y))
{
	return dzialanie(a, b);
}

double add(double a, double b)
{
	return a + b;
}

double substract(double a, double b)
{
	return a - b;
}

double multiply(double a, double b)
{
	return a * b;
}