#include <iostream>
#include <string>
#include <cctype>

int main(void)
{
	using namespace std;

	const int ROZMIAR = 6;

	char samogloski[ROZMIAR] = { 'a', 'e', 'i', 'o', 'u', 'y' };
	string slowo;
	int liczbaSpolglosek = 0, liczbaSamoglosek = 0, inne = 0;

	cout << "Podawaj slowa (pojedyncze q konczy):\n";
	while ((cin >> slowo) && (slowo != "q"))
	{
		if (isalpha(slowo[0]))
		{
			bool czySamogloska = false;

			for (int i = 0; i < ROZMIAR; i++)
				if (slowo[0] == samogloski[i])
				{
					liczbaSamoglosek++;
					czySamogloska = true;
					break;
				}

			if (czySamogloska == false)
				liczbaSpolglosek++;
		}
		else 
			inne++;
	}

	cout << endl << liczbaSpolglosek << " slow zaczyna sie od spolglosek.\n";
	cout << liczbaSamoglosek << " slow zaczyna sie od samoglosek.\n";
	cout << inne << " slow nie zalicza sie do zadnej z tych kategorii.\n";

	return 0;
}