#include <iostream>

void pokaz_lancuch(const char *lancuch, int n = 0);

int main(void)
{
	using namespace std;
	
	const char *napis = "Lancuch do pokazania.\n";

	pokaz_lancuch(napis);
	cout.put('\n');
	pokaz_lancuch(napis, 5);

	return 0;
}

void pokaz_lancuch(const char *lancuch, int n)
{
	if (n != 0)
	{
		for (int i = 0; i < n; i++)
			std::cout << lancuch;
	}
	else
		std::cout << lancuch;
}