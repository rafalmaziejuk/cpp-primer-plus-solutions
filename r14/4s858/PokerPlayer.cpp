#include <iostream>
#include <cstdlib>
#include "PokerPlayer.h"

void PokerPlayer::Dane(void) const
{

}

void PokerPlayer::Wpisz(void)
{
	Person::Wpisz();
}

void PokerPlayer::Show(void) const
{
	std::cout << "POKERZYSTA" << std::endl;
	Person::Dane();
	Dane();
}

void PokerPlayer::Ustaw(void)
{
	std::cout << "Podaj imie i nazwisko pokerzysty." << std::endl;
	Wpisz();
}

int PokerPlayer::Draw(void) const
{
	return rand() % 52 + 1;
}