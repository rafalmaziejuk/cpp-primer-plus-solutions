#include <iostream>

template <typename T>      
T ShowArray(T arr[], int n);

template <typename T>
T ShowArray(T *arr[], int n);

struct debts
{
	char name[50];
	double amount;
};

int main(void)
{
	using namespace std;
	
	struct debts mr_E[3] =
	{
		{ "Ima Wolfe", 2400.0 },
		{ "Ura Foxe", 1300.0 },
		{ "Iby Stout", 1800.0 }
	};
	int things[6] = { 13, 31, 103, 301, 310, 130 };
	double *pd[3];

	for (int i = 0; i < 3; i++)
		pd[i] = &mr_E[i].amount;

	cout << "Laczna liczba przedmiotow pana E.:\n";
	cout << ShowArray(things, 6) << endl;
	cout.put('\n');
	cout << "Suma zadluzenia:\n";
	cout << ShowArray(pd, 3) << endl;

	return 0;
}

template <typename T>
T ShowArray(T arr[], int n)
{
	using namespace std;

	T suma = 0;

	for (int i = 0; i < n; i++)
		suma += arr[i];

	return suma;
}

template <typename T>
T ShowArray(T *arr[], int n)
{
	using namespace std;

	T suma = 0;

	for (int i = 0; i < n; i++)
		suma += *arr[i];

	return suma;
}