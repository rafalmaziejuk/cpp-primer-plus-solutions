#ifndef _RACHUNEKBANKOWY_H_
#define _RACHUNEKBANKOWY_H_

#include <string>

class RachunekBankowy
{
private:
	enum { ROZMIAR = 11 };

	std::string m_nazwisko;
	char m_numerRachunku[ROZMIAR];
	double m_saldo;

public:
	RachunekBankowy(const std::string &nazwisko = "puste", const char *numerRachunku = "puste", double saldo = 0.0);
	~RachunekBankowy(void);

	void pokaz_rachunek(void) const;
	void przyjmij_depozyt(double kwota);
	void wydaj_kwote(double kwota);
};

#endif