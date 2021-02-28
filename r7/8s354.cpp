#include <iostream>

const int SLEN = 30;

struct student
{
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student *ps);
void display3(const student pa[], int n);

int main(void)
{
	using namespace std;
	
	int class_size;

	cout << "Podaj wielkosc grupy: ";
	cin >> class_size;

	while (cin.get() != '\n')
		continue;

	student *ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);

	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}

	display3(ptr_stu, entered);

	delete[] ptr_stu;

	cout << "Gotowe.\n";

	return 0;
}

int getinfo(student pa[], int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		std::cout << std::endl << "Student nr " << i + 1 << std::endl;

		std::cout << "Podaj nazwisko (pozostaw puste, aby skonczyc wprowadzanie): ";
		std::cin.getline(pa[i].fullname, SLEN);

		if (pa[i].fullname[0] == '\0')
		{
			std::cout << "Wprowadzanie danych zostalo przerwane!" << std::endl;
			break;
		}

		std::cout << "Podaj hobby: ";
		std::cin >> pa[i].hobby;

		std::cout << "Podaj \"ooplevel\": ";
		std::cin >> pa[i].ooplevel;
		std::cin.ignore();
	}

	std::cout.put('\n');

	return i;
}

void display1(student st)
{
	std::cout << "Nazwisko: " << st.fullname << std::endl;
	std::cout << "Hobby: " << st.hobby << std::endl;
	std::cout << "\"ooplevel\":" << st.ooplevel << std::endl;
	std::cout.put('\n');
}

void display2(const student *ps)
{
	std::cout << "Nazwisko: " << ps->fullname << std::endl;
	std::cout << "Hobby: " << ps->hobby << std::endl;
	std::cout << "\"ooplevel\":" << ps->ooplevel << std::endl;
	std::cout.put('\n');
}

void display3(const student pa[], int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << "Nazwisko: " << pa[i].fullname << std::endl;
		std::cout << "Hobby: " << pa[i].hobby << std::endl;
		std::cout << "\"ooplevel\":" << pa[i].ooplevel << std::endl;
		std::cout.put('\n');
	}
}