#include <iostream>
#include <string>

struct Car
{
	std::string marka;
	int rokBudowy;
};

int main(void)
{
	using namespace std;

	int liczbaSamochodow;

	cout << "Ile samochodow chcesz skatalogowac? ";
	cin >> liczbaSamochodow;

	cin.ignore();

	Car *samochody = new Car[liczbaSamochodow];

	for (int i = 0; i < liczbaSamochodow; i++)
	{
		cout << "Samochod #" << i + 1 << ":" << endl;

		cout << "Prosze podac marke: ";
		getline(cin, samochody[i].marka);

		cout << "Rok produkcji: ";
		cin >> samochody[i].rokBudowy;

		cin.ignore();
	}

	for (int i = 0; i < liczbaSamochodow; i++)
		cout << samochody[i].rokBudowy << " " << samochody[i].marka << endl;

	delete[] samochody;

	return 0;
}