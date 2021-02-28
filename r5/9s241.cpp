#include <iostream>

int main(void)
{
	using namespace std;

	int liczbaWierszy;
	int liczbaGwiazdek = 1;

	cout << "Podaj liczbe wierszy: ";
	cin >> liczbaWierszy;

	for (int i = 0; i < liczbaWierszy; i++)
	{
		for (int j = liczbaWierszy - i - 1; j > 0; j--)
			cout.put(' ');

		for (int j = 0; j < liczbaGwiazdek; j++)
			cout.put('*');

		cout.put('\n');
		liczbaGwiazdek++;
	}

	return 0;
}