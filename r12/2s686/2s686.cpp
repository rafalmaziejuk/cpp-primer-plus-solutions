#include <iostream>	
#include "string2.h"

using namespace std;

int main(void)
{
	String s1(" i ucze sie C++.");
	String s2 = "Podaj swoje imie: ";
	String s3;

	cout << s2;

	cin >> s3;
	s2 = "Mam na imie " + s3;
	cout << s2 << ".\n";

	s2 = s2 + s1;
	s2.stringup();

	cout << "Ciag\n" << s2 << "\nzawiera " << s2.has('A') << " 'A'.\n";

	s1 = "czerwona";

	String rgb[3] =
	{
		String(s1),
		String("zielona"),
		String("niebieska")
	};

	cout << "Podaj nazwe barwy podstawowej: ";
	String ans;
	bool success = false;

	while (cin >> ans)
	{
		ans.stringlow();

		for (int i = 0; i < 3; i++)
			if (ans == rgb[i])
			{
				cout << "Prawidlowo!\n";
				success = true;
				break;
			}

		if (success)
			break;
		else
			cout << "Sprobuj ponownie!\n";
	}

	cout << "Zegnam!\n";

	return 0;
}