#ifndef _PLORG_H_
#define _PLORG_H_

class Plorg
{
private:
	enum { ROZMIAR = 20 };

	char m_imie[ROZMIAR];
	int m_wspolczynnikSytosci;

public:
	Plorg(const char *imie = "Plorga", int wspolczynnikSytosci = 50);
	~Plorg(void);

	void zmien_wspolczynnik_sytosci(int wspolczynnikSytosci);
	void pokaz_plorga(void) const;

};

#endif