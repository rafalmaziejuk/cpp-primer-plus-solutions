#include <iostream>
#include <cstring>

#define ROZMIAR 20

int main(void)
{
	using namespace std;

	char slowo[ROZMIAR];
	int licznikSlow = 0;

	cout << "Podawaj slowa (kiedy skonczysz, napisz \"gotowe\")" << endl;
	while ((cin >> slowo) && (strcmp(slowo, "gotowe") != 0))
		licznikSlow++;

	cout << "Podano " << licznikSlow << " slow." << endl;

	return 0;
}