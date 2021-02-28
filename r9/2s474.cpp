#include <iostream>
#include <string>

const int ArSize = 10;

void strcount(std::string str);

int main(void)
{
	using namespace std;

	string input;
	char next;

	cout << "Wprowadz wiersz:\n";
	getline(cin, input);

	while (input != "")
	{
		strcount(input);

		cout << "Wprowadz nastepny wiersz (wiersz pusty konczy wprowadzanie):\n";
		getline(cin, input);
	}

	cout << "Koniec\n";

	return 0;
}

void strcount(std::string str)
{
	using namespace std;

	static int total = 0;          
	int count = 0;                 

	cout << "\"" << str << "\" zawiera ";

	count = str.size();
	total += count;

	cout << count << " znakow\n";
	cout << "Lacznie " << total << " znakow\n";
}