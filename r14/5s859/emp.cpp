#include "emp.h"

abstr_emp::abstr_emp(void)
{
	fname = lname = job = "brak";
}

abstr_emp::abstr_emp(const std::string &fn, const std::string &ln, const std::string &j) : fname(fn), lname(ln), job(j)
{

}

abstr_emp::~abstr_emp(void)
{

}

void abstr_emp::ShowAll(void) const
{
	std::cout << "Imie: " << fname << std::endl;
	std::cout << "Nazwisko: " << lname << std::endl;
	std::cout << "Zawod: " << job << std::endl;
	std::cout.put('\n');
}

void abstr_emp::SetAll(void)
{
	std::cout << "Podaj imie: ";
	std::getline(std::cin, fname);
	std::cout << "Podaj nazwisko: ";
	std::getline(std::cin, lname);
	std::cout << "Podaj zawod: ";
	std::getline(std::cin, job);
}

std::ostream & operator<<(std::ostream &os, const abstr_emp &e)
{
	os << e.fname << " " << e.lname << std::endl;
	return os;
}

employee::employee(void) : abstr_emp()
{

}

employee::employee(const std::string &fn, const std::string &ln, const std::string &j) : abstr_emp(fn, ln, j)
{

}

void employee::ShowAll(void) const
{
	abstr_emp::ShowAll();
	std::cout.put('\n');
}

void employee::SetAll(void)
{
	abstr_emp::SetAll();
}

manager::manager(void) : abstr_emp()
{

}

manager::manager(const std::string &fn, const std::string &ln, const std::string &j, int ico) : abstr_emp(fn, ln, j), inchargeof(ico)
{

}

manager::manager(const abstr_emp &e, int ico) : abstr_emp(e), inchargeof(ico)
{

}

manager::manager(const manager &m) : abstr_emp(m)
{
	inchargeof = m.inchargeof;
}

void manager::ShowAll(void) const
{
	abstr_emp::ShowAll();
	std::cout << "Liczba obiektow: " << inchargeof << std::endl;
	std::cout.put('\n');
}

void manager::SetAll(void)
{
	abstr_emp::SetAll();
	std::cout << "Podaj liczbe obiektow: ";
	(std::cin >> inchargeof).get();
}

fink::fink(void) : abstr_emp()
{

}

fink::fink(const std::string &fn, const std::string &ln, const std::string &j, const std::string &rpo) : abstr_emp(fn, ln, j), reportsto(rpo)
{

}

fink::fink(const abstr_emp &e, const std::string &rpo) : abstr_emp(e), reportsto(rpo)
{

}

fink::fink(const fink &e) : abstr_emp(e)
{
	reportsto = e.reportsto;
}

void fink::ShowAll(void) const
{
	abstr_emp::ShowAll();
	std::cout << "Donosi do: " << reportsto << std::endl;
	std::cout.put('\n');
}

void fink::SetAll(void)
{
	abstr_emp::SetAll();
	std::cout << "Do kogo donosi: ";
	std::getline(std::cin, reportsto);
}

highfink::highfink(void)
{

}

highfink::highfink(const std::string &fn, const std::string &ln, const std::string &j, const std::string &rpo, int ico) : abstr_emp(fn, ln, j), manager(fn, ln, j, ico), fink(fn, ln, j, rpo)
{

}

highfink::highfink(const abstr_emp &e, const std::string &rpo, int ico): abstr_emp(e), manager(e, ico), fink(e, rpo)
{

}

highfink::highfink(const fink &f, int ico) : abstr_emp(f), manager(f, ico), fink(f)
{

}

highfink::highfink(const manager &m, const std::string &rpo) : abstr_emp(m), manager(m), fink(m, rpo)
{

}

highfink::highfink(const highfink &h) : abstr_emp(h), manager(h), fink(h)
{

}

void highfink::ShowAll(void) const
{
	abstr_emp::ShowAll();
	std::cout << "Liczba obiektow: " << manager::InChargeOf() << std::endl;
	std::cout << "Donosi do: " << fink::ReportsTo() << std::endl;
	std::cout.put('\n');
}

void highfink::SetAll(void)
{
	abstr_emp::SetAll();
	std::cout << "Podaj liczbe obiektow: ";
	(std::cin >> manager::InChargeOf()).get();
	std::cout << "Do kogo donosi: ";
	std::getline(std::cin, fink::ReportsTo());
}