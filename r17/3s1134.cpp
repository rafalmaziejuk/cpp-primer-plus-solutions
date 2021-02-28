#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		std::cerr << "Niepoprawna liczba argumentow!\n";
		exit(EXIT_FAILURE);
	}

	std::fstream oryginal(argv[1], std::ios_base::in);

	if (oryginal.is_open())
	{
		std::fstream kopia(argv[2], std::ios_base::out);
		char znak;

		if (kopia.is_open())
		{
			while ((znak = oryginal.get()) && znak != EOF)
				kopia << znak;

			kopia.close();
		}

		oryginal.close();
	}
	else
	{
		std::cerr << "Nie udalo sie otworzyc plikow!\n";
		exit(EXIT_FAILURE);
	}

	return 0;
}