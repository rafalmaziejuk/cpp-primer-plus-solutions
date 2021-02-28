#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		std::cerr << "Niepoprawna liczba argumentow!\n";
		exit(EXIT_FAILURE);
	}

	std::fstream plik1(argv[1], std::ios_base::in);
	std::fstream plik2(argv[2], std::ios_base::in);
	std::fstream wynikowy("wynik.txt", std::ios_base::out);

	if (!plik1.is_open() || !plik2.is_open() || !wynikowy.is_open())
	{
		std::cerr << "Nie udalo sie otworzyc plikow!\n";
		exit(EXIT_FAILURE);
	}

	std::string linia;
	bool ktoryPlik = false;

	while (!plik1.eof() && !plik2.eof())
	{
		std::getline(plik1, linia, '\n');
		wynikowy << linia << " ";
		std::getline(plik2, linia, '\n');
		wynikowy << linia << " \n";

		if (plik2.eof())
			ktoryPlik = true;
	}

	if (!ktoryPlik)
	{
		while (std::getline(plik2, linia))
			wynikowy << linia << "\n";
	}
	else
	{
		while (std::getline(plik1, linia))
			wynikowy << linia << "\n";
	}

	plik1.close();
	plik2.close();
	wynikowy.close();

	return 0;
}