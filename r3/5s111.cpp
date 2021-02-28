#include <iostream>

void program1(void);
void program2(void);

int main(void)
{
	program1();
	program2();	

	return 0;
}

void program1(void)
{
	using namespace std;

	double mile, galonyZuzyte;

	cout << "Ile mil przejechales? ";
	cin >> mile;

	cout << "Ile galonow paliwa zuzyles? ";
	cin >> galonyZuzyte;

	cout << "Twoj samochod przebyl " << mile / galonyZuzyte << " mil na galon paliwa." << endl << endl;
}

void program2(void)
{
	using namespace std;

	double kilometry, litry;

	cout << "Ile kilometrow przejechales? ";
	cin >> kilometry;
	cout << "Ile litrow benzyny zuzyles? ";
	cin >> litry;

	cout << "Zuzyto: " << kilometry / litry << " km/l." << endl;
}