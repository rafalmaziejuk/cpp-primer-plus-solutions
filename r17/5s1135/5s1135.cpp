#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

bool porownaj(const std::string &napis1, const std::string &napis2);

int main(void)
{
	std::fstream bolek("bolek.dat", std::ios_base::in);
	if (!bolek.is_open())
	{
		std::cerr << "Nie udalo sie otworzyc pliku bolek.dat!\n";
		exit(EXIT_FAILURE);
	}

	std::fstream lolek("lolek.dat", std::ios_base::in);
	if (!bolek.is_open())
	{
		std::cerr << "Nie udalo sie otworzyc pliku lolek.dat!\n";
		exit(EXIT_FAILURE);
	}

	std::vector<std::string> listaBolka;
	std::vector<std::string> listaLolka;
	std::string gosc;

	while (std::getline(bolek, gosc, '\n'))
		listaBolka.push_back(gosc);

	std::sort(listaBolka.begin(), listaBolka.end(), porownaj);

	std::cout << "Lista zaproszonych przyjaciol Bolka\n";
	for (int i = 0; i < listaBolka.size(); i++)
		std::cout << listaBolka[i] << std::endl;

	bolek.close();
	std::cout.put('\n');

	while (std::getline(lolek, gosc, '\n'))
		listaLolka.push_back(gosc);

	std::sort(listaLolka.begin(), listaLolka.end(), porownaj);

	std::cout << "\nLista zaproszonych przyjaciol Lolka\n";
	for (int i = 0; i < listaLolka.size(); i++)
		std::cout << listaLolka[i] << std::endl;

	lolek.close();
	std::cout.put('\n');

	std::vector<std::string> listaGosci(listaBolka.size() + listaLolka.size());
	std::copy(listaBolka.begin(), listaBolka.end(), listaGosci.begin());
	std::copy(listaLolka.begin(), listaLolka.end(), listaGosci.begin() + listaBolka.size());

	std::sort(listaGosci.begin(), listaGosci.end(), porownaj);
	
	int licznik = 0;
	std::vector<std::string>::iterator it = std::unique(listaGosci.begin(), listaGosci.end());
	for (std::vector<std::string>::iterator i = listaGosci.begin(); i != it; i++)
		licznik++;

	listaGosci.resize(licznik);

	std::cout << "\nOstateczna lista gosci\n";
	for (int i = 0; i < listaGosci.size(); i++)
		std::cout << listaGosci[i] << std::endl;

	std::fstream bolilol("bolilol.dat", std::ios_base::out);
	if (!bolilol.is_open())
	{
		std::cerr << "Nie udalo sie utworzyc pliku bolilol.dat!\n";
		exit(EXIT_FAILURE);
	}

	for (int i = 0; i < listaGosci.size(); i++)
	{
		bolilol << listaGosci[i];

		if (i < listaGosci.size() - 1)
			bolilol.put('\n');
	}	

	bolilol.close();

	return 0;
}

bool porownaj(const std::string &napis1, const std::string &napis2)
{
	return napis1 < napis2;
}