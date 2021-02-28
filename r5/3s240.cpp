#include <iostream>

int main(void)
{
	using namespace std;

	double dafne, cleo;
	int rok = 0;

	dafne = cleo = 100.0;

	do
	{
		dafne += (100.0 * 0.10);
		cleo += (cleo * 0.05);
		rok++;
	} while (dafne > cleo);

	cout << "Inwestycje Cleo przerosna inwestycje Dafne po " << rok << " latach." << endl;
	cout << "Dafne: " << dafne << endl;
	cout << "Cleo: " << cleo << endl;

	return 0;
}