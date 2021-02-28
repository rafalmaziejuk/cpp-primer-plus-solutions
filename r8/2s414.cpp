#include <iostream>
#include <cstring>

const int ROZMIAR = 20;

struct Batonik
{
	char marka[ROZMIAR];
	double waga;
	int liczbaKalorii;
};

void wypelnij_batonik(Batonik &batonik, const char *marka = "Millenium Munch", double waga = 2.85, int liczbaKalorii = 350);
void pokaz_batonik(const Batonik &batonik);

int main(void)
{
	using namespace std;
	
	Batonik batonik1, batonik2;

	wypelnij_batonik(batonik1);
	wypelnij_batonik(batonik2, "Mars", 2.0, 400);

	pokaz_batonik(batonik1);
	pokaz_batonik(batonik2);

	return 0;
}

void wypelnij_batonik(Batonik &batonik, const char *marka, double waga, int liczbaKalorii)
{
	strcpy(batonik.marka, marka);
	batonik.waga = waga;
	batonik.liczbaKalorii = liczbaKalorii;
}

void pokaz_batonik(const Batonik &batonik)
{
	std::cout << "Marka producenta: " << batonik.marka << std::endl;
	std::cout << "Waga: " << batonik.waga << std::endl;
	std::cout << "Liczba kalorii: " << batonik.liczbaKalorii << std::endl;
	std::cout.put('\n');
}