#ifndef _EXC_MEAN_H_
#define _EXC_MEAN_H_

#include <iostream>

class bad_base : public std::logic_error
{
private:
	double v1;
	double v2;

public:
	bad_base(double a = 0, double b = 0, const char *s = "") : std::logic_error(s), v1(a), v2(b) { }

	double get_v1(void) const { return v1; }
	double get_v2(void) const { return v2; }

	virtual void mesg(void) const = 0;
};

class bad_hmean : public bad_base
{
public:
	bad_hmean(double a = 0, double b = 0) : bad_base(a, b) { }

	void mesg(void) const;
};

inline void bad_hmean::mesg(void) const
{
	std::cout << "hmean(" << get_v1() << ", " << get_v2() << "): " << "niepoprawne argumenty: a = -b\n";
}

class bad_gmean : public bad_base
{
public:
	bad_gmean(double a = 0, double b = 0) : bad_base(a, b) { }
	
	void mesg(void) const;
};

inline void bad_gmean::mesg(void) const
{
	std::cout << "gmean(" << get_v1() << ", " << get_v2() << "): " << "niepoprawne argumenty: a lub b < 0\n";
}

#endif