#include "Port.h"
#include <cstring>

Port::Port(const char *br, const char *st, int b)
{
	brand = new char[std::strlen(br) + 1];
	std::strncpy(brand, br, std::strlen(br));
	brand[std::strlen(br)] = '\0';

	strncpy(style, st, 19);

	bottles = b;
}

Port::Port(const Port &p)
{
	brand = new char[std::strlen(p.brand) + 1];
	std::strncpy(brand, p.brand, std::strlen(p.brand));
	brand[std::strlen(p.brand)] = '\0';

	strncpy(style, p.style, 19);

	bottles = p.bottles;
}

Port::~Port(void)
{
	delete[] brand;
}

int Port::BottleCount(void) const
{
	return bottles;
}

void Port::Show(void) const
{
	std::cout << "Marka: " << brand << std::endl;
	std::cout << "Rodzaj: " << style << std::endl;
	std::cout << "Butelek: " << bottles << std::endl;
	std::cout.put('\n');
}
Port & Port::operator=(const Port &p)
{
	if (this == &p)
		return *this;

	delete[] brand;
	brand = new char[std::strlen(p.brand) + 1];
	std::strncpy(brand, p.brand, std::strlen(p.brand));
	brand[std::strlen(p.brand)] = '\0';

	strncpy(style, p.style, 19);

	bottles = p.bottles;

	return *this;
}

Port & Port::operator+=(int b)
{
	bottles += b;

	return *this;
}

Port & Port::operator-=(int b)
{
	if (b < bottles)
		bottles -= b;
	else
		std::cout << "Operacja nie jest mozliwa. Za mala liczba butelek!\n";

	return *this;
}

std::ostream & operator<<(std::ostream &os, const Port &p)
{
	os << p.brand << ", " << p.style << ", " << p.bottles;

	return os;
}

VintagePort::VintagePort(void) : Port()
{
	nickname = new char[1];
	nickname[0] = '\0';

	year = 0;
}

VintagePort::VintagePort(const char *br, int b, const char *nn, int y) : Port(br, "najlepszy rocznik", b)
{
	nickname = new char[std::strlen(nn) + 1];
	std::strncpy(nickname, nn, std::strlen(nn));
	nickname[std::strlen(nn)] = '\0';

	year = y;
}

VintagePort::VintagePort(const VintagePort &vp) : Port(vp)
{
	nickname = new char[std::strlen(vp.nickname) + 1];
	std::strncpy(nickname, vp.nickname, std::strlen(vp.nickname));
	nickname[std::strlen(vp.nickname)] = '\0';

	year = vp.year;
}

VintagePort::~VintagePort(void)
{
	delete[] nickname;
}

void VintagePort::Show(void) const
{
	Port::Show();

	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Rok: " << year << std::endl;
}

VintagePort & VintagePort::operator=(const VintagePort &vp)
{
	if (this == &vp)
		return *this;

	Port::operator=(vp);

	delete[] nickname;
	nickname = new char[std::strlen(vp.nickname) + 1];
	std::strncpy(nickname, vp.nickname, std::strlen(vp.nickname));
	nickname[std::strlen(vp.nickname)] = '\0';

	year = vp.year;

	return *this;
}

std::ostream & operator<<(std::ostream &os, const VintagePort &vp)
{
	os << vp.nickname << ", " << vp.year;

	return os;
}