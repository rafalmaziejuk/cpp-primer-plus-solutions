#ifndef _COMPLEX0_H_
#define _COMPLEX0_H_

#include <iostream>

class complex
{
private: 
	double m_rzeczywista;
	double m_urojona;

public:
	complex(void);
	complex(double rzeczywista, double urojona);
	~complex(void);

	complex operator+(const complex &c) const;
	complex operator-(const complex &c) const;
	complex operator*(const complex &c) const;
	complex operator~(void) const;

	friend complex operator*(double x, const complex &c);
	friend std::ostream & operator<<(std::ostream &os, const complex &c);
	friend std::istream & operator>>(std::istream &is, complex &c);
};

#endif