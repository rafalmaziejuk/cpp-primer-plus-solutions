#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr << "Niepoprawna liczba argumentow!\n";
		exit(EXIT_FAILURE);
	}

	std::fstream plik(argv[1], std::ios_base::out);
	char znak;

	if (plik.is_open())
	{
		while ((znak = std::cin.get()) && znak != EOF)
			plik << znak;

		plik.close();
	}
	else
	{
		std::cerr << "Tworzenie pliku o podanej nazwie nie powiodlo sie!\n";
		exit(EXIT_FAILURE);
	}

	return 0;
}