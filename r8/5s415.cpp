#include <iostream>

const int ROZMIAR = 5;

template <typename T>
T max5(T tablica[], int rozmiar);

int main(void)
{
	using namespace std;
	
	int tablica1[ROZMIAR] = { 1, 2, 3, 4, 5 };
	double tablica2[ROZMIAR] = { 1.0, 5.0, 6.0, 3.0, 0.0 };

	cout << "Max z pierwszej tablicy to " << max5(tablica1, ROZMIAR) << "." << endl;
	cout.put('\n');
	cout << "Max z drugiej tablicy to " << max5(tablica2, ROZMIAR) << "." << endl;

	return 0;
}

template <typename T>
T max5(T tablica[], int rozmiar)
{
	T max = tablica[0];

	for (int i = 0; i < rozmiar; i++)
		if (tablica[i] > max)
			max = tablica[i];

	return max;
}