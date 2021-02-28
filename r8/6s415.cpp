#include <iostream>
#include <cstring>

template <typename T>
T maxn(T tablica[], int rozmiar);

template <> const char * maxn<const char *>(const char *tablica[], int rozmiar);

int main(void)
{
	using namespace std;
	
	int tablica1[5] = { 1, 2, 3, 4, 5 };
	double tablica2[4] = { 1.0, 5.0, 6.0, 3.0 };

	cout << "Max z pierwszej tablicy to " << maxn(tablica1, 5) << "." << endl;
	cout.put('\n');
	cout << "Max z drugiej tablicy to " << maxn(tablica2, 4) << "." << endl;
	cout.put('\n');

	const char *tablica3[5] =
	{
		"123",
		"123456",
		"000000",
		"12",
		"1"
	};

	for (int i = 0; i < 5; i++)
		cout << tablica3[i] << endl;

	cout << endl << "Najdluzszy lancuch z powyzszych to " << maxn(tablica3, 5) << "." << endl;

	return 0;
}

template <typename T>
T maxn(T tablica[], int rozmiar)
{
	T max = tablica[0];

	for (int i = 0; i < rozmiar; i++)
		if (tablica[i] > max)
			max = tablica[i];

	return max;
}

template <> const char * maxn<const char *>(const char *tablica[], int rozmiar)
{
	unsigned int max = strlen(tablica[0]);
	int indeks = 0;

	for (int i = 0; i < rozmiar; i++)
		if (strlen(tablica[i]) > max)
		{
			max = strlen(tablica[i]);
			indeks = i;
		}

	return tablica[indeks];
}