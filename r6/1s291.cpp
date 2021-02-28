#include <iostream>
#include <cctype>

int main(void)
{
	using namespace std;

	char znak;

	cout << "Podawaj znaki: ";
	while ((cin.get(znak)) && (znak != '@'))
	{
		if (!isdigit(znak))
		{
			if (islower(znak))
				cout.put(toupper(znak));
			else if (isupper(znak))
				cout.put(tolower(znak));
			else
				cout.put(znak);
		}

		cout.put('\n');
	}

	return 0;
}