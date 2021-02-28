#include <iostream>
#include "BadDude.h"

void BadDude::Dane(void) const
{
	GunSlinger::Dane();
	PokerPlayer::Dane();
}

void BadDude::Wpisz(void)
{
	PokerPlayer::Wpisz();
	GunSlinger::Wpisz();
}

void BadDude::Show(void) const
{
	std::cout << "ZLY GOSC" << std::endl;
	Person::Dane();
	Dane();
}

void BadDude::Ustaw(void)
{
	std::cout << "Podaj imie i nazwisko zlego goscia." << std::endl;
	Wpisz();
}

double BadDude::GDraw(void) const
{
	return GunSlinger::Draw();
}

int BadDude::CDraw(void) const
{
	return PokerPlayer::Draw();
}