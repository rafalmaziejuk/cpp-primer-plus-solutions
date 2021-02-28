#include <iostream>
#include <cstring>
#include "stock2.h"

Stock::Stock(void)
{
	company = new char[std::strlen("brak nazwy") + 1];
	strncpy(company, "brak nazwy", std::strlen("brak nazwy"));
	company[std::strlen("brak nazwy")] = '\0';
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}

Stock::Stock(const char *co, int n, double pr)
{
	company = new char[std::strlen(co) + 1];
	strncpy(company, co, std::strlen(co));
	company[std::strlen(co)] = '\0';

	if (n < 0)
	{
		std::cerr << "Liczba udzialow nie moze byc ujemna; " << "ustalam liczbe udzialow w " << company << " na 0.\n";
		shares = 0;
	}
	else
		shares = n;

	share_val = pr;
	set_tot();
}

Stock::Stock(const Stock &s)
{
	company = new char[strlen(s.company) + 1];
	strncpy(company, s.company, strlen(s.company));
	company[strlen(s.company)] = '\0';

	shares = s.shares;
	share_val = s.share_val;
	total_val = s.total_val;
}

Stock::~Stock(void)
{
	delete[] company;
}

void Stock::buy(int num, double price)
{
	if (num < 0)
	{
		std::cerr << "Liczba nabywanych udzia³ów nie mo¿e byæ ujemna. " << "Transakcja przerwana.\n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(int num, double price)
{
	using std::cerr;

	if (num > 0)
	{
		cerr << "Liczba sprzedawanych udzia³ów nie mo¿e byæ ujemna. " << "Transakcja przerwana.\n";
	}
	else if (num > shares)
	{
		cerr << "Nie mo¿esz sprzedaæ wiêcej udzia³ów, ni¿ posiadasz! " << "Transakcja przerwana.\n";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}

void Stock::update(double price)
{
	share_val = price;
	set_tot();
}

const Stock & Stock::topval(const Stock &s) const
{
	if (s.total_val > total_val)
		return s;
	else
		return *this;
}

Stock & Stock::operator=(const Stock &s)
{
	if (this == &s)
		return *this;

	delete[] company;

	company = new char[strlen(s.company) + 1];
	strncpy(company, s.company, strlen(s.company));
	company[strlen(s.company)] = '\0';

	shares = s.shares;
	share_val = s.share_val;
	total_val = s.total_val;

	return *this;
}

std::ostream & operator<<(std::ostream &os, const Stock &s)
{
	os << "Spolka: " << s.company << "  Liczba udzialow: " << s.shares << std::endl;
	os << "  Cena udzialu: " << s.share_val << " zl";
	os << "  Laczna wartosc udzialow: " << s.total_val << " zl" << std::endl;

	return os;
}