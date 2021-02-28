#include <iostream>
#include <string>
#include <cctype>

bool czy_palindrom(std::string &ciag);

int main(void)
{
	std::string ciagZnakow;

	std::cout << "Podaj ciag znakow: ";
	std::getline(std::cin, ciagZnakow);

	std::cout << (czy_palindrom(ciagZnakow) == true ? "\nPodany ciag jest palindromem!\n" : "\nPodany ciag nie jest palindromem!\n");

	return 0;
}

bool czy_palindrom(std::string &ciag)
{
	for (int i = 0; i < ciag.size(); i++)
	{
		if (!std::isalpha(ciag[i]))
			ciag.erase(i, 1);
		else
		{
			if (std::isupper(ciag[i]))
				ciag[i] = std::tolower(ciag[i]);
		}
	}
		

	std::string temp = ciag;
	int indeks = 0;

	for (int i = temp.size() - 1; i >= 0; i--)
		temp[i] = ciag[indeks++];

	if (temp == ciag)
		return true;
	else
		return false;
}