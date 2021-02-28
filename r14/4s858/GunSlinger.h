#ifndef _GUNSLINGER_H_
#define _GUNSLINGER_H_

#include "Person.h"

class GunSlinger : virtual public Person
{
private:
	double m_czasWyciagania;
	int m_liczbaNaciec;

protected:
	void Dane(void) const;
	void Wpisz(void);

public:
	GunSlinger(void) : Person(), m_czasWyciagania(0.0), m_liczbaNaciec(0) { }
	GunSlinger(const char *imie, const char *nazwisko, double czasWyciagania = 0.0, int liczbaNaciec = 0) : Person(imie, nazwisko), m_czasWyciagania(czasWyciagania), m_liczbaNaciec(liczbaNaciec) { }
	GunSlinger(const Person &p, double czasWyciagania, int liczbaNaciec) : Person(p), m_czasWyciagania(czasWyciagania), m_liczbaNaciec(liczbaNaciec) { }

	void Show(void) const;
	void Ustaw(void);
	double Draw(void) const;
};

#endif