#ifndef _PERSON_H_
#define _PERSON_H_

#include <string>

class Person
{
private:
	std::string m_imie;
	std::string m_nazwisko;

protected:
	virtual void Dane(void) const;
	virtual void Wpisz(void);

public:
	Person(void) : m_imie("brak"), m_nazwisko("brak") { }
	Person(const char *imie, const char *nazwisko) : m_imie(imie), m_nazwisko(nazwisko) { }
	virtual ~Person(void) = 0;

	virtual void Show(void) const = 0;
	virtual void Ustaw(void) = 0;
};

#endif