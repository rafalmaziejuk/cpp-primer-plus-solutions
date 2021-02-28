#ifndef _WINEC_H_
#define _WINEC_H_

#include <iostream>
#include <string>
#include <valarray>

template <class T1, class T2>
class Pair
{
private:
	T1 a;
	T2 b;

public:
	Pair(const T1 & aval, const T2 & bval) : a(aval), b(bval) { }
	Pair(void) { }

	T1 & first(void);
	T2 & second(void);

	T1 first(void) const { return a; }
	T2 second(void) const { return b; }
};

template <class T1, class T2>
T1 & Pair<T1, T2>::first(void)
{
	return a;
}

template <class T1, class T2>
T2 & Pair<T1, T2>::second(void)
{
	return b;
}

typedef std::valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;

class Wine : private PairArray, private std::string
{
private:
	//std::string m_nazwa_wina;
	int m_liczba_lat;
	//PairArray m_informacje;

public:
	Wine(const char *l, int y, const int yr[], const int bot[]);
	Wine(const char *l, int y);

	void GetBottles(void);
	const std::string & Label(void) const;
	int sum(void) const;
	void Show(void) const;
};

#endif