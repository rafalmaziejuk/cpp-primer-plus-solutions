#include <iostream>

long double probability(unsigned int numbers, unsigned int picks);

int main(void)
{
	using namespace std;

	double total, choices, choices2;

	cout << "Podaj pierwszy przedzial oraz ilosc skreslen: ";
	while ((cin >> total >> choices) && (choices <= total))
	{
		cout << "Podaj drugi przedzial: ";
		cin >> choices2;
		cout << "Prawdopodobienstwo odgadniecia wszystkich liczb wynosi: " << probability(total, choices) * probability(choices2);
	}
	cout << "do widzenia\n";

	return 0;
}

long double probability(unsigned int numbers, unsigned int picks)
{
	long double result = 1.0;
	long double n;
	unsigned p;

	for (n = numbers, p = picks; p > 0; n--, p--)
		result = result * n / p;
	return result;
}