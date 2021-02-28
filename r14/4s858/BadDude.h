#ifndef _BADDUDE_H_
#define _BADDUDE_H_

#include "GunSlinger.h"
#include "PokerPlayer.h"

class BadDude : public GunSlinger, public PokerPlayer
{
protected:
	void Dane(void) const;
	void Wpisz(void);

public:
	BadDude(void) { }
	BadDude(const char *imie, const char *nazwisko, double czasWyciagania = 0.0, int liczbaNaciec = 0) : Person(imie, nazwisko), GunSlinger(imie, nazwisko, czasWyciagania, liczbaNaciec), PokerPlayer(imie, nazwisko) { }
	BadDude(const Person &p, double czasWyciagania = 0.0, int liczbaNaciec = 0) : Person(p), GunSlinger(p, czasWyciagania, liczbaNaciec), PokerPlayer(p) { }
	BadDude(const GunSlinger &gs) : Person(gs), GunSlinger(gs), PokerPlayer(gs) { }
	BadDude(const PokerPlayer &pp, double czasWyciagania = 0.0, int liczbaNaciec = 0) : Person(pp), GunSlinger(pp, czasWyciagania, liczbaNaciec), PokerPlayer(pp) { }

	void Show(void) const;
	void Ustaw(void);
	double GDraw(void) const;
	int CDraw(void) const;
};

#endif