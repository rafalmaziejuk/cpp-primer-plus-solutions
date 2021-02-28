#include <iostream>

void funkcja1(void);
void funkcja2(void);

int main(void)
{
	funkcja1();
	funkcja1();
	funkcja2();
	funkcja2();

	return 0;
}

void funkcja1(void)
{
	using namespace std;

	cout << "Entliczek pentliczek" << endl;
}

void funkcja2(void)
{
	using namespace std;

	cout << "Czerwony stoliczek" << endl;
}