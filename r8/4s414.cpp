#include <iostream>
#include <cstring>

struct stringy
{
	char *str;
	int ct;
};

void set(stringy &st, const char *lancuch);
void show(const stringy &st, int n = 0);
void show(const char *lancuch, int n = 0);

int main(void)
{
	using namespace std;
	
	stringy beany;
	char testing[] = "Rzeczywistosc to juz nie to co kiedys.";

	set(beany, testing);
	show(beany);
	show(beany, 2);

	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);

	show("Gotowe!");

	return 0;
}

void set(stringy &st, const char *lancuch)
{
	st.str = new char[strlen(lancuch)];
	strcpy(st.str, lancuch);
	st.ct = strlen(lancuch);
}

void show(const stringy &st, int n)
{
	if (n != 0)
	{
		for (int i = 0; i < n; i++)
			std::cout << st.str << std::endl;
	}
	else
		std::cout << st.str << std::endl;

	std::cout.put('\n');
}

void show(const char *lancuch, int n)
{
	if (n != 0)
	{
		for (int i = 0; i < n; i++)
			std::cout << lancuch << std::endl;
	}
	else
		std::cout << lancuch << std::endl;

	std::cout.put('\n');
}