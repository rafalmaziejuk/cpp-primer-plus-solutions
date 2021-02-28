#include <iostream>

struct pudlo
{
	char producent[40];
	float wysokosc;
	float szerokosc;
	float dlugosc;
	float objetosc;
};

void pokaz_pudlo(pudlo p);
void oblicz_objetosc_pudla(pudlo *p);

int main(void)
{
	using namespace std;

	pudlo pudelko =
	{
		"producent pudelka",
		2.5,
		3.5,
		4.5,
		0.0
	};

	pokaz_pudlo(pudelko);
	oblicz_objetosc_pudla(&pudelko);
	pokaz_pudlo(pudelko);

	return 0;
}

void pokaz_pudlo(pudlo p)
{
	std::cout << "Producent: " << p.producent << std::endl;
	std::cout << "Wysokosc: " << p.wysokosc << std::endl;
	std::cout << "Szerokosc: " << p.szerokosc << std::endl;
	std::cout << "Dlugosc: " << p.dlugosc << std::endl;
	std::cout << "Objetosc: " << p.objetosc << std::endl;
	std::cout << std::endl;
}

void oblicz_objetosc_pudla(pudlo *p)
{
	p->objetosc = p->wysokosc * p->szerokosc * p->dlugosc;
}