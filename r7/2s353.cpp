#include <iostream>

int wprowadzanie_danych(int wyniki[], int rozmiar);
void wyswietlanie_danych(const int wyniki[], int rozmiar);
double srednia_z_wynikow(const int wyniki[], int rozmiar);

int main(void)
{
	using namespace std;

	const int ROZMIAR = 10;

	int wynikiGolfowe[ROZMIAR];
	int liczbaWynikow = wprowadzanie_danych(wynikiGolfowe, ROZMIAR);
	
	wyswietlanie_danych(wynikiGolfowe, liczbaWynikow);
	cout << endl << "Srednia wynosi " << srednia_z_wynikow(wynikiGolfowe, liczbaWynikow) << "." << endl;

	return 0;
}

int wprowadzanie_danych(int wyniki[], int rozmiar)
{
	int i = 0;

	std::cout << "Podawaj wyniki golfowe (podanie wartosci nieliczbowej konczy): ";
	while ((i < 10) && (std::cin >> wyniki[i]))
		i++;
	
	return i;
}

void wyswietlanie_danych(const int wyniki[], int rozmiar)
{
	std::cout << std::endl << "Wyniki golfowe" << std::endl;

	for (int i = 0; i < rozmiar; i++)
		std::cout << wyniki[i] << " ";

	std::cout.put('\n');
}

double srednia_z_wynikow(const int wyniki[], int rozmiar)
{
	int suma = 0;
	
	for (int i = 0; i < rozmiar; i++)
		suma += wyniki[i];

	return suma / rozmiar;
}