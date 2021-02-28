#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool porownaj(const std::string &napis1, const std::string &napis2);

int main(void)
{
	std::vector<std::string> Bolek;
	std::vector<std::string> Lolek;
	std::vector<std::string> listaGosci;
	std::string gosc;

	std::cout << "Bolku podaj liste zaproszonych przyjaciol (\"koniec\" konczy wpisywanie)" << std::endl;
	while (std::getline(std::cin, gosc) && gosc != "koniec")
		Bolek.push_back(gosc);

	std::sort(Bolek.begin(), Bolek.end(), porownaj);

	std::cout << "\nLista zaproszonych przyjaciol Bolka\n";
	for (int i = 0; i < Bolek.size(); i++)
		std::cout << Bolek[i] << std::endl;

	std::cout.put('\n');

	std::cout << "Lolku podaj liste zaproszonych przyjaciol (\"koniec\" konczy wpisywanie)" << std::endl;
	while (std::getline(std::cin, gosc) && gosc != "koniec")
		Lolek.push_back(gosc);

	std::sort(Lolek.begin(), Lolek.end(), porownaj);

	std::cout << "\nLista zaproszonych przyjaciol Lolka\n";
	for (int i = 0; i < Lolek.size(); i++)
		std::cout << Lolek[i] << std::endl;

	std::cout.put('\n');
	
	listaGosci = Bolek;
	
	for (int i = 0; i < Lolek.size(); i++)
		listaGosci.push_back(Lolek[i]);

	std::sort(listaGosci.begin(), listaGosci.end(), porownaj);
	
	int licznik = 0;
	std::vector<std::string>::iterator it = std::unique(listaGosci.begin(), listaGosci.end());
	for (std::vector<std::string>::iterator i = listaGosci.begin(); i != it; i++)
		licznik++;

	listaGosci.resize(licznik);

	std::cout << "\nOstateczna lista gosci\n";
	for (int i = 0; i < listaGosci.size(); i++)
		std::cout << listaGosci[i] << std::endl;

	return 0;
}

bool porownaj(const std::string &napis1, const std::string &napis2)
{
	return napis1 < napis2;
}