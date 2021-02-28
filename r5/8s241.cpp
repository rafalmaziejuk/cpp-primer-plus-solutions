#include <iostream>
#include <string>

int main(void)
{
	using namespace std;

	string slowo;
	int licznikSlow = 0;

	cout << "Podawaj slowa (kiedy skonczysz, napisz \"gotowe\")" << endl;
	while ((cin >> slowo) && (slowo != "gotowe"))
		licznikSlow++;

	cout << "Podano " << licznikSlow << " slow." << endl;

	return 0;
}