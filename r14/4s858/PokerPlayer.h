#ifndef _POKERPLAYER_H_
#define _POKERPLAYER_H_

#include "Person.h"

class PokerPlayer : virtual public Person
{
protected:
	void Dane(void) const;
	void Wpisz(void);
public:
	PokerPlayer(void) : Person() { }
	PokerPlayer(const char *imie, const char *nazwisko) : Person(imie, nazwisko) { }
	PokerPlayer(const Person &p) : Person(p) { }

	void Show(void) const;
	void Ustaw(void);
	int Draw(void) const;
};

#endif