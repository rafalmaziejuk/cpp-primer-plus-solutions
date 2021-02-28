#include <iostream>

int main(void)
{
	using namespace std;

	int odleglosc;

	cout << "Podaj odleglosc w milach morskich: ";
	cin >> odleglosc;

	cout << "Podana odleglosc w metrach to " << odleglosc * 1852 << ".\n";

	return 0;
}