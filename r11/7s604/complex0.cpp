#include "complex0.h"

complex::complex(void)
{
	m_rzeczywista = m_urojona = 0.0;
}

complex::complex(double rzeczywista, double urojona)
{
	m_rzeczywista = rzeczywista;
	m_urojona = urojona;
}

complex::~complex(void)
{

}

complex complex::operator+(const complex &c) const
{
	return complex(m_rzeczywista + c.m_rzeczywista, m_urojona + c.m_urojona);
}

complex complex::operator-(const complex &c) const
{
	return complex(m_rzeczywista - c.m_rzeczywista, m_urojona - c.m_urojona);
}
 
complex complex::operator*(const complex &c) const
{
	double czescRzeczywista = m_rzeczywista * c.m_rzeczywista - m_urojona * c.m_urojona;
	double czescUrojona = m_rzeczywista * c.m_urojona + c.m_rzeczywista * m_urojona;

	return complex(czescRzeczywista, czescUrojona);
}

complex complex::operator~(void) const
{
	return complex(m_rzeczywista, -m_urojona);
}

complex operator*(double x, const complex &c)
{
	return complex(x * c.m_rzeczywista, x * c.m_urojona);
}

std::ostream & operator<<(std::ostream &os, const complex &c)
{
	os << '(' << c.m_rzeczywista << ", " << c.m_urojona << "i)";
	
	return os;
}

std::istream & operator>>(std::istream &is, complex &c)
{
	std::cout << "skladowa rzeczywista: ";
	is >> c.m_rzeczywista;

	std::cout << "skladowa urojona: ";
	is >> c.m_urojona;

	return is;
}