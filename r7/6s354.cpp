#include <iostream>

int fill_array(double tablica[], int rozmiar);
void show_array(const double tablica[], int rozmiar);
void reverse_array(double tablica[], int rozmiar);

int main(void)
{
	using namespace std;

	const int ROZMIAR = 10;
	
	double tablica[ROZMIAR];
	int liczbaElementow;

	liczbaElementow = fill_array(tablica, ROZMIAR);

	cout << endl << "Tablica po wypelnieniu:" << endl;
	show_array(tablica, liczbaElementow);
	
	reverse_array(tablica, liczbaElementow);

	cout << endl << "Tablica po odwroceniu:" << endl;
	show_array(tablica, liczbaElementow);

	return 0;
}

int fill_array(double tablica[], int rozmiar)
{
	int i = 0;

	std::cout << "Podawaj wartosci typu double (podanie wartosci nieliczbowej konczy): ";
	while ((i < 10) && (std::cin >> tablica[i]))
		i++;

	return i;
}

void show_array(const double tablica[], int rozmiar)
{
	for (int i = 0; i < rozmiar; i++)
		std::cout << tablica[i] << " ";

	std::cout.put('\n');
}

void reverse_array(double tablica[], int rozmiar)
{
	double pomocnicznaZmienna;

	for (int i = 0; i < rozmiar / 2; i++)
	{
		pomocnicznaZmienna = tablica[rozmiar - i - 1];
		tablica[rozmiar - i - 1] = tablica[i];
		tablica[i] = pomocnicznaZmienna;
	}
}