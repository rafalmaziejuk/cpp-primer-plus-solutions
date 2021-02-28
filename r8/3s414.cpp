#include <iostream>
#include <string>
#include <cctype>

void zamien_na_wielkie(std::string &lancuch);

int main(void)
{
	using namespace std;
	
	string napis;

	cout << "Podaj lancuch (q, aby skonczyc): ";
	while ((getline(cin, napis)) && (napis != "q"))
	{
		zamien_na_wielkie(napis);

		cout << napis << endl;
		cout << "Nastepny lancuch (q, aby skonczyc): ";
	}

	cout << "Do widzenia" << endl;

	return 0;
}

void zamien_na_wielkie(std::string &lancuch)
{
	for (int i = 0; i < lancuch.size(); i++)
		lancuch[i] = toupper(lancuch[i]);
}